
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_opal_softc {int alt_break_state; } ;


 int FUNC_0 (unsigned char,int *) ;
 int FUNC_1 (struct uart_opal_softc*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2(struct uart_opal_softc *VAR_0)
{
 unsigned char VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1, 1);
 if (VAR_2 != 1)
  return (-1);




 return (VAR_1);
}
