
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct octeon_irq_cib_host_data {int lock; int en_reg; } ;
struct octeon_irq_cib_chip_data {unsigned long long bit; struct octeon_irq_cib_host_data* host_data; } ;
struct irq_data {int dummy; } ;


 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long long) ;
 struct octeon_irq_cib_chip_data* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 unsigned long VAR_1;
 u64 VAR_2;
 struct octeon_irq_cib_chip_data *VAR_3 = FUNC_2(VAR_0);
 struct octeon_irq_cib_host_data *VAR_4 = VAR_3->host_data;

 FUNC_3(&VAR_4->lock, VAR_1);
 VAR_2 = FUNC_0(VAR_4->en_reg);
 VAR_2 |= 1ull << VAR_3->bit;
 FUNC_1(VAR_4->en_reg, VAR_2);
 FUNC_4(&VAR_4->lock, VAR_1);
}
