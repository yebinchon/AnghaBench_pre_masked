
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_softc {int lcr; int dll; int dlh; int ier; int fcr; int thre_int_pending; int mcr; int lsr; int msr; int scr; int mtx; } ;


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







 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*) ;
 int FUNC_5 (struct uart_softc*) ;

uint8_t
FUNC_6(struct uart_softc *VAR_11, int VAR_12)
{
 uint8_t VAR_13, VAR_14, VAR_15;

 FUNC_0(&VAR_11->mtx);




 if ((VAR_11->lcr & VAR_3) != 0) {
  if (VAR_12 == VAR_10) {
   VAR_15 = VAR_11->dll;
   goto done;
  }

  if (VAR_12 == VAR_9) {
   VAR_15 = VAR_11->dlh;
   goto done;
  }
 }

 switch (VAR_12) {
 case 135:
  VAR_15 = FUNC_2(VAR_11);
  break;
 case 134:
  VAR_15 = VAR_11->ier;
  break;
 case 133:
  VAR_13 = (VAR_11->fcr & VAR_0) ? VAR_1 : 0;

  VAR_14 = FUNC_4(VAR_11);




  if (VAR_14 == VAR_2)
   VAR_11->thre_int_pending = 0;

  VAR_13 |= VAR_14;

  VAR_15 = VAR_13;
  break;
 case 132:
  VAR_15 = VAR_11->lcr;
  break;
 case 130:
  VAR_15 = VAR_11->mcr;
  break;
 case 131:

  VAR_11->lsr |= VAR_6 | VAR_7;


  if (FUNC_3(VAR_11) > 0)
   VAR_11->lsr |= VAR_5;
  else
   VAR_11->lsr &= ~VAR_5;

  VAR_15 = VAR_11->lsr;


  VAR_11->lsr &= ~VAR_4;
  break;
 case 129:



  VAR_15 = VAR_11->msr;
  VAR_11->msr &= ~VAR_8;
  break;
 case 128:
  VAR_15 = VAR_11->scr;
  break;
 default:
  VAR_15 = 0xFF;
  break;
 }

done:
 FUNC_5(VAR_11);
 FUNC_1(&VAR_11->mtx);

 return (VAR_15);
}
