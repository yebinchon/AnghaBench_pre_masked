
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_irq_cib_host_data {scalar_t__ max_bits; } ;
struct octeon_irq_cib_chip_data {scalar_t__ bit; struct octeon_irq_cib_host_data* host_data; } ;
struct irq_domain {struct octeon_irq_cib_host_data* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct irq_domain*) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct octeon_irq_cib_chip_data*) ;
 struct octeon_irq_cib_chip_data* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_4,
         unsigned int VAR_5, irq_hw_number_t VAR_6)
{
 struct octeon_irq_cib_host_data *VAR_7 = VAR_4->host_data;
 struct octeon_irq_cib_chip_data *VAR_8;

 if (VAR_6 >= VAR_7->max_bits) {
  FUNC_4("ERROR: %s mapping %u is to big!\n",
         FUNC_0(VAR_4)->name, (unsigned)VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 VAR_8->host_data = VAR_7;
 VAR_8->bit = VAR_6;

 FUNC_1(VAR_5, &VAR_3,
     VAR_2);
 FUNC_2(VAR_5, VAR_8);
 return 0;
}
