
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct uart_softc*) ;
 int FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_softc*,char const*) ;

int
FUNC_4(struct uart_softc *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return (0);

 if (FUNC_0("stdio", VAR_1) == 0)
  VAR_2 = FUNC_2(VAR_0);
 else
  VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 == 0)
  FUNC_1(VAR_0);

 return (VAR_2);
}
