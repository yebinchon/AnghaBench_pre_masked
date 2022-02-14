
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ranges1 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 int FUNC_3 (char const) ;
 char* FUNC_4 (char const*,char const*,char const*,int,int*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_0, const char *VAR_1, const char **VAR_2, size_t *VAR_3, int *VAR_4)
{
    const char *VAR_5 = VAR_0;
    while (FUNC_5(VAR_1 - VAR_0 >= 8)) {






        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);
        do { if (FUNC_6(!FUNC_3(*VAR_0))) goto NonPrintable; ++VAR_0; } while (0);

        continue;
    NonPrintable:
        if ((FUNC_5((unsigned char)*VAR_0 < '\040') && FUNC_5(*VAR_0 != '\011')) || FUNC_6(*VAR_0 == '\177')) {
            goto FOUND_CTL;
        }
        ++VAR_0;
    }

    for (;; ++VAR_0) {
        FUNC_0();
        if (FUNC_6(!FUNC_3(*VAR_0))) {
            if ((FUNC_5((unsigned char)*VAR_0 < '\040') && FUNC_5(*VAR_0 != '\011')) || FUNC_6(*VAR_0 == '\177')) {
                goto FOUND_CTL;
            }
        }
    }
FOUND_CTL:
    if (FUNC_5(*VAR_0 == '\015')) {
        ++VAR_0;
        FUNC_2('\012');
        *VAR_3 = VAR_0 - 2 - VAR_5;
    } else if (*VAR_0 == '\012') {
        *VAR_3 = VAR_0 - VAR_5;
        ++VAR_0;
    } else {
        *VAR_4 = -1;
        return ((void*)0);
    }
    *VAR_2 = VAR_5;

    return VAR_0;
}
