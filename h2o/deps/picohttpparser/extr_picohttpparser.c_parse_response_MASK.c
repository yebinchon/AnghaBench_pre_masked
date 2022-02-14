
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {int dummy; } ;


 int FUNC_0 (int*) ;
 char* FUNC_1 (char const*,char const*,char const**,size_t*,int*) ;
 char const* FUNC_2 (char const*,char const*,struct phr_header*,size_t*,size_t,int*) ;
 char* FUNC_3 (char const*,char const*,int*,int*) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0, const char *VAR_1, int *VAR_2, int *VAR_3, const char **VAR_4,
                                  size_t *VAR_5, struct phr_header *VAR_6, size_t *VAR_7, size_t VAR_8, int *VAR_9)
{

    if ((VAR_0 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_9)) == ((void*)0)) {
        return ((void*)0);
    }

    if (*VAR_0++ != ' ') {
        *VAR_9 = -1;
        return ((void*)0);
    }

    if (VAR_1 - VAR_0 < 4) {
        *VAR_9 = -2;
        return ((void*)0);
    }
    FUNC_0(VAR_3);


    if (*VAR_0++ != ' ') {
        *VAR_9 = -1;
        return ((void*)0);
    }

    if ((VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_9)) == ((void*)0)) {
        return ((void*)0);
    }

    return FUNC_2(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
}
