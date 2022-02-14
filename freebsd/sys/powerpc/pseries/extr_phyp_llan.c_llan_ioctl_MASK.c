
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct llan_softc {int media; int io_lock; TYPE_1__* ifp; } ;
struct ifreq {int dummy; } ;
struct ifnet {struct llan_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;





 int FUNC_0 (struct ifnet*,int,scalar_t__) ;
 int FUNC_1 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_2 (struct llan_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
 int VAR_4 = 0;
 struct llan_softc *VAR_5 = VAR_1->if_softc;

 switch (VAR_2) {
 case 132:
 case 131:
  FUNC_3(&VAR_5->io_lock);
  if ((VAR_5->ifp->if_drv_flags & VAR_0) != 0)
   FUNC_2(VAR_5);
  FUNC_4(&VAR_5->io_lock);
  break;
 case 130:
 case 128:
  VAR_4 = FUNC_1(VAR_1, (struct ifreq *)VAR_3, &VAR_5->media, VAR_2);
  break;
 case 129:
 default:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 }

 return (VAR_4);
}
