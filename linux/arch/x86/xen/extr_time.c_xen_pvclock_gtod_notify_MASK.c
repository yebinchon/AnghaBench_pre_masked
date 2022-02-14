
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int secs; long nsecs; void* system_time; } ;
struct TYPE_6__ {int secs; long nsecs; void* system_time; scalar_t__ mbz; } ;
struct TYPE_8__ {TYPE_3__ settime32; TYPE_2__ settime64; } ;
struct xen_platform_op {TYPE_4__ u; int cmd; } ;
struct timespec64 {int tv_sec; long tv_nsec; } ;
struct TYPE_5__ {int xtime_nsec; int shift; } ;
struct timekeeper {int xtime_sec; TYPE_1__ tkr_mono; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_platform_op*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct timespec64*,struct timespec64*) ;
 void* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_5,
       unsigned long VAR_6, void *VAR_7)
{

 static struct timespec64 VAR_8;

 struct xen_platform_op VAR_9;
 struct timespec64 VAR_10;
 struct timekeeper *VAR_11 = VAR_7;
 static bool VAR_12 = 1;
 int VAR_13;

 VAR_10.tv_sec = VAR_11->xtime_sec;
 VAR_10.tv_nsec = (long)(VAR_11->tkr_mono.xtime_nsec >> VAR_11->tkr_mono.shift);





 if (!VAR_6 && FUNC_1(&VAR_10, &VAR_8) < 0)
  return VAR_2;

again:
 if (VAR_12) {
  VAR_9.cmd = VAR_4;
  VAR_9.u.settime64.mbz = 0;
  VAR_9.u.settime64.secs = VAR_10.tv_sec;
  VAR_9.u.settime64.nsecs = VAR_10.tv_nsec;
  VAR_9.u.settime64.system_time = FUNC_2();
 } else {
  VAR_9.cmd = VAR_3;
  VAR_9.u.settime32.secs = VAR_10.tv_sec;
  VAR_9.u.settime32.nsecs = VAR_10.tv_nsec;
  VAR_9.u.settime32.system_time = FUNC_2();
 }

 VAR_13 = FUNC_0(&VAR_9);

 if (VAR_13 == -VAR_0 && VAR_12) {
  VAR_12 = 0;
  goto again;
 }
 if (VAR_13 < 0)
  return VAR_1;






 VAR_8 = VAR_10;
 VAR_8.tv_sec += 11 * 60;

 return VAR_2;
}
