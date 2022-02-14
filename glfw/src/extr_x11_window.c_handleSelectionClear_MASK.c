
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ selection; } ;
struct TYPE_8__ {TYPE_1__ xselectionclear; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_7__ {scalar_t__ PRIMARY; int * clipboardString; int * primarySelectionString; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(XEvent* VAR_1)
{
    if (VAR_1->xselectionclear.selection == VAR_0.x11.PRIMARY)
    {
        FUNC_0(VAR_0.x11.primarySelectionString);
        VAR_0.x11.primarySelectionString = ((void*)0);
    }
    else
    {
        FUNC_0(VAR_0.x11.clipboardString);
        VAR_0.x11.clipboardString = ((void*)0);
    }
}
