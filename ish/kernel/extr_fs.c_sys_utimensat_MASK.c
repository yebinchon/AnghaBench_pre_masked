
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec_ {int dummy; } ;
struct timespec {int dummy; } ;
typedef int fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 struct timespec FUNC_0 (struct timespec_) ;
 int FUNC_1 (int ,scalar_t__,struct timespec,struct timespec,int ) ;
 struct timespec FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,struct timespec_*) ;

dword_t FUNC_4(fd_t VAR_1, addr_t VAR_2, addr_t VAR_3, dword_t VAR_4) {
    struct timespec VAR_5;
    struct timespec VAR_6;
    if (VAR_3 == 0) {
        VAR_5 = VAR_6 = FUNC_2();
    } else {
        struct timespec_ VAR_7[2];
        if (FUNC_3(VAR_3, VAR_7))
            return VAR_0;
        VAR_5 = FUNC_0(VAR_7[0]);
        VAR_6 = FUNC_0(VAR_7[1]);
    }
    return FUNC_1(VAR_1, VAR_2, VAR_5, VAR_6, VAR_4);
}
