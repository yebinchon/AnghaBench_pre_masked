
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ylength ;
typedef int yajl_gen ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ Barconfig ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 () ;

void FUNC_6(Barconfig *VAR_4) {
    FUNC_0("Issue barconfig_update event for id = %s\n", VAR_4->id);
    FUNC_3(VAR_1, "C");
    yajl_gen VAR_5 = FUNC_5();

    FUNC_1(VAR_5, VAR_4);

    const unsigned char *VAR_6;
    ylength VAR_7;
    FUNC_4(VAR_3, &VAR_6, &VAR_7);

    FUNC_2("barconfig_update", VAR_0, (const char *)VAR_6);
    FUNC_4(VAR_2);
    FUNC_3(VAR_1, "");
}
