
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec_ {int nsec; int sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int dword_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_3 (int ,struct timespec_) ;
 scalar_t__ FUNC_4 (int ,struct timespec_) ;

dword_t FUNC_5(addr_t VAR_1, addr_t VAR_2) {
    struct timespec_ VAR_3;
    if (FUNC_3(VAR_1, VAR_3))
        return VAR_0;
    FUNC_0("nanosleep({%d, %d}, 0x%x", VAR_3.sec, VAR_3.nsec, VAR_2);
    struct timespec VAR_4;
    VAR_4.tv_sec = VAR_3.sec;
    VAR_4.tv_nsec = VAR_3.nsec;
    struct timespec VAR_5;
    if (FUNC_2(&VAR_4, &VAR_5) < 0)
        return FUNC_1();
    if (VAR_2 != 0) {
        struct timespec_ VAR_6;
        VAR_6.sec = VAR_5.tv_sec;
        VAR_6.nsec = VAR_5.tv_nsec;
        if (FUNC_4(VAR_2, VAR_6))
            return VAR_0;
    }
    return 0;
}
