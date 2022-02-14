
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uart_port {scalar_t__ mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_5, u_int VAR_6)
{
 int VAR_7 = -VAR_0;

 if (VAR_5->mapbase == VAR_4) {
  if (VAR_6)
   VAR_1 |= VAR_2 | VAR_3;
  else
   VAR_1 &= ~(VAR_2 | VAR_3);
  VAR_7 = 0;
 }
 return VAR_7;
}
