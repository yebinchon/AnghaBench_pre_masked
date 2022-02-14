
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_alloc_info {int ioapic_pin; int ioapic_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,int ,int,int,struct irq_alloc_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct irq_alloc_info*,int ,int ,int ) ;
 struct irq_domain* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(int VAR_2, int VAR_3)
{
 int VAR_4 = -1;
 struct irq_domain *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5) {
  struct irq_alloc_info VAR_6;

  FUNC_1(&VAR_6, VAR_0, 0, 0);
  VAR_6.ioapic_id = FUNC_3(VAR_2);
  VAR_6.ioapic_pin = VAR_3;
  FUNC_4(&VAR_1);
  VAR_4 = FUNC_0(VAR_5, 0, VAR_2, VAR_3, &VAR_6);
  FUNC_5(&VAR_1);
 }

 return VAR_4;
}
