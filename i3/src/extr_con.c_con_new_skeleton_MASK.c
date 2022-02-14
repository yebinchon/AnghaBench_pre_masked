
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int depth; } ;
typedef TYPE_1__ i3Window ;
struct TYPE_13__ {int default_border; } ;
struct TYPE_12__ {int current_border_width; int marks_head; int swallow_head; int focus_head; int nodes_head; int floating_head; int depth; int border_style; TYPE_1__* window; int type; int on_remove_child; } ;
typedef TYPE_2__ Con ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (int,int) ;

Con *FUNC_5(Con *VAR_5, i3Window *VAR_6) {
    Con *VAR_7 = FUNC_4(1, sizeof(Con));
    VAR_7->on_remove_child = VAR_2;
    FUNC_2(&VAR_1, VAR_7, VAR_1);
    VAR_7->type = VAR_0;
    VAR_7->window = VAR_6;
    VAR_7->border_style = VAR_3.default_border;
    VAR_7->current_border_width = -1;
    if (VAR_6) {
        VAR_7->depth = VAR_6->depth;
    } else {
        VAR_7->depth = VAR_4;
    }
    FUNC_0("opening window\n");

    FUNC_1(&(VAR_7->floating_head));
    FUNC_1(&(VAR_7->nodes_head));
    FUNC_1(&(VAR_7->focus_head));
    FUNC_1(&(VAR_7->swallow_head));
    FUNC_1(&(VAR_7->marks_head));

    if (VAR_5 != ((void*)0))
        FUNC_3(VAR_7, VAR_5, 0);

    return VAR_7;
}
