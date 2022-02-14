
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xcb_shape_sk_t ;
struct con_state {int dummy; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_11__ {TYPE_2__* window; TYPE_1__ frame; } ;
struct TYPE_10__ {int shaped; int input_shaped; } ;
typedef TYPE_3__ Con ;


 int FUNC_0 (char*,TYPE_3__*) ;


 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 struct con_state* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(Con *VAR_1, xcb_shape_sk_t VAR_2, bool VAR_3) {
    struct con_state *VAR_4;
    if ((VAR_4 = FUNC_2(VAR_1->frame.id)) == ((void*)0)) {
        FUNC_0("window state for con %p not found\n", VAR_1);
        return;
    }

    switch (VAR_2) {
        case 129:
            VAR_1->window->shaped = VAR_3;
            break;
        case 128:
            VAR_1->window->input_shaped = VAR_3;
            break;
        default:
            FUNC_0("Received unknown shape event kind for con %p. This is a bug.\n",
                 VAR_1);
            return;
    }

    if (FUNC_1(VAR_1)) {
        if (VAR_3) {
            FUNC_3(VAR_1, VAR_2);
        } else {
            FUNC_4(VAR_1, VAR_2);
        }

        FUNC_5(VAR_0);
    }
}
