
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ clocksync_interval; } ;
struct sys_t_output {scalar_t__ clocksync_jiffies; TYPE_1__ node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct sys_t_output *VAR_1)
{
 if (VAR_1->node.clocksync_interval &&
     FUNC_0(VAR_1->clocksync_jiffies + VAR_1->node.clocksync_interval,
         VAR_0)) {
  VAR_1->clocksync_jiffies = VAR_0;

  return 1;
 }

 return 0;
}
