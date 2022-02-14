
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->mapbase == 0xA4400000) {
  FUNC_1(FUNC_0(VAR_0) & 0xffc0, VAR_0);
  FUNC_1(FUNC_0(VAR_1) & 0x0fff, VAR_1);
 } else if (VAR_2->mapbase == 0xA4410000)
  FUNC_1(FUNC_0(VAR_1) & 0xf003, VAR_1);
}
