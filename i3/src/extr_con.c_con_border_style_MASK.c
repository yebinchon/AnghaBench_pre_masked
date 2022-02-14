
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ layout; scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ fullscreen_mode; int border_style; TYPE_2__* parent; } ;
typedef TYPE_1__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(Con *VAR_7) {
    if (VAR_7->fullscreen_mode == VAR_3 || VAR_7->fullscreen_mode == VAR_2) {
        FUNC_0("this one is fullscreen! overriding BS_NONE\n");
        return VAR_0;
    }

    if (VAR_7->parent->layout == VAR_5)
        return (FUNC_1(VAR_7->parent) == 1 ? VAR_7->border_style : VAR_1);

    if (VAR_7->parent->layout == VAR_6 && VAR_7->border_style != VAR_1)
        return (FUNC_1(VAR_7->parent) == 1 ? VAR_7->border_style : VAR_1);

    if (VAR_7->parent->type == VAR_4)
        return VAR_0;

    return VAR_7->border_style;
}
