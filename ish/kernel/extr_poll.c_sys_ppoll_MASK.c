
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec_ {int sec; int nsec; } ;
typedef struct timespec_ sigset_t_ ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec_) ;
 int FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,struct timespec_) ;

dword_t FUNC_3(addr_t VAR_2, dword_t VAR_3, addr_t VAR_4, addr_t VAR_5, dword_t VAR_6) {
    int VAR_7 = -1;
    if (VAR_4 != 0) {
        struct timespec_ VAR_8;
        if (FUNC_2(VAR_4, VAR_8))
            return VAR_0;
        VAR_7 = VAR_8.sec * 1000 + VAR_8.nsec / 1000000;
    }

    sigset_t_ VAR_9;
    if (VAR_5 != 0) {
        if (VAR_6 != sizeof(sigset_t_))
            return VAR_1;
        if (FUNC_2(VAR_5, VAR_9))
            return VAR_0;
        FUNC_0(VAR_9);
    }

    return FUNC_1(VAR_2, VAR_3, VAR_7);
}
