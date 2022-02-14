
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct con_state {int need_reparent; int old_frame; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ frame; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*) ;
 struct con_state* FUNC_1 (int ) ;

void FUNC_2(Con *VAR_0, Con *VAR_1) {
    struct con_state *VAR_2;
    if ((VAR_2 = FUNC_1(VAR_0->frame.id)) == ((void*)0)) {
        FUNC_0("window state for con not found\n");
        return;
    }

    VAR_2->need_reparent = 1;
    VAR_2->old_frame = VAR_1->frame.id;
}
