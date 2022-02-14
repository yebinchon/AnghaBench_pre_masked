
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_ops {int dummy; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 struct irq_domain* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct irq_domain_ops const* VAR_2 ;

int FUNC_2(struct irq_domain *VAR_3, const struct irq_domain_ops *VAR_4)
{
 if (VAR_3) {
  FUNC_1("ITS: Enabling GICv4 support\n");
  VAR_1 = VAR_3;
  VAR_2 = VAR_4;
  return 0;
 }

 FUNC_0("ITS: No GICv4 VPE domain allocated\n");
 return -VAR_0;
}
