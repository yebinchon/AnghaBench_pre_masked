
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yajl_gen ;
typedef int Con ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;

yajl_gen FUNC_5(const char *VAR_4, Con *VAR_5, Con *VAR_6) {
    FUNC_1(VAR_0, "C");
    yajl_gen VAR_7 = FUNC_3();

    FUNC_2(VAR_2);

    FUNC_4("change");
    FUNC_4(VAR_4);

    FUNC_4("current");
    if (VAR_5 == ((void*)0))
        FUNC_2(VAR_3);
    else
        FUNC_0(VAR_7, VAR_5, 0);

    FUNC_4("old");
    if (VAR_6 == ((void*)0))
        FUNC_2(VAR_3);
    else
        FUNC_0(VAR_7, VAR_6, 0);

    FUNC_2(VAR_1);

    FUNC_1(VAR_0, "");

    return VAR_7;
}
