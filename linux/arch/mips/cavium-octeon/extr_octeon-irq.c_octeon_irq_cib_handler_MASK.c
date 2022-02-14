
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct octeon_irq_cib_host_data {int max_bits; int raw_reg; int lock; int en_reg; } ;
struct irq_domain {struct octeon_irq_cib_host_data* host_data; } ;
struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long long) ;
 int FUNC_2 (struct irq_desc*) ;
 struct irq_data* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_domain*,int) ;
 struct irq_desc* FUNC_5 (int) ;
 int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_2, void *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5;
 u64 VAR_6;
 int VAR_7;
 int VAR_8;
 struct irq_domain *VAR_9 = VAR_3;
 struct octeon_irq_cib_host_data *VAR_10 = VAR_9->host_data;

 VAR_4 = FUNC_0(VAR_10->en_reg);
 VAR_5 = FUNC_0(VAR_10->raw_reg);

 VAR_6 = VAR_4 & VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_10->max_bits; VAR_7++) {
  if ((VAR_6 & 1ull << VAR_7) == 0)
   continue;
  VAR_8 = FUNC_4(VAR_9, VAR_7);
  if (!VAR_8) {
   unsigned long VAR_11;

   FUNC_7("ERROR: CIB bit %d@%llx IRQ unhandled, disabling\n",
    VAR_7, VAR_10->raw_reg);
   FUNC_8(&VAR_10->lock, VAR_11);
   VAR_4 = FUNC_0(VAR_10->en_reg);
   VAR_4 &= ~(1ull << VAR_7);
   FUNC_1(VAR_10->en_reg, VAR_4);
   FUNC_1(VAR_10->raw_reg, 1ull << VAR_7);
   FUNC_9(&VAR_10->lock, VAR_11);
  } else {
   struct irq_desc *VAR_12 = FUNC_5(VAR_8);
   struct irq_data *VAR_13 = FUNC_3(VAR_12);

   if (FUNC_6(VAR_13) &
    VAR_1)
    FUNC_1(VAR_10->raw_reg, 1ull << VAR_7);
   FUNC_2(VAR_12);
  }
 }

 return VAR_0;
}
