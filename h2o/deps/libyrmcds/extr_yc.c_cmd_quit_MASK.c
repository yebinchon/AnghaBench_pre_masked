
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(int VAR_3, char** VAR_4, yrmcds* VAR_5) {
    yrmcds_response VAR_6[1];
    uint32_t VAR_7;
    yrmcds_error VAR_8 = FUNC_4(VAR_5, VAR_1, &VAR_7);
    FUNC_0(VAR_8);
    if( VAR_0 )
        FUNC_2(VAR_2, "request serial = %u\n", VAR_7);
    if( ! VAR_1 ) {
        VAR_8 = FUNC_5(VAR_5, VAR_6);
        FUNC_0(VAR_8);
        if( VAR_0 )
            FUNC_3(VAR_6);
        FUNC_1(VAR_6);
    }
    return 0;
}
