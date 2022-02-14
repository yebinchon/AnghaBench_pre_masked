
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int instanceName; int className; } ;
struct TYPE_6__ {int frameName; } ;
struct TYPE_7__ {TYPE_3__ x11; TYPE_1__ ns; } ;
struct TYPE_9__ {TYPE_2__ window; } ;
struct TYPE_10__ {TYPE_4__ hints; } ;



 int VAR_0 ;


 int FUNC_0 () ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;

void FUNC_4(int VAR_2, const char* VAR_3)
{
    FUNC_2(VAR_3 != ((void*)0));

    FUNC_0();

    switch (VAR_2)
    {
        case 130:
            FUNC_3(VAR_1.hints.window.ns.frameName, VAR_3,
                    sizeof(VAR_1.hints.window.ns.frameName) - 1);
            return;
        case 129:
            FUNC_3(VAR_1.hints.window.x11.className, VAR_3,
                    sizeof(VAR_1.hints.window.x11.className) - 1);
            return;
        case 128:
            FUNC_3(VAR_1.hints.window.x11.instanceName, VAR_3,
                    sizeof(VAR_1.hints.window.x11.instanceName) - 1);
            return;
    }

    FUNC_1(VAR_0, "Invalid window hint string 0x%08X", VAR_2);
}
