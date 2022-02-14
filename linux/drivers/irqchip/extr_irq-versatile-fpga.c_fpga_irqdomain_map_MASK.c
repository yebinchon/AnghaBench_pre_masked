
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct fpga_irq_data* host_data; } ;
struct fpga_irq_data {int valid; int chip; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct fpga_irq_data*) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_2, unsigned int VAR_3,
  irq_hw_number_t VAR_4)
{
 struct fpga_irq_data *VAR_5 = VAR_2->host_data;


 if (!(VAR_5->valid & FUNC_0(VAR_4)))
  return -VAR_0;
 FUNC_2(VAR_3, VAR_5);
 FUNC_1(VAR_3, &VAR_5->chip,
    VAR_1);
 FUNC_3(VAR_3);
 return 0;
}
