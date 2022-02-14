
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct workspaces_json_params {TYPE_1__* workspaces_walk; int * cur_key; } ;
typedef int rect ;
struct TYPE_3__ {int num; int * output; int rect; scalar_t__ urgent; scalar_t__ focused; scalar_t__ visible; int * name; } ;
typedef TYPE_1__ i3_ws ;


 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0) {
    struct workspaces_json_params *VAR_1 = (struct workspaces_json_params *)VAR_0;

    i3_ws *VAR_2 = ((void*)0);

    if (VAR_1->cur_key == ((void*)0)) {
        VAR_2 = FUNC_1(sizeof(i3_ws));
        VAR_2->num = -1;
        VAR_2->name = ((void*)0);
        VAR_2->visible = 0;
        VAR_2->focused = 0;
        VAR_2->urgent = 0;
        FUNC_0(&VAR_2->rect, 0, sizeof(rect));
        VAR_2->output = ((void*)0);

        VAR_1->workspaces_walk = VAR_2;
        return 1;
    }

    return 1;
}
