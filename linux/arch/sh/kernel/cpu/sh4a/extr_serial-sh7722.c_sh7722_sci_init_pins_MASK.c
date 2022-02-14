
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, unsigned int VAR_3)
{
 unsigned short VAR_4;

 if (VAR_2->mapbase == 0xffe00000) {
  VAR_4 = FUNC_0(VAR_1);
  VAR_4 &= ~0x03cf;
  if (!(VAR_3 & VAR_0))
   VAR_4 |= 0x0340;

  FUNC_1(VAR_4, VAR_1);
 }
}
