
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ipoib_dev_priv {int lock; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ifnet*,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ipoib_dev_priv*,struct mbuf*) ;

void
FUNC_5(struct ifnet *VAR_1, struct ipoib_dev_priv *VAR_2)
{
 struct mbuf *VAR_3;

 FUNC_3(&VAR_2->lock);

 while (!FUNC_1(&VAR_1->if_snd) &&
     (VAR_1->if_drv_flags & VAR_0) == 0) {
  FUNC_0(&VAR_1->if_snd, VAR_3);
  if (VAR_3 == ((void*)0))
   break;
  FUNC_2(VAR_1, VAR_3);
  FUNC_4(VAR_2, VAR_3);
 }
}
