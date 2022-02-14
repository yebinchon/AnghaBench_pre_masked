
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_guc {int mmio_msg; int msg_enabled_mask; int irq_lock; } ;
struct TYPE_2__ {int uncore; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_guc*) ;
 TYPE_1__* FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct intel_guc *VAR_0)
{
 u32 VAR_1;

 FUNC_4(&VAR_0->irq_lock);

 VAR_1 = FUNC_3(FUNC_2(VAR_0)->uncore, FUNC_0(15));
 VAR_0->mmio_msg |= VAR_1 & VAR_0->msg_enabled_mask;






 FUNC_1(VAR_0);

 FUNC_5(&VAR_0->irq_lock);
}
