
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit_ {scalar_t__ cur; int max; } ;
typedef scalar_t__ pid_t_ ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct rlimit_) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,struct rlimit_*) ;
 int FUNC_3 (int ,int,struct rlimit_) ;
 scalar_t__ FUNC_4 (scalar_t__,struct rlimit_) ;
 scalar_t__ FUNC_5 (scalar_t__,struct rlimit_) ;

dword_t FUNC_6(pid_t_ VAR_3, dword_t VAR_4, addr_t VAR_5, addr_t VAR_6) {
    FUNC_0("prlimit64(%d, %d)", VAR_3, VAR_4);
    if (VAR_3 != 0)
        return VAR_1;

    if (VAR_6 != 0) {
        struct rlimit_ VAR_7;
        int VAR_8 = FUNC_2(VAR_2, VAR_4, &VAR_7);
        if (VAR_8 < 0)
            return VAR_8;
        FUNC_0(" old={cur=%#x, max=%#x}", VAR_7.cur, VAR_7.max);
        if (FUNC_5(VAR_6, VAR_7))
            return VAR_0;
    }

    if (VAR_5 != 0) {
        struct rlimit_ VAR_9;
        if (FUNC_4(VAR_5, VAR_9))
            return VAR_0;
        FUNC_0(" new={cur=%#x, max=%#x}", VAR_9.cur, VAR_9.max);
        int VAR_10 = FUNC_1(VAR_4, VAR_9);
        if (VAR_10 < 0)
            return VAR_10;
        return FUNC_3(VAR_2, VAR_4, VAR_9);
    }
    return 0;
}
