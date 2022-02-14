
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct con_state {scalar_t__ was_floating; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_11__ {TYPE_1__* window; TYPE_2__ frame; } ;
struct TYPE_9__ {scalar_t__ input_shaped; scalar_t__ shaped; } ;
typedef TYPE_3__ Con ;


 int FUNC_0 (char*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 struct con_state* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_5(Con *VAR_3, bool VAR_4) {
    if (!VAR_2 || VAR_3->window == ((void*)0)) {
        return;
    }

    struct con_state *VAR_5;
    if ((VAR_5 = FUNC_2(VAR_3->frame.id)) == ((void*)0)) {
        FUNC_0("window state for con %p not found\n", VAR_3);
        return;
    }

    if (VAR_4 && FUNC_1(VAR_3)) {

        if (VAR_3->window->shaped) {
            FUNC_3(VAR_3, VAR_0);
        }
        if (VAR_3->window->input_shaped) {
            FUNC_3(VAR_3, VAR_1);
        }
    }

    if (VAR_5->was_floating && !FUNC_1(VAR_3)) {

        if (VAR_3->window->shaped) {
            FUNC_4(VAR_3, VAR_0);
        }
        if (VAR_3->window->input_shaped) {
            FUNC_4(VAR_3, VAR_1);
        }
    }
}
