
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (char const*,int *,int) ;

int FUNC_3(int VAR_0, const char *VAR_1[]) {
    if (VAR_0 != 2) {
        FUNC_1("argc is %d\n", VAR_0);
        FUNC_1("please specify a number to fibbonaci\n");
        return 1;
    }
    unsigned long VAR_2 = FUNC_2(VAR_1[1], ((void*)0), 10);
    FUNC_1("%lu\n", FUNC_0(VAR_2));
    return 0;
}
