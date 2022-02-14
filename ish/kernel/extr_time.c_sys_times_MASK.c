
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tms_ {void* tms_stime; void* tms_cstime; void* tms_utime; void* tms_cutime; } ;
struct rusage_ {int stime; int utime; } ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 struct rusage_ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,struct tms_) ;

dword_t FUNC_4(addr_t VAR_1) {
    FUNC_0("times(0x%x)", VAR_1);
    if (VAR_1) {
        struct tms_ VAR_2;
        struct rusage_ VAR_3 = FUNC_2();
        VAR_2.tms_utime = FUNC_1(VAR_3.utime);
        VAR_2.tms_stime = FUNC_1(VAR_3.stime);
        VAR_2.tms_cutime = VAR_2.tms_utime;
        VAR_2.tms_cstime = VAR_2.tms_stime;
        if (FUNC_3(VAR_1, VAR_2))
            return VAR_0;
    }
    return 0;
}
