
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword_t ;
typedef int byte_t ;
typedef int addr_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(addr_t VAR_0, byte_t VAR_1, dword_t VAR_2) {
    while (VAR_2--)
        if (FUNC_0(VAR_0++, VAR_1))
            return 1;
    return 0;
}
