
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uart_port {scalar_t__ mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, u_int VAR_4, u_int VAR_5)
{
 if (VAR_3->mapbase == (u_int)&VAR_2) {
  if (VAR_4)
  {
   FUNC_0(VAR_1);
   FUNC_0(VAR_0);
  }else
  {
   FUNC_1(VAR_1);
   FUNC_1(VAR_0);
  }
 }
}
