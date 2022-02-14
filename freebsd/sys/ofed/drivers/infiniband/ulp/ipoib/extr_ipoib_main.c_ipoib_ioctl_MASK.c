
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct ipoib_dev_priv {scalar_t__ gone; int restart_task; } ;
struct TYPE_4__ {int * sa_data; } ;
struct ifreq {int ifr_mtu; TYPE_2__ ifr_addr; } ;
struct ifnet {int if_flags; int if_drv_flags; struct ipoib_dev_priv* if_softc; int (* if_init ) (struct ipoib_dev_priv*) ;} ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_4 ;






 int FUNC_1 (struct ifnet*,struct ifaddr*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,int ,int) ;
 int FUNC_4 (struct ipoib_dev_priv*) ;
 int FUNC_5 (struct ipoib_dev_priv*) ;
 int VAR_5 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct ipoib_dev_priv*) ;
 int FUNC_8 (struct ipoib_dev_priv*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_6, u_long VAR_7, caddr_t VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = VAR_6->if_softc;
 struct ifaddr *VAR_10 = (struct ifaddr *) VAR_8;
 struct ifreq *VAR_11 = (struct ifreq *) VAR_8;
 int VAR_12 = 0;


 if (VAR_9 == ((void*)0) || VAR_9->gone != 0)
  return (VAR_1);

 switch (VAR_7) {
 case 129:
  if (VAR_6->if_flags & VAR_3) {
   if ((VAR_6->if_drv_flags & VAR_2) == 0)
    VAR_12 = -FUNC_4(VAR_9);
  } else
   if (VAR_6->if_drv_flags & VAR_2)
    FUNC_5(VAR_9);
  break;
 case 133:
 case 132:
  if (VAR_6->if_drv_flags & VAR_2)
   FUNC_6(VAR_5, &VAR_9->restart_task);
  break;
 case 130:
  VAR_6->if_flags |= VAR_3;

  switch (VAR_10->ifa_addr->sa_family) {






  default:
   VAR_6->if_init(VAR_6->if_softc);
   break;
  }
  break;

 case 131:
   FUNC_2(FUNC_0(VAR_6), &VAR_11->ifr_addr.sa_data[0],
                            VAR_4);
  break;

 case 128:



  VAR_12 = -FUNC_3(VAR_9, VAR_11->ifr_mtu, 0);
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }
 return (VAR_12);
}
