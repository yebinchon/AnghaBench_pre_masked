
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yajl_gen ;
struct TYPE_4__ {scalar_t__ input_type; char* symbol; char* command; int keycode; } ;
typedef TYPE_1__ Binding ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(yajl_gen VAR_5, Binding *VAR_6) {
    FUNC_1(VAR_3);
    FUNC_2("input_code");
    FUNC_1(VAR_1, VAR_6->keycode);

    FUNC_2("input_type");
    FUNC_2((const char *)(VAR_6->input_type == VAR_0 ? "keyboard" : "mouse"));

    FUNC_2("symbol");
    if (VAR_6->symbol == ((void*)0))
        FUNC_1(VAR_4);
    else
        FUNC_2(VAR_6->symbol);

    FUNC_2("command");
    FUNC_2(VAR_6->command);



    FUNC_2("mods");
    FUNC_0(VAR_5, VAR_6);

    FUNC_2("event_state_mask");
    FUNC_0(VAR_5, VAR_6);

    FUNC_1(VAR_2);
}
