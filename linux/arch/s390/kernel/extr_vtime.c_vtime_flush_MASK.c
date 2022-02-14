
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {int steal_timer; int avg_steal_timer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 () ;

void FUNC_3(struct task_struct *VAR_1)
{
 u64 VAR_2, VAR_3;

 if (FUNC_1(VAR_1))
  FUNC_2();

 VAR_2 = VAR_0.steal_timer;
 VAR_3 = VAR_0.avg_steal_timer / 2;
 if ((s64) VAR_2 > 0) {
  VAR_0.steal_timer = 0;
  FUNC_0(VAR_2);
  VAR_3 += VAR_2;
 }
 VAR_0.avg_steal_timer = VAR_3;
}
