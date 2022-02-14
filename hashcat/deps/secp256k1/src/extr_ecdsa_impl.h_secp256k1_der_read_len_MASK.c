
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(size_t *VAR_0, const unsigned char **VAR_1, const unsigned char *VAR_2) {
    size_t VAR_3;
    unsigned char VAR_4;
    FUNC_0(VAR_0 != ((void*)0));
    *VAR_0 = 0;
    if (*VAR_1 >= VAR_2) {
        return 0;
    }
    VAR_4 = *((*VAR_1)++);
    if (VAR_4 == 0xFF) {

        return 0;
    }
    if ((VAR_4 & 0x80) == 0) {

        *VAR_0 = VAR_4;
        return 1;
    }
    if (VAR_4 == 0x80) {

        return 0;
    }

    VAR_3 = VAR_4 & 0x7F;
    if (VAR_3 > (size_t)(VAR_2 - *VAR_1)) {
        return 0;
    }
    if (**VAR_1 == 0) {

        return 0;
    }
    if (VAR_3 > sizeof(size_t)) {



        return 0;
    }
    while (VAR_3 > 0) {
        *VAR_0 = (*VAR_0 << 8) | **VAR_1;
        (*VAR_1)++;
        VAR_3--;
    }
    if (*VAR_0 > (size_t)(VAR_2 - *VAR_1)) {

        return 0;
    }
    if (*VAR_0 < 128) {

        return 0;
    }
    return 1;
}
