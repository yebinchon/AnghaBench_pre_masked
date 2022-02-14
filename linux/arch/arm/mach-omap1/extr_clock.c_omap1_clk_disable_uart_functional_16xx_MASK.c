
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_clk {int sysc_addr; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_0)
{
 struct uart_clk *VAR_1;


 VAR_1 = (struct uart_clk *)VAR_0;
 FUNC_2((FUNC_1(VAR_1->sysc_addr) & ~0x18), VAR_1->sysc_addr);

 FUNC_0(VAR_0);
}
