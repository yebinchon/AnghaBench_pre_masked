
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_hw_events {scalar_t__ lbr_users; scalar_t__ lbr_pebs_users; } ;
struct TYPE_3__ {scalar_t__ lbr_format; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpu_hw_events*) ;
 int FUNC_1 (struct cpu_hw_events*) ;
 int FUNC_2 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_3 (int *) ;
 TYPE_2__ VAR_2 ;

void FUNC_4(void)
{
 struct cpu_hw_events *VAR_3 = FUNC_3(&VAR_1);







 if (!VAR_3->lbr_users || VAR_3->lbr_users == VAR_3->lbr_pebs_users)
  return;

 if (VAR_2.intel_cap.lbr_format == VAR_0)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3);

 FUNC_0(VAR_3);
}
