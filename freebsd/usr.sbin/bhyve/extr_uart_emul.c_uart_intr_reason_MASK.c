
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int lsr; int ier; int msr; scalar_t__ thre_int_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct uart_softc*) ;

__attribute__((used)) static int
FUNC_1(struct uart_softc *VAR_11)
{

 if ((VAR_11->lsr & VAR_9) != 0 && (VAR_11->ier & VAR_1) != 0)
  return (VAR_6);
 else if (FUNC_0(VAR_11) > 0 && (VAR_11->ier & VAR_2) != 0)
  return (VAR_7);
 else if (VAR_11->thre_int_pending && (VAR_11->ier & VAR_3) != 0)
  return (VAR_8);
 else if ((VAR_11->msr & VAR_10) != 0 && (VAR_11->ier & VAR_0) != 0)
  return (VAR_4);
 else
  return (VAR_5);
}
