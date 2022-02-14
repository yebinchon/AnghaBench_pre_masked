
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct socrates_fpga_irq_info {unsigned int type; size_t irq_line; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef size_t irq_hw_number_t ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 unsigned int VAR_2 ;
 struct socrates_fpga_irq_info* VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_4,
  struct device_node *VAR_5, const u32 *VAR_6, unsigned int VAR_7,
  irq_hw_number_t *VAR_8, unsigned int *VAR_9)
{
 struct socrates_fpga_irq_info *VAR_10 = &VAR_3[VAR_6[0]];

 *VAR_8 = VAR_6[0];
 if (VAR_10->type == VAR_2) {

  if (VAR_6[1] != VAR_1 &&
      VAR_6[1] != VAR_0) {
   FUNC_0("FPGA PIC: invalid irq type, setting default active low\n");
   *VAR_9 = VAR_1;
  } else {
   *VAR_9 = VAR_6[1];
  }
 } else {

  *VAR_9 = VAR_10->type;
 }


 if (VAR_6[2] <= 2)
  VAR_10->irq_line = VAR_6[2];
 else
  FUNC_0("FPGA PIC: invalid irq routing\n");

 return 0;
}
