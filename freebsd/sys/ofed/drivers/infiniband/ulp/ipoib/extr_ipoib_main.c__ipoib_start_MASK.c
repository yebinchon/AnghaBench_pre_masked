
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int lock; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,struct ipoib_dev_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_2, struct ipoib_dev_priv *VAR_3)
{

 if ((VAR_2->if_drv_flags & (VAR_1|VAR_0)) !=
     VAR_1)
  return;

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_3->lock);
}
