
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yrmcds_error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_3 ;
 char* FUNC_3 (scalar_t__) ;

void FUNC_4(yrmcds_error VAR_4) {
    if( VAR_4 != VAR_0 ) {
        if( VAR_4 == VAR_1 ) {
            FUNC_0(0, VAR_2, "system error");
        } else {
            FUNC_2(VAR_3, "yrmcds error: %s\n", FUNC_3(VAR_4));
        }
        FUNC_1(2);
    }
}
