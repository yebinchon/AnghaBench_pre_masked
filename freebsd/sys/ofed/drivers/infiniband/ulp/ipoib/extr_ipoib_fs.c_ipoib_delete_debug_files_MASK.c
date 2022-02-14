
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {scalar_t__ path_dentry; scalar_t__ mcg_dentry; } ;
struct ifnet {struct ipoib_dev_priv* if_softc; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct ifnet *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = VAR_0->if_softc;

 if (VAR_1->mcg_dentry)
  FUNC_0(VAR_1->mcg_dentry);
 if (VAR_1->path_dentry)
  FUNC_0(VAR_1->path_dentry);
}
