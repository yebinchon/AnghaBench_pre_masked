
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int requestor; int time; int target; int selection; int display; } ;
typedef TYPE_3__ XSelectionRequestEvent ;
struct TYPE_9__ {int time; int target; int selection; int requestor; int display; int property; } ;
struct TYPE_12__ {TYPE_1__ xselection; int member_0; TYPE_3__ xselectionrequest; } ;
typedef TYPE_4__ XEvent ;
struct TYPE_10__ {int display; } ;
struct TYPE_13__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_4__*) ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (TYPE_3__ const*) ;

__attribute__((used)) static void FUNC_2(XEvent* VAR_3)
{
    const XSelectionRequestEvent* VAR_4 = &VAR_3->xselectionrequest;

    XEvent VAR_5 = { VAR_1 };
    VAR_5.xselection.property = FUNC_1(VAR_4);
    VAR_5.xselection.display = VAR_4->display;
    VAR_5.xselection.requestor = VAR_4->requestor;
    VAR_5.xselection.selection = VAR_4->selection;
    VAR_5.xselection.target = VAR_4->target;
    VAR_5.xselection.time = VAR_4->time;

    FUNC_0(VAR_2.x11.display, VAR_4->requestor, VAR_0, 0, &VAR_5);
}
