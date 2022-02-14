
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int flush_light; struct ifnet* dev; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipoib_dev_priv*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct ifnet *VAR_3;
 struct ipoib_dev_priv *VAR_4;

 VAR_4 = VAR_2;
 VAR_3 = VAR_4->dev;
 if ((VAR_3->if_drv_flags & VAR_0) == 0)
  FUNC_0(VAR_4);
 FUNC_1(VAR_1, &VAR_4->flush_light);
}
