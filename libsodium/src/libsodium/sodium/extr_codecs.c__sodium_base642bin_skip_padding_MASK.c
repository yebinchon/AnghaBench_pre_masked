
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char const* const,int) ;

__attribute__((used)) static int
FUNC_1(const char * const VAR_3, const size_t VAR_4,
                                size_t * const VAR_5,
                                const char * const VAR_6, size_t VAR_7)
{
    int VAR_8;

    while (VAR_7 > 0) {
        if (*VAR_5 >= VAR_4) {
            VAR_2 = VAR_1;
            return -1;
        }
        VAR_8 = VAR_3[*VAR_5];
        if (VAR_8 == '=') {
            VAR_7--;
        } else if (VAR_6 == ((void*)0) || FUNC_0(VAR_6, VAR_8) == ((void*)0)) {
            VAR_2 = VAR_0;
            return -1;
        }
        (*VAR_5)++;
    }
    return 0;
}
