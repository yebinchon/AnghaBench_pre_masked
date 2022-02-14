
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_phyp_softc {int polltime; int callout; int * irqres; struct tty* tp; } ;
struct tty {int dummy; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct uart_phyp_softc*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,unsigned char,int ) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct uart_phyp_softc*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0)
{
 struct uart_phyp_softc *VAR_1 = VAR_0;
 struct tty *VAR_2 = VAR_1->tp;
 unsigned char VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);
 while ((VAR_4 = FUNC_5(VAR_1, &VAR_3, 1)) > 0)
  FUNC_3(VAR_2, VAR_3, 0);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);

 if (VAR_1->irqres == ((void*)0))
  FUNC_0(&VAR_1->callout, VAR_1->polltime, FUNC_6, VAR_1);
}
