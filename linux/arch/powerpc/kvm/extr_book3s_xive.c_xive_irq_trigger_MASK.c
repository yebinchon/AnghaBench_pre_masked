
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xive_irq_data {int flags; int trig_mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct xive_irq_data *VAR_1)
{

 if (FUNC_0(VAR_1->flags & VAR_0))
  return 0;


 if (FUNC_0(!VAR_1->trig_mmio))
  return 0;

 FUNC_1(VAR_1->trig_mmio, 0);

 return 1;
}
