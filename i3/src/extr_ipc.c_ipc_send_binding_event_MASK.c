
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ylength ;
typedef int yajl_gen ;
struct TYPE_4__ {int keycode; int symbol; } ;
typedef TYPE_1__ Binding ;


 int FUNC_0 (char*,char const*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;

void FUNC_7(const char *VAR_6, Binding *VAR_7) {
    FUNC_0("Issue IPC binding %s event (sym = %s, code = %d)\n", VAR_6, VAR_7->symbol, VAR_7->keycode);

    FUNC_3(VAR_1, "C");

    yajl_gen VAR_8 = FUNC_5();

    FUNC_4(VAR_5);

    FUNC_6("change");
    FUNC_6(VAR_6);

    FUNC_6("binding");
    FUNC_1(VAR_8, VAR_7);

    FUNC_4(VAR_4);

    const unsigned char *VAR_9;
    ylength VAR_10;
    FUNC_4(VAR_3, &VAR_9, &VAR_10);

    FUNC_2("binding", VAR_0, (const char *)VAR_9);

    FUNC_4(VAR_2);
    FUNC_3(VAR_1, "");
}
