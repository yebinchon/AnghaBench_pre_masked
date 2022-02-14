
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct con_state {int initial; int child_mapped; int window_rect; TYPE_2__* con; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
typedef int Rect ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*,struct con_state*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int) ;
 struct con_state* FUNC_3 (int ) ;

void FUNC_4(Con *VAR_0) {
    struct con_state *VAR_1;

    if ((VAR_1 = FUNC_3(VAR_0->frame.id)) == ((void*)0)) {
        FUNC_1("window state not found\n");
        return;
    }

    FUNC_0("resetting state %p to initial\n", VAR_1);
    VAR_1->initial = 1;
    VAR_1->child_mapped = 0;
    VAR_1->con = VAR_0;
    FUNC_2(&(VAR_1->window_rect), 0, sizeof(Rect));
}
