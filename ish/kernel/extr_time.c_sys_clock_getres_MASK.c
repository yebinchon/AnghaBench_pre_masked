
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec_ {int nsec; int sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int dword_t ;
typedef int clockid_t ;
typedef int addr_t ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct timespec_) ;

dword_t FUNC_4(dword_t VAR_4, addr_t VAR_5) {
    FUNC_0("clock_getres(%d, %#x)", VAR_4, VAR_5);
    clockid_t VAR_6;
    switch (VAR_4) {
        case 128: VAR_6 = VAR_1; break;
        case 129: VAR_6 = VAR_0; break;
        default: return VAR_3;
    }

    struct timespec VAR_7;
    int VAR_8 = FUNC_1(VAR_6, &VAR_7);
    if (VAR_8 < 0)
        return FUNC_2();
    struct timespec_ VAR_9;
    VAR_9.sec = VAR_7.tv_sec;
    VAR_9.nsec = VAR_7.tv_nsec;
    if (FUNC_3(VAR_5, VAR_9))
        return VAR_2;
    return 0;
}
