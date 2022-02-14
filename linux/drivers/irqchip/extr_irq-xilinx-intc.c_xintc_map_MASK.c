
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int intr_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int *,int ,char*) ;
 int FUNC_2 (unsigned int,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_5, unsigned int VAR_6, irq_hw_number_t VAR_7)
{
 if (VAR_4->intr_mask & (1 << VAR_7)) {
  FUNC_1(VAR_6, &VAR_3,
      VAR_1, "edge");
  FUNC_0(VAR_6, VAR_0);
 } else {
  FUNC_1(VAR_6, &VAR_3,
      VAR_2, "level");
  FUNC_2(VAR_6, VAR_0);
 }
 return 0;
}
