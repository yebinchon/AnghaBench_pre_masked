
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ylength ;
typedef int yajl_gen ;
typedef scalar_t__ shutdown_reason_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(shutdown_reason_t VAR_7) {
    yajl_gen VAR_8 = FUNC_2();
    FUNC_1(VAR_6);

    FUNC_3("change");

    if (VAR_7 == VAR_2) {
        FUNC_3("restart");
    } else if (VAR_7 == VAR_1) {
        FUNC_3("exit");
    }

    FUNC_1(VAR_5);

    const unsigned char *VAR_9;
    ylength VAR_10;

    FUNC_1(VAR_4, &VAR_9, &VAR_10);
    FUNC_0("shutdown", VAR_0, (const char *)VAR_9);

    FUNC_1(VAR_3);
}
