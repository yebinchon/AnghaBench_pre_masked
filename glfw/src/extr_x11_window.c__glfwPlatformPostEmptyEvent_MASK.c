
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int format; int message_type; int window; } ;
struct TYPE_8__ {TYPE_1__ xclient; int member_0; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_7__ {int display; int helperWindowHandle; int NULL_; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_3__*) ;
 TYPE_4__ VAR_2 ;

void FUNC_2(void)
{
    XEvent VAR_3 = { VAR_0 };
    VAR_3.xclient.window = VAR_2.x11.helperWindowHandle;
    VAR_3.xclient.format = 32;
    VAR_3.xclient.message_type = VAR_2.x11.NULL_;

    FUNC_1(VAR_2.x11.display, VAR_2.x11.helperWindowHandle, VAR_1, 0, &VAR_3);
    FUNC_0(VAR_2.x11.display);
}
