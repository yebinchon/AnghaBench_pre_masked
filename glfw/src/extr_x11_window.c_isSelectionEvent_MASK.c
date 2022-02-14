
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int XPointer ;
struct TYPE_6__ {scalar_t__ window; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ xany; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_7__ {scalar_t__ helperWindowHandle; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;
typedef int Display ;
typedef int Bool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static Bool FUNC_0(Display* VAR_5, XEvent* VAR_6, XPointer VAR_7)
{
    if (VAR_6->xany.window != VAR_4.x11.helperWindowHandle)
        return VAR_0;

    return VAR_6->type == VAR_3 ||
           VAR_6->type == VAR_2 ||
           VAR_6->type == VAR_1;
}
