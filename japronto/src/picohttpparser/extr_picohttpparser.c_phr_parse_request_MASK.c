
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {int dummy; } ;


 int * FUNC_0 (char const*,char const*,size_t,int*) ;
 char* FUNC_1 (char const*,char const*,char const**,size_t*,char const**,size_t*,int*,struct phr_header*,size_t*,size_t,int*) ;

int FUNC_2(const char *VAR_0, size_t VAR_1, const char **VAR_2, size_t *VAR_3, const char **VAR_4,
                      size_t *VAR_5, int *VAR_6, struct phr_header *VAR_7, size_t *VAR_8, size_t VAR_9)
{
    const char *VAR_10 = VAR_0, *VAR_11 = VAR_0 + VAR_1;
    size_t VAR_12 = *VAR_8;
    int VAR_13;

    *VAR_2 = ((void*)0);
    *VAR_3 = 0;
    *VAR_4 = ((void*)0);
    *VAR_5 = 0;
    *VAR_6 = -1;
    *VAR_8 = 0;



    if (VAR_9 != 0 && FUNC_0(VAR_10, VAR_11, VAR_9, &VAR_13) == ((void*)0)) {
        return VAR_13;
    }

    if ((VAR_10 = FUNC_1(VAR_10, VAR_11, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_12,
                             &VAR_13)) == ((void*)0)) {
        return VAR_13;
    }

    return (int)(VAR_10 - VAR_0);
}
