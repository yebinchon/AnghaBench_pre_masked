
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ disable_depth; scalar_t__ accounting_timestamp; scalar_t__ runtime_status; int active_time; int suspended_time; } ;
struct device {TYPE_1__ power; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;

 if (VAR_1->power.disable_depth > 0)
  return;

 VAR_3 = VAR_1->power.accounting_timestamp;

 VAR_2 = FUNC_0();
 VAR_1->power.accounting_timestamp = VAR_2;






 if (VAR_2 < VAR_3)
  return;

 VAR_4 = VAR_2 - VAR_3;

 if (VAR_1->power.runtime_status == VAR_0)
  VAR_1->power.suspended_time += VAR_4;
 else
  VAR_1->power.active_time += VAR_4;
}
