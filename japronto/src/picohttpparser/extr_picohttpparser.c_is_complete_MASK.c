
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, const char *VAR_1, size_t VAR_2, int *VAR_3)
{
    int VAR_4 = 0;
    VAR_0 = VAR_2 < 3 ? VAR_0 : VAR_0 + VAR_2 - 3;

    while (1) {
        FUNC_0();
        if (*VAR_0 == '\015') {
            ++VAR_0;
            FUNC_0();
            FUNC_1('\012');
            ++VAR_4;
        } else if (*VAR_0 == '\012') {
            ++VAR_0;
            ++VAR_4;
        } else {
            ++VAR_0;
            VAR_4 = 0;
        }
        if (VAR_4 == 2) {
            return VAR_0;
        }
    }

    *VAR_3 = -2;
    return ((void*)0);
}
