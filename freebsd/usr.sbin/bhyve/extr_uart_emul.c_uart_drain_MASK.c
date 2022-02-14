
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rfd; } ;
struct uart_softc {int mcr; int mtx; TYPE_1__ tty; } ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct uart_softc*) ;

__attribute__((used)) static void
FUNC_7(int VAR_2, enum ev_type VAR_3, void *VAR_4)
{
 struct uart_softc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4;

 FUNC_0(VAR_2 == VAR_5->tty.rfd);
 FUNC_0(VAR_3 == VAR_0);






 FUNC_1(&VAR_5->mtx);

 if ((VAR_5->mcr & VAR_1) != 0) {
  (void) FUNC_5(&VAR_5->tty);
 } else {
  while (FUNC_3(VAR_5) &&
         ((VAR_6 = FUNC_5(&VAR_5->tty)) != -1)) {
   FUNC_4(VAR_5, VAR_6);
  }
  FUNC_6(VAR_5);
 }

 FUNC_2(&VAR_5->mtx);
}
