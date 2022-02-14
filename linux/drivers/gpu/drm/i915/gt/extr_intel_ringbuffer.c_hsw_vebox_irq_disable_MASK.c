
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int irq_enable_mask; int gt; } ;


 int FUNC_0 (struct intel_engine_cs*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct intel_engine_cs *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, ~0);
 FUNC_1(VAR_1->gt, VAR_1->irq_enable_mask);
}
