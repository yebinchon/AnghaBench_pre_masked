
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t_ ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

int_t FUNC_3(fd_t VAR_2, addr_t VAR_3, int_t VAR_4, int_t VAR_5, addr_t VAR_6, dword_t VAR_7) {
    sigset_t_ VAR_8;
    if (VAR_6 != 0) {
        if (VAR_7 != sizeof(sigset_t_))
            return VAR_1;
        if (FUNC_2(VAR_6, VAR_8))
            return VAR_0;
        FUNC_0(VAR_8);
    }

    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
