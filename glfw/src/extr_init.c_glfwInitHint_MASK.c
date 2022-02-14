
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chdir; int menubar; } ;
struct TYPE_4__ {int hatButtons; TYPE_1__ ns; } ;




 int VAR_0 ;

 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

void FUNC_1(int VAR_2, int VAR_3)
{
    switch (VAR_2)
    {
        case 128:
            VAR_1.hatButtons = VAR_3;
            return;
        case 130:
            VAR_1.ns.chdir = VAR_3;
            return;
        case 129:
            VAR_1.ns.menubar = VAR_3;
            return;
    }

    FUNC_0(VAR_0,
                    "Invalid init hint 0x%08X", VAR_2);
}
