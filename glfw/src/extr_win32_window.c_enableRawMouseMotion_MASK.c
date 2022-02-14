
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rid ;
struct TYPE_6__ {int handle; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {int member_0; int member_1; int member_3; int member_2; } ;
typedef TYPE_3__ RAWINPUTDEVICE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_1)
{
    const RAWINPUTDEVICE VAR_2 = { 0x01, 0x02, 0, VAR_1->win32.handle };

    if (!FUNC_0(&VAR_2, 1, sizeof(VAR_2)))
    {
        FUNC_1(VAR_0,
                             "Win32: Failed to register raw input device");
    }
}
