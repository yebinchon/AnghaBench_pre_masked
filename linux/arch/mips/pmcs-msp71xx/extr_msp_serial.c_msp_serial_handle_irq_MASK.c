
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; struct msp_uart_data* private_data; } ;
struct msp_uart_data {int last_lcr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_3)
{
 struct msp_uart_data *VAR_4 = VAR_3->private_data;
 unsigned int VAR_5 = FUNC_0(VAR_3->membase + (VAR_0 << VAR_3->regshift));

 if (FUNC_1(VAR_3, VAR_5)) {
  return 1;
 } else if ((VAR_5 & VAR_1) == VAR_1) {
  (void)FUNC_0(VAR_3->membase + 0xc0);
  FUNC_2(VAR_4->last_lcr, VAR_3->membase + (VAR_2 << VAR_3->regshift));

  return 1;
 }

 return 0;
}
