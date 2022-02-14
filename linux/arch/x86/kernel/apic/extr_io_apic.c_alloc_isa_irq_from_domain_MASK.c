
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chip_data {int isa_irq; } ;
struct irq_domain {int dummy; } ;
struct irq_data {struct mp_chip_data* chip_data; scalar_t__ parent_data; } ;
struct irq_alloc_info {int flags; int ioapic_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mp_chip_data*,int,int,int ) ;
 int FUNC_1 (struct irq_domain*,int,int,int,struct irq_alloc_info*,int,int *) ;
 int FUNC_2 (struct irq_alloc_info*) ;
 struct irq_data* FUNC_3 (struct irq_domain*,int) ;
 struct irq_data* FUNC_4 (int) ;
 int FUNC_5 (int,struct irq_alloc_info*) ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_3,
         int VAR_4, int VAR_5, int VAR_6,
         struct irq_alloc_info *VAR_7)
{
 struct mp_chip_data *VAR_8;
 struct irq_data *VAR_9 = FUNC_4(VAR_4);
 int VAR_10 = FUNC_2(VAR_7);






 if (VAR_9 && VAR_9->parent_data) {
  if (!FUNC_5(VAR_4, VAR_7))
   return -VAR_0;
  if (FUNC_0(VAR_9->chip_data, VAR_10, VAR_5,
       VAR_7->ioapic_pin))
   return -VAR_1;
 } else {
  VAR_7->flags |= VAR_2;
  VAR_4 = FUNC_1(VAR_3, VAR_4, 1, VAR_10, VAR_7, 1,
           ((void*)0));
  if (VAR_4 >= 0) {
   VAR_9 = FUNC_3(VAR_3, VAR_4);
   VAR_8 = VAR_9->chip_data;
   VAR_8->isa_irq = 1;
  }
 }

 return VAR_4;
}
