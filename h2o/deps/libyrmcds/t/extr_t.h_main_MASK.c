
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yrmcds ;


 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_2, char** VAR_3) {
    yrmcds VAR_4;
    yrmcds* VAR_5 = FUNC_1(&VAR_4);
    if( VAR_5 == ((void*)0) ) {
        FUNC_0(VAR_1, "No YRMCDS_HOST.  Skipped.\n");
        return 0;
    }

    FUNC_2(VAR_5);
    FUNC_3(VAR_5);

    if( VAR_0 > 0 ) {
        FUNC_0(VAR_1, "%ld tests failed.\n", VAR_0);
        return 1;
    }
    FUNC_0(VAR_1, "Passed.\n");
    return 0;
}
