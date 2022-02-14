
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int enabled; } ;
struct intel_guc {TYPE_1__ interrupts; } ;
struct intel_gt {int irq_lock; int uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_gt*,int ,int ) ;
 struct intel_gt* FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct intel_guc *VAR_5)
{
 struct intel_gt *VAR_6 = FUNC_3(VAR_5);

 FUNC_5(&VAR_6->irq_lock);
 if (!VAR_5->interrupts.enabled) {
  u32 VAR_7 = FUNC_0(VAR_0, VAR_4);

  FUNC_1(FUNC_2(VAR_6, 0, VAR_1));
  FUNC_4(VAR_6->uncore, VAR_2, VAR_7);
  FUNC_4(VAR_6->uncore, VAR_3, ~VAR_7);
  VAR_5->interrupts.enabled = 1;
 }
 FUNC_6(&VAR_6->irq_lock);
}
