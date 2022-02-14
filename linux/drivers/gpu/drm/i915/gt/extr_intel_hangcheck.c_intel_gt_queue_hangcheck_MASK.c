
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int work; } ;
struct intel_gt {TYPE_1__ hangcheck; } ;
struct TYPE_4__ {int enable_hangcheck; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct intel_gt *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_2(!VAR_1.enable_hangcheck))
  return;







 VAR_4 = FUNC_1(VAR_0);
 FUNC_0(VAR_2, &VAR_3->hangcheck.work, VAR_4);
}
