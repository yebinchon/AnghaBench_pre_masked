
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ time64_t ;
struct timespec64 {long tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct timespec64 *VAR_1) {
 int64_t VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_0(VAR_0, 3);
 if (VAR_2 < 0) return -1;

 VAR_3 = (uint32_t)VAR_2 & 0xffffff;

 VAR_1->tv_nsec = (long)(VAR_3 % 100) * 10000 * 1000;
 VAR_1->tv_sec = (time64_t)(VAR_3 / 100);

 return 0;
}
