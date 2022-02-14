
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zynq_gpio {scalar_t__ base_addr; TYPE_1__* p_data; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct TYPE_2__ {unsigned int max_bank; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct irq_chip*,struct irq_desc*) ;
 struct zynq_gpio* FUNC_4 (int ) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct zynq_gpio*,unsigned int,int) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_0)
{
 u32 VAR_1, VAR_2;
 unsigned int VAR_3;
 struct zynq_gpio *VAR_4 =
  FUNC_4(FUNC_6(VAR_0));
 struct irq_chip *VAR_5 = FUNC_5(VAR_0);

 FUNC_2(VAR_5, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_4->p_data->max_bank; VAR_3++) {
  VAR_1 = FUNC_7(VAR_4->base_addr +
     FUNC_1(VAR_3));
  VAR_2 = FUNC_7(VAR_4->base_addr +
     FUNC_0(VAR_3));
  FUNC_8(VAR_4, VAR_3, VAR_1 & ~VAR_2);
 }

 FUNC_3(VAR_5, VAR_0);
}
