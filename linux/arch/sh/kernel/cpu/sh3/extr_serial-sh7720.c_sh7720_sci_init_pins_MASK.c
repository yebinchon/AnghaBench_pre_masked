
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, unsigned int VAR_4)
{
 unsigned short VAR_5;

 if (VAR_4 & VAR_0) {

  if (VAR_3->mapbase == 0xa4430000) {

   VAR_5 = FUNC_0(VAR_1);
   FUNC_1((VAR_5 & 0xfc03), VAR_1);
  } else if (VAR_3->mapbase == 0xa4438000) {

   VAR_5 = FUNC_0(VAR_2);
   FUNC_1((VAR_5 & 0xfc03), VAR_2);
  }
 } else {
  if (VAR_3->mapbase == 0xa4430000) {

   VAR_5 = FUNC_0(VAR_1);
   FUNC_1((VAR_5 & 0xffc3), VAR_1);
  } else if (VAR_3->mapbase == 0xa4438000) {

   VAR_5 = FUNC_0(VAR_2);
   FUNC_1((VAR_5 & 0xffc3), VAR_2);
  }
 }
}
