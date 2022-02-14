
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int irq_enable_mask; int gt; } ;


 int FUNC_0 (struct intel_engine_cs*,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct intel_engine_cs *VAR_1)
{
 FUNC_1(VAR_1, VAR_0, ~VAR_1->irq_enable_mask);


 FUNC_0(VAR_1, VAR_0);

 FUNC_2(VAR_1->gt, VAR_1->irq_enable_mask);
}
