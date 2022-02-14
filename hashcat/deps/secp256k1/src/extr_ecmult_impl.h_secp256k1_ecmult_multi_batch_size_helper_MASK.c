
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(size_t *VAR_1, size_t *VAR_2, size_t VAR_3, size_t VAR_4) {
    if (VAR_3 == 0) {
        return 0;
    }
    if (VAR_3 > VAR_0) {
        VAR_3 = VAR_0;
    }
    if (VAR_4 == 0) {
        *VAR_1 = 0;
        *VAR_2 = 0;
        return 1;
    }

    *VAR_1 = 1 + (VAR_4 - 1) / VAR_3;
    *VAR_2 = 1 + (VAR_4 - 1) / *VAR_1;
    return 1;
}
