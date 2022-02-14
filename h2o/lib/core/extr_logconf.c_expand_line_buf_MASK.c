
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, size_t *VAR_1, size_t VAR_2, int VAR_3)
{
    size_t VAR_4 = *VAR_1;


    do {
        VAR_4 *= 2;
    } while (VAR_4 < VAR_2);


    if (!VAR_3) {
        char *VAR_5 = FUNC_0(VAR_4);
        FUNC_2(VAR_5, VAR_0, *VAR_1);
        VAR_0 = VAR_5;
    } else {
        VAR_0 = FUNC_1(VAR_0, VAR_4);
    }
    *VAR_1 = VAR_4;

    return VAR_0;
}
