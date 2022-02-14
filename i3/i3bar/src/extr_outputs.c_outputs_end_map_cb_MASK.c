
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct outputs_json_params {int in_rect; TYPE_4__* outputs_walk; TYPE_4__* cur_key; } ;
struct TYPE_7__ {int rect; int ws; scalar_t__ primary; int active; } ;
typedef TYPE_1__ i3_output ;
struct TYPE_9__ {char* name; int rect; int ws; scalar_t__ primary; int active; } ;
struct TYPE_8__ {int num_outputs; char** outputs; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__* FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3) {
    struct outputs_json_params *VAR_4 = (struct outputs_json_params *)VAR_3;
    if (VAR_4->in_rect) {
        VAR_4->in_rect = 0;

        return 1;
    }


    if (VAR_0.num_outputs > 0) {
        bool VAR_5 = 0;
        for (int VAR_6 = 0; VAR_6 < VAR_0.num_outputs; VAR_6++) {
            if (FUNC_5(VAR_4->outputs_walk->name, VAR_0.outputs[VAR_6]) == 0 ||
                (FUNC_5(VAR_0.outputs[VAR_6], "primary") == 0 &&
                 VAR_4->outputs_walk->primary)) {
                VAR_5 = 1;
                break;
            }
        }
        if (!VAR_5) {
            FUNC_0("Ignoring output \"%s\", not configured to handle it.\n",
                 VAR_4->outputs_walk->name);
            FUNC_3(VAR_4->outputs_walk);
            FUNC_1(VAR_4->outputs_walk);
            FUNC_1(VAR_4->cur_key);
            return 1;
        }
    }

    i3_output *VAR_7 = FUNC_4(VAR_4->outputs_walk->name);

    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_4->outputs_walk, VAR_2);
    } else {
        VAR_7->active = VAR_4->outputs_walk->active;
        VAR_7->primary = VAR_4->outputs_walk->primary;
        VAR_7->ws = VAR_4->outputs_walk->ws;
        VAR_7->rect = VAR_4->outputs_walk->rect;

        FUNC_3(VAR_4->outputs_walk);
        FUNC_1(VAR_4->outputs_walk);
    }
    return 1;
}
