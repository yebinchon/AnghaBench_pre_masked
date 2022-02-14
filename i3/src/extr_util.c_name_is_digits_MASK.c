
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 size_t FUNC_1 (char const*) ;

__attribute__((pure)) bool FUNC_2(const char *VAR_0) {

    for (size_t VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++)
        if (!FUNC_0(VAR_0[VAR_1]))
            return 0;

    return 1;
}
