
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ciu_chip_data {int line; int bit; int gpio_line; } ;
struct irq_chip {int dummy; } ;
typedef int irq_flow_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct irq_chip*,int ) ;
 int FUNC_1 (int,struct octeon_ciu_chip_data*) ;
 struct octeon_ciu_chip_data* FUNC_2 (int,int ) ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3, int VAR_4, int VAR_5, int VAR_6,
          struct irq_chip *VAR_7,
          irq_flow_handler_t VAR_8)
{
 struct octeon_ciu_chip_data *VAR_9;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_7, VAR_8);

 VAR_9->line = VAR_4;
 VAR_9->bit = VAR_5;
 VAR_9->gpio_line = VAR_6;

 FUNC_1(VAR_3, VAR_9);
 VAR_2[VAR_4][VAR_5] = VAR_3;
 return 0;
}
