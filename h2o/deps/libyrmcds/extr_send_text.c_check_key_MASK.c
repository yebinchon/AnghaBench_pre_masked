
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yrmcds_error ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline yrmcds_error
FUNC_0(const char* VAR_3, size_t VAR_4) {
    if( VAR_4 > VAR_0 )
        return VAR_1;

    size_t VAR_5;
    for( VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ ) {
        char VAR_6 = VAR_3[VAR_5];
        if( VAR_6 <= ' ' ) return VAR_1;
        if( VAR_6 == 127 ) return VAR_1;
    }

    return VAR_2;
}
