
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (char*,size_t) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static size_t FUNC_7(const char* VAR_2, char** VAR_3) {
    int VAR_4;
    if( FUNC_6(VAR_2, "-") == 0 ) {
        VAR_4 = VAR_1;
    } else {
        VAR_4 = FUNC_3(VAR_2, VAR_0);
        if( VAR_4 == -1 ) return 0;
    }

    size_t VAR_5 = 0;
    size_t VAR_6 = 1 << 20;
    *VAR_3 = (char*)FUNC_2(VAR_6);
    if( *VAR_3 == ((void*)0) ) return 0;
    while( 1 ) {
        if( (VAR_6 - VAR_5) < (1 << 20) ) {
            char* VAR_7 = (char*)FUNC_5(*VAR_3, VAR_6 * 2);
            if( VAR_7 == ((void*)0) ) {
                FUNC_1(*VAR_3);
                *VAR_3 = ((void*)0);
                return 0;
            }
            *VAR_3 = VAR_7;
            VAR_6 *= 2;
        }
        ssize_t VAR_8 = FUNC_4(VAR_4, *VAR_3 + VAR_5, 1 << 20);
        if( VAR_8 == -1 ) {
            FUNC_1(*VAR_3);
            *VAR_3 = ((void*)0);
            return 0;
        }
        if( VAR_8 == 0 ) break;
        VAR_5 += (size_t)VAR_8;
    }

    if( VAR_4 != VAR_1 )
        FUNC_0(VAR_4);
    return VAR_5;
}
