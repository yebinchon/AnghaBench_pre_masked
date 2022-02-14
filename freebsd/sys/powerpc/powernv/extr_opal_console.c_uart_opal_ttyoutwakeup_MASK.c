
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_opal_softc {int dummy; } ;
struct tty {int dummy; } ;
typedef int buffer ;


 struct uart_opal_softc* FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*,char*,int) ;
 int FUNC_2 (struct uart_opal_softc*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_0)
{
 struct uart_opal_softc *VAR_1;
 char VAR_2[8];
 int VAR_3;

 VAR_1 = FUNC_0(VAR_0);

 while ((VAR_3 = FUNC_1(VAR_0, VAR_2, sizeof(VAR_2))) != 0)
  FUNC_2(VAR_1, VAR_2, VAR_3);
}
