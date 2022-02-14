
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (unsigned short,int ) ;
 int FUNC_3 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_3, unsigned int VAR_4)
{
 unsigned short VAR_5;


 VAR_5 = FUNC_1(VAR_1);

 FUNC_3(VAR_5 & 0x0fcf, VAR_1);

 if (!(VAR_4 & VAR_0)) {

  VAR_5 = FUNC_1(VAR_1);


  FUNC_3((VAR_5 & 0x0fcf) | 0x1000, VAR_1);

  VAR_5 = FUNC_0(VAR_2);

  FUNC_2(VAR_5 & 0xbf, VAR_2);
 }
}
