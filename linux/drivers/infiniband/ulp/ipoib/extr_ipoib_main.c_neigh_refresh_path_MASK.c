
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ipoib_path {int query; } ;
struct ipoib_neigh {int dummy; } ;
struct ipoib_dev_priv {int lock; } ;


 struct ipoib_path* FUNC_0 (struct net_device*,int *) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ipoib_path*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ipoib_neigh *VAR_0, u8 *VAR_1,
          struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_1(VAR_2);
 struct ipoib_path *VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_3->lock, VAR_5);

 VAR_4 = FUNC_0(VAR_2, VAR_1 + 4);
 if (!VAR_4)
  goto out;
 if (!VAR_4->query)
  FUNC_2(VAR_2, VAR_4);
out:
 FUNC_4(&VAR_3->lock, VAR_5);
}
