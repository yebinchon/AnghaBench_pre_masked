
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t dword_t ;
typedef size_t addr_t ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (size_t,char const*,size_t) ;

__attribute__((used)) static inline dword_t FUNC_2(addr_t VAR_0, const char *VAR_1) {
    size_t VAR_2 = FUNC_0(VAR_1);
    VAR_0 -= VAR_2;
    if (FUNC_1(VAR_0, VAR_1, VAR_2))
        return 0;
    return VAR_0;
}
