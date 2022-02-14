
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ XPointer ;
struct TYPE_5__ {scalar_t__ requestor; scalar_t__ property; } ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ window; scalar_t__ atom; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ xselection; TYPE_2__ xproperty; } ;
typedef TYPE_3__ XEvent ;
typedef int Display ;
typedef int Bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Bool FUNC_0(Display* VAR_2, XEvent* VAR_3, XPointer VAR_4)
{
    XEvent* VAR_5 = (XEvent*) VAR_4;
    return VAR_3->type == VAR_1 &&
           VAR_3->xproperty.state == VAR_0 &&
           VAR_3->xproperty.window == VAR_5->xselection.requestor &&
           VAR_3->xproperty.atom == VAR_5->xselection.property;
}
