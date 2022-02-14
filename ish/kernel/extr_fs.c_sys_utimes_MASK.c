
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval_ {int dummy; } ;
struct timespec {int dummy; } ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct timespec FUNC_0 (struct timeval_) ;
 int FUNC_1 (int ,scalar_t__,struct timespec,struct timespec,int ) ;
 struct timespec FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,struct timeval_*) ;

dword_t FUNC_4(addr_t VAR_2, addr_t VAR_3) {
    struct timespec VAR_4;
    struct timespec VAR_5;
    if (VAR_3 == 0) {
        VAR_4 = VAR_5 = FUNC_2();
    } else {
        struct timeval_ VAR_6[2];
        if (FUNC_3(VAR_3, VAR_6))
            return VAR_1;
        VAR_4 = FUNC_0(VAR_6[0]);
        VAR_5 = FUNC_0(VAR_6[1]);
    }
    return FUNC_1(VAR_0, VAR_2, VAR_4, VAR_5, 0);
}
