
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, const char *VAR_2, unsigned int VAR_3, char **VAR_4, const char *VAR_5) {
    if(FUNC_0(VAR_1) < 3 || !VAR_0) {
        const char *VAR_6;
        const char *VAR_7;
        const char *VAR_8;
        VAR_6 = VAR_2;
        if(VAR_6 == ((void*)0) || VAR_5 == ((void*)0)) {
            return 0;
        }
        while(1) {
            VAR_7 = FUNC_3(VAR_6, VAR_5);
            if(VAR_7 == ((void*)0)) {
                return 0;
            }
            VAR_8 = VAR_7 + FUNC_2(VAR_5);
            if((VAR_7 == VAR_6 || *(VAR_7 - 1) == ' ') &&
                (*VAR_8 == ' ' || *VAR_8 == '\0')) {
                return 1;
            }
            VAR_6 = VAR_8;
        }
    } else {
        unsigned int VAR_9;
        for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
            const char *VAR_10 = VAR_4[VAR_9];
            if(FUNC_1(VAR_10, VAR_5) == 0) {
                return 1;
            }
        }
    }
    return 0;
}
