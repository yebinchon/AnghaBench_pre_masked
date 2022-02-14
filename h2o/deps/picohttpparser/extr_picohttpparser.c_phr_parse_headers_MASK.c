
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_header {int dummy; } ;


 int * FUNC_0 (char const*,char const*,size_t,int*) ;
 char* FUNC_1 (char const*,char const*,struct phr_header*,size_t*,size_t,int*) ;

int FUNC_2(const char *VAR_0, size_t VAR_1, struct phr_header *VAR_2, size_t *VAR_3, size_t VAR_4)
{
    const char *VAR_5 = VAR_0, *VAR_6 = VAR_5 + VAR_1;
    size_t VAR_7 = *VAR_3;
    int VAR_8;

    *VAR_3 = 0;



    if (VAR_4 != 0 && FUNC_0(VAR_5, VAR_6, VAR_4, &VAR_8) == ((void*)0)) {
        return VAR_8;
    }

    if ((VAR_5 = FUNC_1(VAR_5, VAR_6, VAR_2, VAR_3, VAR_7, &VAR_8)) == ((void*)0)) {
        return VAR_8;
    }

    return (int)(VAR_5 - VAR_0);
}
