
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec_ {int nsec; int sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int usec; int sec; } ;
struct rusage_ {TYPE_1__ utime; } ;
typedef int dword_t ;
typedef int clockid_t ;
typedef int addr_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 () ;
 struct rusage_ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,struct timespec_) ;

dword_t FUNC_5(dword_t VAR_5, addr_t VAR_6) {
    FUNC_0("clock_gettime(%d, 0x%x)", VAR_5, VAR_6);

    struct timespec VAR_7;
    if (VAR_5 == VAR_1) {

        struct rusage_ VAR_8 = FUNC_3();
        VAR_7.tv_sec = VAR_8.utime.sec;
        VAR_7.tv_nsec = VAR_8.utime.usec * 1000;
    } else {
        clockid_t VAR_9;
        switch (VAR_5) {
            case 128: VAR_9 = VAR_2; break;
            case 129: VAR_9 = VAR_0; break;
            default: return VAR_4;
        }
        int VAR_10 = FUNC_1(VAR_9, &VAR_7);
        if (VAR_10 < 0)
            return FUNC_2();
    }
    struct timespec_ VAR_11;
    VAR_11.sec = VAR_7.tv_sec;
    VAR_11.nsec = VAR_7.tv_nsec;
    if (FUNC_4(VAR_6, VAR_11))
        return VAR_3;
    return 0;
}
