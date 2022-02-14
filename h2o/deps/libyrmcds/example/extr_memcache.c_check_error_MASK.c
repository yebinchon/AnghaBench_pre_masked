
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yrmcds_error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 char* FUNC_3 (scalar_t__) ;

void FUNC_4(yrmcds_error VAR_3) {
    if( VAR_3 != 0 ) {
        if( VAR_3 == VAR_0 ) {
            FUNC_0(0, VAR_1, "system error");
        } else {
            FUNC_2(VAR_2, "yrmcds error: %s\n", FUNC_3(VAR_3));
        }
        FUNC_1(2);
    }
}
