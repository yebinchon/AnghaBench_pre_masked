
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yrmcds_response ;
typedef int yrmcds_error ;
typedef int yrmcds ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(int VAR_2, char** VAR_3, yrmcds* VAR_4) {
    yrmcds_response VAR_5[1];
    uint32_t VAR_6;
    yrmcds_error VAR_7 = FUNC_5(VAR_4, &VAR_6);
    FUNC_0(VAR_7);
    if( VAR_0 )
        FUNC_2(VAR_1, "request serial = %u\n", VAR_6);
    VAR_7 = FUNC_6(VAR_4, VAR_5);
    FUNC_0(VAR_7);
    if( VAR_0 )
        FUNC_3(VAR_5);
    FUNC_1(VAR_5);
    FUNC_4("OK\n");
    return 0;
}
