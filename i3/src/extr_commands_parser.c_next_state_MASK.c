
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int call_identifier; } ;
struct TYPE_8__ {scalar_t__ next_state; TYPE_1__ extra; } ;
typedef TYPE_2__ cmdp_token ;
struct TYPE_10__ {int needs_tree_render; int client; int json_gen; } ;
struct TYPE_9__ {int needs_tree_render; scalar_t__ next_state; int client; int json_gen; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_2(const cmdp_token *VAR_5) {
    if (VAR_5->next_state == VAR_1) {
        VAR_4.json_gen = VAR_2.json_gen;
        VAR_4.client = VAR_2.client;
        VAR_4.needs_tree_render = 0;
        FUNC_0(VAR_5->extra.call_identifier, &VAR_4);
        VAR_3 = VAR_4.next_state;


        if (VAR_4.needs_tree_render)
            VAR_2.needs_tree_render = 1;
        FUNC_1();
        return;
    }

    VAR_3 = VAR_5->next_state;
    if (VAR_3 == VAR_0) {
        FUNC_1();
    }
}
