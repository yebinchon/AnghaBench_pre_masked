
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* name; int marks_head; int swallow_head; struct TYPE_11__* deco_render_params; } ;
typedef TYPE_1__ mark_t ;
typedef TYPE_1__ Match ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;

void FUNC_7(Con *VAR_3) {
    FUNC_5(VAR_3->name);
    FUNC_1(VAR_3->deco_render_params);
    FUNC_4(&VAR_0, VAR_3, VAR_0);
    while (!FUNC_2(&(VAR_3->swallow_head))) {
        Match *VAR_4 = FUNC_3(&(VAR_3->swallow_head));
        FUNC_4(&(VAR_3->swallow_head), VAR_4, VAR_2);
        FUNC_6(VAR_4);
        FUNC_5(VAR_4);
    }
    while (!FUNC_2(&(VAR_3->marks_head))) {
        mark_t *VAR_5 = FUNC_3(&(VAR_3->marks_head));
        FUNC_4(&(VAR_3->marks_head), VAR_5, VAR_1);
        FUNC_1(VAR_5->name);
        FUNC_1(VAR_5);
    }
    FUNC_5(VAR_3);
    FUNC_0("con %p freed\n", VAR_3);
}
