
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc {int irq_lock; int msg_enabled_mask; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct intel_guc *VAR_0, u32 VAR_1)
{
 FUNC_0(&VAR_0->irq_lock);
 VAR_0->msg_enabled_mask |= VAR_1;
 FUNC_1(&VAR_0->irq_lock);
}
