
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {int dummy; } ;


 int * FUNC_0 (char const*,char const*,size_t,int*) ;
 char* FUNC_1 (char const*,char const*,int*,int*,char const**,size_t*,struct phr_header*,size_t*,size_t,int*) ;

int FUNC_2(const char *VAR_0, size_t VAR_1, int *VAR_2, int *VAR_3, const char **VAR_4, size_t *VAR_5,
                       struct phr_header *VAR_6, size_t *VAR_7, size_t VAR_8)
{
    const char *VAR_9 = VAR_0, *VAR_10 = VAR_9 + VAR_1;
    size_t VAR_11 = *VAR_7;
    int VAR_12;

    *VAR_2 = -1;
    *VAR_3 = 0;
    *VAR_4 = ((void*)0);
    *VAR_5 = 0;
    *VAR_7 = 0;



    if (VAR_8 != 0 && FUNC_0(VAR_9, VAR_10, VAR_8, &VAR_12) == ((void*)0)) {
        return VAR_12;
    }

    if ((VAR_9 = FUNC_1(VAR_9, VAR_10, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11, &VAR_12)) == ((void*)0)) {
        return VAR_12;
    }

    return (int)(VAR_9 - VAR_0);
}
