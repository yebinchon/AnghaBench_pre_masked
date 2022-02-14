
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; } ;
struct task_struct {int utimescaled; TYPE_1__ thread; } ;
struct TYPE_4__ {int steal_timer; int softirq_timer; int hardirq_timer; int system_timer; int guest_timer; int user_timer; scalar_t__ last_update_timer; scalar_t__ last_update_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (struct task_struct*,scalar_t__) ;
 int FUNC_2 (struct task_struct*,scalar_t__,int ) ;
 int FUNC_3 (struct task_struct*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct task_struct *VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_8 = VAR_3.last_update_timer;
 VAR_9 = VAR_3.last_update_clock;
 asm volatile(
  "	stpt	%0\n"



  "	stck	%1"

  : "=Q" (VAR_3.last_update_timer),
    "=Q" (VAR_3.last_update_clock));
 VAR_9 = VAR_3.last_update_clock - VAR_9;
 VAR_8 -= VAR_3.last_update_timer;

 if (FUNC_5())
  VAR_3.hardirq_timer += VAR_8;
 else
  VAR_3.system_timer += VAR_8;


 if (VAR_6 &&
     FUNC_8(VAR_4, FUNC_7(VAR_5)))
  FUNC_9();


 VAR_10 = FUNC_10(&VAR_7->thread.user_timer,
    FUNC_0(VAR_3.user_timer));
 VAR_11 = FUNC_10(&VAR_7->thread.guest_timer,
     FUNC_0(VAR_3.guest_timer));
 VAR_12 = FUNC_10(&VAR_7->thread.system_timer,
      FUNC_0(VAR_3.system_timer));
 VAR_13 = FUNC_10(&VAR_7->thread.hardirq_timer,
       FUNC_0(VAR_3.hardirq_timer));
 VAR_14 = FUNC_10(&VAR_7->thread.softirq_timer,
       FUNC_0(VAR_3.softirq_timer));
 VAR_3.steal_timer +=
  VAR_9 - VAR_10 - VAR_11 - VAR_12 - VAR_13 - VAR_14;


 if (VAR_10) {
  FUNC_3(VAR_7, FUNC_4(VAR_10));
  VAR_7->utimescaled += FUNC_4(FUNC_6(VAR_10));
 }

 if (VAR_11) {
  FUNC_1(VAR_7, FUNC_4(VAR_11));
  VAR_7->utimescaled += FUNC_4(FUNC_6(VAR_11));
 }

 if (VAR_12)
  FUNC_2(VAR_7, VAR_12, VAR_2);
 if (VAR_13)
  FUNC_2(VAR_7, VAR_13, VAR_0);
 if (VAR_14)
  FUNC_2(VAR_7, VAR_14, VAR_1);

 return FUNC_11(VAR_10 + VAR_11 + VAR_12 + VAR_13 + VAR_14);
}
