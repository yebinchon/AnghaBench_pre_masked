
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int member_2; int member_3; int right; int left; int bottom; int top; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(DWORD VAR_1, DWORD VAR_2,
                              int VAR_3, int VAR_4,
                              int* VAR_5, int* VAR_6,
                              UINT VAR_7)
{
    RECT VAR_8 = { 0, 0, VAR_3, VAR_4 };

    if (FUNC_2())
        FUNC_1(&VAR_8, VAR_1, VAR_0, VAR_2, VAR_7);
    else
        FUNC_0(&VAR_8, VAR_1, VAR_0, VAR_2);

    *VAR_5 = VAR_8.right - VAR_8.left;
    *VAR_6 = VAR_8.bottom - VAR_8.top;
}
