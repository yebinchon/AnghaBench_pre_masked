
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rid ;
typedef int _GLFWwindow ;
struct TYPE_3__ {int member_0; int member_1; int * member_3; int member_2; } ;
typedef TYPE_1__ RAWINPUTDEVICE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_2)
{
    const RAWINPUTDEVICE VAR_3 = { 0x01, 0x02, &VAR_1, ((void*)0) };

    if (!FUNC_0(&VAR_3, 1, sizeof(VAR_3)))
    {
        FUNC_1(VAR_0,
                             "Win32: Failed to remove raw input device");
    }
}
