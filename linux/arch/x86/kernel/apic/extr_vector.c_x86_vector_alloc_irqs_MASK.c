
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {unsigned int hwirq; struct apic_chip_data* chip_data; int * chip; } ;
struct irq_alloc_info {int flags; } ;
struct apic_chip_data {unsigned int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct apic_chip_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct apic_chip_data* FUNC_2 (int) ;
 int FUNC_3 (struct irq_data*,struct irq_alloc_info*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct apic_chip_data*) ;
 int FUNC_5 (struct irq_data*) ;
 struct irq_data* FUNC_6 (struct irq_domain*,unsigned int) ;
 int FUNC_7 (struct irq_data*) ;
 int VAR_6 ;
 int FUNC_8 (unsigned int,int,int) ;
 int FUNC_9 (unsigned int,struct irq_data*,struct apic_chip_data*) ;
 int FUNC_10 (struct irq_domain*,unsigned int,int) ;

__attribute__((used)) static int FUNC_11(struct irq_domain *VAR_7, unsigned int VAR_8,
     unsigned int VAR_9, void *VAR_10)
{
 struct irq_alloc_info *VAR_11 = VAR_10;
 struct apic_chip_data *VAR_12;
 struct irq_data *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (VAR_5)
  return -VAR_2;


 if ((VAR_11->flags & VAR_3) && VAR_9 > 1)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_13 = FUNC_6(VAR_7, VAR_8 + VAR_14);
  FUNC_0(!VAR_13);
  VAR_16 = FUNC_5(VAR_13);
  FUNC_1(VAR_13->chip_data);
  VAR_12 = FUNC_2(VAR_16);
  if (!VAR_12) {
   VAR_15 = -VAR_0;
   goto error;
  }

  VAR_12->irq = VAR_8 + VAR_14;
  VAR_13->chip = &VAR_6;
  VAR_13->chip_data = VAR_12;
  VAR_13->hwirq = VAR_8 + VAR_14;
  FUNC_7(VAR_13);







  if (VAR_11->flags & VAR_4) {
   if (!FUNC_9(VAR_8 + VAR_14, VAR_13, VAR_12))
    continue;
  }

  VAR_15 = FUNC_3(VAR_13, VAR_11);
  FUNC_8(VAR_8 + VAR_14, 0, VAR_15);
  if (VAR_15) {
   VAR_13->chip_data = ((void*)0);
   FUNC_4(VAR_12);
   goto error;
  }
 }

 return 0;

error:
 FUNC_10(VAR_7, VAR_8, VAR_14);
 return VAR_15;
}
