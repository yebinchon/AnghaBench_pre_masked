
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {int dummy; } ;


 int FUNC_0 (char const*,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 char const* FUNC_3 (char const*,char const*,struct phr_header*,size_t*,size_t,int*) ;
 char* FUNC_4 (char const*,char const*,int*,int*) ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_0, const char *VAR_1, const char **VAR_2, size_t *VAR_3, const char **VAR_4,
                                 size_t *VAR_5, int *VAR_6, struct phr_header *VAR_7, size_t *VAR_8,
                                 size_t VAR_9, int *VAR_10)
{

    FUNC_1();
    if (*VAR_0 == '\015') {
        ++VAR_0;
        FUNC_2('\012');
    } else if (*VAR_0 == '\012') {
        ++VAR_0;
    }


    FUNC_0(*VAR_2, *VAR_3);
    ++VAR_0;
    FUNC_0(*VAR_4, *VAR_5);
    ++VAR_0;
    if (*VAR_3 == 0 || *VAR_5 == 0) {
        *VAR_10 = -1;
        return ((void*)0);
    }
    if ((VAR_0 = FUNC_4(VAR_0, VAR_1, VAR_6, VAR_10)) == ((void*)0)) {
        return ((void*)0);
    }
    if (*VAR_0 == '\015') {
        ++VAR_0;
        FUNC_2('\012');
    } else if (*VAR_0 == '\012') {
        ++VAR_0;
    } else {
        *VAR_10 = -1;
        return ((void*)0);
    }

    return FUNC_3(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10);
}
