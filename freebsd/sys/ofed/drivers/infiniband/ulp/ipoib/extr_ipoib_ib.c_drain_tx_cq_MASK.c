
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int lock; int poll_timer; struct ifnet* dev; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipoib_dev_priv*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ipoib_dev_priv *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->dev;

 FUNC_2(&VAR_2->lock);
 while (FUNC_0(VAR_2, 1))
  ;

 if (VAR_3->if_drv_flags & VAR_0)
  FUNC_1(&VAR_2->poll_timer, VAR_1 + 1);

 FUNC_3(&VAR_2->lock);
}
