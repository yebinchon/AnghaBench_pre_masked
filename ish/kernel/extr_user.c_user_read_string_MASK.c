
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;

int FUNC_1(addr_t VAR_0, char *VAR_1, size_t VAR_2) {
    if (VAR_0 == 0)
        return 1;
    size_t VAR_3 = 0;
    while (VAR_3 < VAR_2) {
        if (FUNC_0(VAR_0 + VAR_3, &VAR_1[VAR_3], sizeof(VAR_1[VAR_3])))
            return 1;
        if (VAR_1[VAR_3] == '\0')
            break;
        VAR_3++;
    }
    return 0;
}
