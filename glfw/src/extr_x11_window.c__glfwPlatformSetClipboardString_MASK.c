
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ helperWindowHandle; int CLIPBOARD; int display; int clipboardString; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;

void FUNC_5(const char* VAR_3)
{
    FUNC_4(VAR_2.x11.clipboardString);
    VAR_2.x11.clipboardString = FUNC_3(VAR_3);

    FUNC_1(VAR_2.x11.display,
                       VAR_2.x11.CLIPBOARD,
                       VAR_2.x11.helperWindowHandle,
                       VAR_0);

    if (FUNC_0(VAR_2.x11.display, VAR_2.x11.CLIPBOARD) !=
        VAR_2.x11.helperWindowHandle)
    {
        FUNC_2(VAR_1,
                        "X11: Failed to become owner of clipboard selection");
    }
}
