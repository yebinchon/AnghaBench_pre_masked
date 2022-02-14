
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
typedef scalar_t__ cmdp_state ;
struct TYPE_10__ {int json_gen; } ;
struct TYPE_9__ {scalar_t__ next_state; int json_gen; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static void FUNC_2(const cmdp_token *VAR_7) {
    cmdp_state VAR_8 = VAR_7->next_state;



    if (VAR_7->next_state == VAR_1) {
        VAR_6.json_gen = VAR_2.json_gen;
        FUNC_0(VAR_7->extra.call_identifier, &VAR_6);
        VAR_8 = VAR_6.next_state;
        FUNC_1();
    }

    VAR_3 = VAR_8;
    if (VAR_3 == VAR_0) {
        FUNC_1();
    }



    for (int VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        if (VAR_4[VAR_9] != VAR_8)
            continue;
        VAR_5 = VAR_9 + 1;
        return;
    }


    VAR_4[VAR_5++] = VAR_8;
}
