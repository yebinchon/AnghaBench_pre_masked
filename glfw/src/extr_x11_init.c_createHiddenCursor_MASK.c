
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; unsigned char* member_2; } ;
typedef TYPE_1__ GLFWimage ;
typedef int Cursor ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static Cursor FUNC_1(void)
{
    unsigned char VAR_0[16 * 16 * 4] = { 0 };
    GLFWimage VAR_1 = { 16, 16, VAR_0 };
    return FUNC_0(&VAR_1, 0, 0);
}
