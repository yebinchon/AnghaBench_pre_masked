
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char*,size_t) ;

void FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2)
{
    char *VAR_3 = VAR_0, *VAR_4 = VAR_1;
    char VAR_5[256];

    while (VAR_2 != 0) {
        size_t VAR_6 = VAR_2 < sizeof(VAR_5) ? VAR_2 : sizeof(VAR_5);
        FUNC_0(VAR_5, VAR_3, VAR_6);
        FUNC_0(VAR_3, VAR_4, VAR_6);
        FUNC_0(VAR_4, VAR_5, VAR_6);
        VAR_2 -= VAR_6;
        VAR_3 += VAR_6;
        VAR_4 += VAR_6;
    }
}
