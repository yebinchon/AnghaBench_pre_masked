
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit32_ {int dummy; } ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct rlimit32_*) ;
 scalar_t__ FUNC_1 (int ,struct rlimit32_) ;

dword_t FUNC_2(dword_t VAR_1, addr_t VAR_2) {
    struct rlimit32_ VAR_3;
    int VAR_4 = FUNC_0(VAR_1, &VAR_3);
    if (VAR_4 < 0)
        return VAR_4;
    if (FUNC_1(VAR_2, VAR_3))
        return VAR_0;
    return 0;
}
