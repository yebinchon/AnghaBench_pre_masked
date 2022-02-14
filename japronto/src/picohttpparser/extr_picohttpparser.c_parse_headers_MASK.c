
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {char const* name; int name_len; int value_len; int value; } ;
typedef int ranges1 ;


 int FUNC_0 () ;
 int FUNC_1 (char) ;
 char* FUNC_2 (char const*,char const*,char const*,int,int*) ;
 char* FUNC_3 (char const*,char const*,int *,int *,int*) ;
 int * VAR_0 ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_1, const char *VAR_2, struct phr_header *VAR_3, size_t *VAR_4,
                                 size_t VAR_5, int *VAR_6)
{
    for (;; ++*VAR_4) {
        FUNC_0();
        if (*VAR_1 == '\015') {
            ++VAR_1;
            FUNC_1('\012');
            break;
        } else if (*VAR_1 == '\012') {
            ++VAR_1;
            break;
        }
        if (*VAR_4 == VAR_5) {
            *VAR_6 = -1;
            return ((void*)0);
        }
        if (!(*VAR_4 != 0 && (*VAR_1 == ' ' || *VAR_1 == '\t'))) {


            VAR_3[*VAR_4].name = VAR_1;
            static const char VAR_7[] __attribute__((aligned(16))) = "\x00 "
                                                                       "\"\""
                                                                       "()"
                                                                       ",,"
                                                                       "//"
                                                                       ":@"
                                                                       "[]"
                                                                       "{\377";
            int VAR_8;
            VAR_1 = FUNC_2(VAR_1, VAR_2, VAR_7, sizeof(VAR_7) - 1, &VAR_8);
            if (!VAR_8) {
                FUNC_0();
            }
            while (1) {
                if (*VAR_1 == ':') {
                    break;
                } else if (!VAR_0[(unsigned char)*VAR_1]) {
                    *VAR_6 = -1;
                    return ((void*)0);
                }
                ++VAR_1;
                FUNC_0();
            }
            if ((VAR_3[*VAR_4].name_len = VAR_1 - VAR_3[*VAR_4].name) == 0) {
                *VAR_6 = -1;
                return ((void*)0);
            }
            ++VAR_1;
            for (;; ++VAR_1) {
                FUNC_0();
                if (!(*VAR_1 == ' ' || *VAR_1 == '\t')) {
                    break;
                }
            }
        } else {
            VAR_3[*VAR_4].name = ((void*)0);
            VAR_3[*VAR_4].name_len = 0;
        }
        if ((VAR_1 = FUNC_3(VAR_1, VAR_2, &VAR_3[*VAR_4].value, &VAR_3[*VAR_4].value_len, VAR_6)) == ((void*)0)) {
            return ((void*)0);
        }
    }
    return VAR_1;
}
