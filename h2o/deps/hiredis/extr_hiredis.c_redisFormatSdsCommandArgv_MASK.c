
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sds ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,unsigned long long) ;
 int * FUNC_4 (int *,char*,size_t) ;
 int * FUNC_5 (int *,char const*,int) ;
 int * FUNC_6 () ;
 unsigned long long FUNC_7 (int *) ;
 size_t const FUNC_8 (char const*) ;

int FUNC_9(sds *VAR_0, int VAR_1, const char **VAR_2,
                              const size_t *VAR_3)
{
    sds VAR_4;
    unsigned long long VAR_5;
    int VAR_6;
    size_t VAR_7;


    if (VAR_0 == ((void*)0))
        return -1;


    VAR_5 = 1+FUNC_2(VAR_1)+2;
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        VAR_7 = VAR_3 ? VAR_3[VAR_6] : FUNC_8(VAR_2[VAR_6]);
        VAR_5 += FUNC_1(VAR_7);
    }


    VAR_4 = FUNC_6();
    if (VAR_4 == ((void*)0))
        return -1;


    VAR_4 = FUNC_3(VAR_4, VAR_5);
    if (VAR_4 == ((void*)0))
        return -1;


    VAR_4 = FUNC_4(VAR_4, "*%i\r\n", VAR_1);
    for (VAR_6=0; VAR_6 < VAR_1; VAR_6++) {
        VAR_7 = VAR_3 ? VAR_3[VAR_6] : FUNC_8(VAR_2[VAR_6]);
        VAR_4 = FUNC_4(VAR_4, "$%u\r\n", VAR_7);
        VAR_4 = FUNC_5(VAR_4, VAR_2[VAR_6], VAR_7);
        VAR_4 = FUNC_5(VAR_4, "\r\n", sizeof("\r\n")-1);
    }

    FUNC_0(FUNC_7(VAR_4)==VAR_5);

    *VAR_0 = VAR_4;
    return VAR_5;
}
