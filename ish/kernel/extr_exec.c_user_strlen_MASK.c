
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,char) ;

__attribute__((used)) static inline ssize_t FUNC_1(addr_t VAR_0) {
    size_t VAR_1 = 0;
    char VAR_2;
    do {
        if (FUNC_0(VAR_0 + VAR_1, VAR_2))
            return -1;
        VAR_1++;
    } while (VAR_2 != '\0');
    return VAR_1 - 1;
}
