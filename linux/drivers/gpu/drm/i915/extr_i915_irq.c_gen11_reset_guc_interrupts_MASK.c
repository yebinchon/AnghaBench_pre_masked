
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int dummy; } ;
struct intel_gt {int irq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_gt*,int ,int ) ;
 struct intel_gt* FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct intel_guc *VAR_1)
{
 struct intel_gt *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->irq_lock);
 FUNC_0(VAR_2, 0, VAR_0);
 FUNC_3(&VAR_2->irq_lock);
}
