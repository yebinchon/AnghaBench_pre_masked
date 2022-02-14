
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Binding_Keycode {struct Binding_Keycode* command; struct Binding_Keycode* symbol; int keycodes_head; } ;
typedef struct Binding_Keycode Binding ;


 int FUNC_0 (struct Binding_Keycode*) ;
 int FUNC_1 (int *) ;
 struct Binding_Keycode* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct Binding_Keycode*,int ) ;
 int VAR_0 ;

void FUNC_4(Binding *VAR_1) {
    if (VAR_1 == ((void*)0)) {
        return;
    }

    while (!FUNC_1(&(VAR_1->keycodes_head))) {
        struct Binding_Keycode *VAR_2 = FUNC_2(&(VAR_1->keycodes_head));
        FUNC_3(&(VAR_1->keycodes_head), VAR_2, VAR_0);
        FUNC_0(VAR_2);
    }

    FUNC_0(VAR_1->symbol);
    FUNC_0(VAR_1->command);
    FUNC_0(VAR_1);
}
