
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int surface_t ;
struct ws_head {int dummy; } ;
struct tc_head {int dummy; } ;
struct outputs_json_params {int in_rect; int * cur_key; TYPE_1__* outputs_walk; } ;
typedef int rect ;
struct TYPE_2__ {int active; int primary; int visible; int statusline_short_text; void* trayclients; void* workspaces; int statusline_buffer; int buffer; int bar; int rect; scalar_t__ statusline_width; scalar_t__ ws; int * name; } ;
typedef TYPE_1__ i3_output ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0) {
    struct outputs_json_params *VAR_1 = (struct outputs_json_params *)VAR_0;
    i3_output *VAR_2 = ((void*)0);

    if (VAR_1->cur_key == ((void*)0)) {
        VAR_2 = FUNC_2(sizeof(i3_output));
        VAR_2->name = ((void*)0);
        VAR_2->active = 0;
        VAR_2->primary = 0;
        VAR_2->visible = 0;
        VAR_2->ws = 0,
        VAR_2->statusline_width = 0;
        VAR_2->statusline_short_text = 0;
        FUNC_1(&VAR_2->rect, 0, sizeof(rect));
        FUNC_1(&VAR_2->bar, 0, sizeof(surface_t));
        FUNC_1(&VAR_2->buffer, 0, sizeof(surface_t));
        FUNC_1(&VAR_2->statusline_buffer, 0, sizeof(surface_t));

        VAR_2->workspaces = FUNC_2(sizeof(struct ws_head));
        FUNC_0(VAR_2->workspaces);

        VAR_2->trayclients = FUNC_2(sizeof(struct tc_head));
        FUNC_0(VAR_2->trayclients);

        VAR_1->outputs_walk = VAR_2;

        return 1;
    }

    if (!FUNC_3(VAR_1->cur_key, "rect")) {
        VAR_1->in_rect = 1;
    }

    return 1;
}
