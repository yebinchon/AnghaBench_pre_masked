
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, unsigned int *VAR_1) {
    int VAR_2, VAR_3, VAR_4, VAR_5;
    if (VAR_0[0] == '\0' || VAR_0[1] == '\0' || VAR_0[2] == '\0' || VAR_0[3] == '\0') {
        return 0;
    }
    VAR_2 = FUNC_0(VAR_0[0]);
    VAR_3 = FUNC_0(VAR_0[1]);
    VAR_4 = FUNC_0(VAR_0[2]);
    VAR_5 = FUNC_0(VAR_0[3]);
    if (VAR_2 == -1 || VAR_3 == -1 || VAR_4 == -1 || VAR_5 == -1) {
        return 0;
    }
    *VAR_1 = (unsigned int)((VAR_2 << 12) | (VAR_3 << 8) | (VAR_4 << 4) | VAR_5);
    return 1;
}
