
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int secs; long nsecs; int system_time; scalar_t__ mbz; } ;
struct TYPE_6__ {TYPE_2__ settime64; } ;
struct xen_platform_op {TYPE_3__ u; int cmd; } ;
struct timespec64 {int tv_sec; long tv_nsec; } ;
struct TYPE_4__ {int xtime_nsec; int shift; } ;
struct timekeeper {int xtime_sec; int wall_to_monotonic; TYPE_1__ tkr_mono; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (struct xen_platform_op*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct timespec64 FUNC_1 (struct timespec64,int ) ;
 scalar_t__ FUNC_2 (struct timespec64*,struct timespec64*) ;
 int FUNC_3 (struct timespec64*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
       unsigned long VAR_3, void *VAR_4)
{

 static struct timespec64 VAR_5;

 struct xen_platform_op VAR_6;
 struct timespec64 VAR_7, VAR_8;
 struct timekeeper *VAR_9 = VAR_4;

 VAR_7.tv_sec = VAR_9->xtime_sec;
 VAR_7.tv_nsec = (long)(VAR_9->tkr_mono.xtime_nsec >> VAR_9->tkr_mono.shift);
 VAR_8 = FUNC_1(VAR_7, VAR_9->wall_to_monotonic);





 if (!VAR_3 && FUNC_2(&VAR_7, &VAR_5) < 0)
  return VAR_0;

 VAR_6.cmd = VAR_1;
 VAR_6.u.settime64.mbz = 0;
 VAR_6.u.settime64.secs = VAR_7.tv_sec;
 VAR_6.u.settime64.nsecs = VAR_7.tv_nsec;
 VAR_6.u.settime64.system_time = FUNC_3(&VAR_8);
 (void)FUNC_0(&VAR_6);






 VAR_5 = VAR_7;
 VAR_5.tv_sec += 11 * 60;

 return VAR_0;
}
