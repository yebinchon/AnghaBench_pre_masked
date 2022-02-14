
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int opened; } ;
struct uart_softc {int lcr; int dll; int dlh; int mcr; int thre_int_pending; int ier; int fcr; int msr; int scr; int mtx; TYPE_1__ tty; int lsr; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uart_softc*,int) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct uart_softc*) ;

void
FUNC_7(struct uart_softc *VAR_20, int VAR_21, uint8_t VAR_22)
{
 int VAR_23;
 uint8_t VAR_24;

 FUNC_1(&VAR_20->mtx);




 if ((VAR_20->lcr & VAR_6) != 0) {
  if (VAR_21 == VAR_19) {
   VAR_20->dll = VAR_22;
   goto done;
  }

  if (VAR_21 == VAR_18) {
   VAR_20->dlh = VAR_22;
   goto done;
  }
 }

        switch (VAR_21) {
 case 135:
  if (VAR_20->mcr & VAR_8) {
   if (FUNC_3(VAR_20, VAR_22) != 0)
    VAR_20->lsr |= VAR_7;
  } else if (VAR_20->tty.opened) {
   FUNC_5(&VAR_20->tty, VAR_22);
  }
  VAR_20->thre_int_pending = 1;
  break;
 case 133:

  if ((VAR_20->ier & VAR_5) == 0 && (VAR_22 & VAR_5) != 0)
   VAR_20->thre_int_pending = 1;




  VAR_20->ier = VAR_22 & 0x0F;
  break;
 case 134:




  if ((VAR_20->fcr & VAR_1) ^ (VAR_22 & VAR_1)) {
   VAR_23 = (VAR_22 & VAR_1) ? VAR_4 : 1;
   FUNC_4(VAR_20, VAR_23);
  }





  if ((VAR_22 & VAR_1) == 0) {
   VAR_20->fcr = 0;
  } else {
   if ((VAR_22 & VAR_2) != 0)
    FUNC_4(VAR_20, VAR_4);

   VAR_20->fcr = VAR_22 &
     (VAR_1 | VAR_0 | VAR_3);
  }
  break;
 case 132:
  VAR_20->lcr = VAR_22;
  break;
 case 130:

  VAR_20->mcr = VAR_22 & 0x1F;
  VAR_24 = FUNC_0(VAR_20->mcr);






  if ((VAR_24 & VAR_9) ^ (VAR_20->msr & VAR_9))
   VAR_20->msr |= VAR_11;
  if ((VAR_24 & VAR_15) ^ (VAR_20->msr & VAR_15))
   VAR_20->msr |= VAR_13;
  if ((VAR_24 & VAR_10) ^ (VAR_20->msr & VAR_10))
   VAR_20->msr |= VAR_12;
  if ((VAR_20->msr & VAR_16) != 0 && (VAR_24 & VAR_16) == 0)
   VAR_20->msr |= VAR_17;





  VAR_20->msr &= VAR_14;
  VAR_20->msr |= VAR_24;
  break;
 case 131:




  break;
 case 129:



  break;
 case 128:
  VAR_20->scr = VAR_22;
  break;
 default:
  break;
 }

done:
 FUNC_6(VAR_20);
 FUNC_2(&VAR_20->mtx);
}
