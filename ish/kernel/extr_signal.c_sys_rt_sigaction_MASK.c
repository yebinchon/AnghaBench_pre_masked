
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction_ {int dummy; } ;
typedef int sigset_t_ ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct sigaction_*,struct sigaction_*) ;
 scalar_t__ FUNC_2 (scalar_t__,struct sigaction_) ;
 scalar_t__ FUNC_3 (scalar_t__,struct sigaction_) ;

dword_t FUNC_4(dword_t VAR_2, addr_t VAR_3, addr_t VAR_4, dword_t VAR_5) {
    if (VAR_5 != sizeof(sigset_t_))
        return VAR_1;
    struct sigaction_ VAR_6, VAR_7;
    if (VAR_3 != 0)
        if (FUNC_2(VAR_3, VAR_6))
            return VAR_0;
    FUNC_0("rt_sigaction(%d, 0x%x, 0x%x, %d)", VAR_2, VAR_3, VAR_4, VAR_5);

    int VAR_8 = FUNC_1(VAR_2,
            VAR_3 ? &VAR_6 : ((void*)0),
            VAR_4 ? &VAR_7 : ((void*)0));
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_4 != 0)
        if (FUNC_3(VAR_4, VAR_7))
            return VAR_0;
    return VAR_8;
}
