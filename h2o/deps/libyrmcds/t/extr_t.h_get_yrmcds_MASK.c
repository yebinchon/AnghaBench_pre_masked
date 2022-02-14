
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yrmcds ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,int) ;

__attribute__((used)) static yrmcds* FUNC_4(yrmcds* VAR_0) {
    const char* VAR_1 = FUNC_2("YRMCDS_HOST");
    if( VAR_1 == ((void*)0) ) {
        return ((void*)0);
    }
    uint16_t VAR_2 = 11211;
    if( FUNC_2("YRMCDS_PORT") ) {
        VAR_2 = (uint16_t)FUNC_0(FUNC_2("YRMCDS_PORT"));
    }

    FUNC_1( FUNC_3(VAR_0, VAR_1, VAR_2) );
    return VAR_0;
}
