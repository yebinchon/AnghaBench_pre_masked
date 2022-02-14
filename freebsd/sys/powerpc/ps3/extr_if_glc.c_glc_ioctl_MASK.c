
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct glc_softc* if_softc; } ;
struct glc_softc {int sc_ifpflags; int sc_media; int sc_mtx; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct ifnet*,int,scalar_t__) ;
 int FUNC_1 (struct glc_softc*) ;
 int FUNC_2 (struct glc_softc*) ;
 int FUNC_3 (struct glc_softc*) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct glc_softc *VAR_7 = VAR_4->if_softc;
 struct ifreq *VAR_8 = (struct ifreq *)VAR_6;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 129:
                FUNC_5(&VAR_7->sc_mtx);
  if ((VAR_4->if_flags & VAR_3) != 0) {
   if ((VAR_4->if_drv_flags & VAR_1) != 0 &&
      ((VAR_4->if_flags ^ VAR_7->sc_ifpflags) &
       (VAR_0 | VAR_2)) != 0)
    FUNC_2(VAR_7);
   else
    FUNC_1(VAR_7);
  }
  else if ((VAR_4->if_drv_flags & VAR_1) != 0)
   FUNC_3(VAR_7);
  VAR_7->sc_ifpflags = VAR_4->if_flags;
  FUNC_6(&VAR_7->sc_mtx);
  break;
 case 132:
 case 131:
                FUNC_5(&VAR_7->sc_mtx);
  FUNC_2(VAR_7);
                FUNC_6(&VAR_7->sc_mtx);
  break;
 case 130:
 case 128:
  VAR_9 = FUNC_4(VAR_4, VAR_8, &VAR_7->sc_media, VAR_5);
  break;
 default:
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
  break;
 }

 return (VAR_9);
}
