
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit32_ {scalar_t__ cur; scalar_t__ max; } ;
typedef int dword_t ;
typedef int addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct rlimit32_*) ;
 scalar_t__ FUNC_1 (int ,struct rlimit32_) ;

dword_t FUNC_2(dword_t VAR_2, addr_t VAR_3) {
    struct rlimit32_ VAR_4;
    int VAR_5 = FUNC_0(VAR_2, &VAR_4);
    if (VAR_5 < 0)
        return VAR_5;



    if (VAR_4.cur > VAR_0)
        VAR_4.cur = VAR_0;
    if (VAR_4.max > VAR_0)
        VAR_4.max = VAR_0;

    if (FUNC_1(VAR_3, VAR_4))
        return VAR_1;
    return 0;
}
