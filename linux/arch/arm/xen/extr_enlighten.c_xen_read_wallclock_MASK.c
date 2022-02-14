
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct pvclock_wall_clock {int version; int sec; int nsec; scalar_t__ sec_hi; } ;
struct shared_info {struct pvclock_wall_clock wc; } ;


 struct shared_info* VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 () ;
 struct timespec64 FUNC_2 (struct timespec64,struct timespec64) ;

__attribute__((used)) static void FUNC_3(struct timespec64 *VAR_1)
{
 u32 VAR_2;
 struct timespec64 VAR_3, VAR_4;
 struct shared_info *VAR_5 = VAR_0;
 struct pvclock_wall_clock *VAR_6 = &(VAR_5->wc);


 do {
  VAR_2 = VAR_6->version;
  FUNC_1();
  VAR_3.tv_sec = ((uint64_t)VAR_6->sec_hi << 32) | VAR_6->sec;
  VAR_3.tv_nsec = VAR_6->nsec;
  FUNC_1();
 } while ((VAR_6->version & 1) || (VAR_2 != VAR_6->version));


 FUNC_0(&VAR_4);
 *VAR_1 = FUNC_2(VAR_3, VAR_4);
}
