
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int * path_dentry; int * mcg_dentry; } ;


 int FUNC_0 (int *) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->mcg_dentry);
 FUNC_0(VAR_1->path_dentry);
 VAR_1->mcg_dentry = VAR_1->path_dentry = ((void*)0);
}
