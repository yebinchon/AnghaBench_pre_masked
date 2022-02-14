
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; struct msp_uart_data* private_data; } ;
struct msp_uart_data {int last_lcr; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_1, int VAR_2, int VAR_3)
{
 struct msp_uart_data *VAR_4 = VAR_1->private_data;

 if (VAR_2 == VAR_0)
  VAR_4->last_lcr = VAR_3;

 VAR_2 <<= VAR_1->regshift;
 FUNC_0(VAR_3, VAR_1->membase + VAR_2);
}
