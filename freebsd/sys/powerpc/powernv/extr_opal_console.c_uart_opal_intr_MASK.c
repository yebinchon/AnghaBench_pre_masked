
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_opal_softc {int polltime; int callout; int * irqres; struct tty* tp; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void (*) (void*),struct uart_opal_softc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int,int ) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct uart_opal_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct uart_opal_softc *VAR_2 = VAR_1;
 struct tty *VAR_3 = VAR_2->tp;
 int VAR_4;

 FUNC_2(VAR_3);
 while ((VAR_4 = FUNC_6(VAR_2)) > 0)
  FUNC_4(VAR_3, VAR_4, 0);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);

 FUNC_1(VAR_0, ((void*)0));

 if (VAR_2->irqres == ((void*)0))
  FUNC_0(&VAR_2->callout, VAR_2->polltime, FUNC_7, VAR_2);
}
