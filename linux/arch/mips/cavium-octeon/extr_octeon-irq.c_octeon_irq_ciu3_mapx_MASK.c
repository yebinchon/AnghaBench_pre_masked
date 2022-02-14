
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ciu_chip_data {int current_cpu; int ciu_node; int ciu3_addr; int intsn; } ;
struct octeon_ciu3_info {int node; int ciu3_addr; } ;
struct irq_domain {struct octeon_ciu3_info* host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_1 (unsigned int,struct octeon_ciu_chip_data*) ;
 struct octeon_ciu_chip_data* FUNC_2 (int,int ,int ) ;

int FUNC_3(struct irq_domain *VAR_3, unsigned int VAR_4,
    irq_hw_number_t VAR_5, struct irq_chip *VAR_6)
{
 struct octeon_ciu3_info *VAR_7 = VAR_3->host_data;
 struct octeon_ciu_chip_data *VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1,
             VAR_7->node);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->intsn = VAR_5;
 VAR_8->current_cpu = -1;
 VAR_8->ciu3_addr = VAR_7->ciu3_addr;
 VAR_8->ciu_node = VAR_7->node;
 FUNC_0(VAR_4, VAR_6, VAR_2);
 FUNC_1(VAR_4, VAR_8);

 return 0;
}
