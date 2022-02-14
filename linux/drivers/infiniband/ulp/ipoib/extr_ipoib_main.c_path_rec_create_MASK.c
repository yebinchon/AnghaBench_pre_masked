
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_path {int neigh_list; int queue; } ;
struct ipoib_dev_priv {int broadcast; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_path*,void*) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 struct ipoib_path* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct ipoib_path *FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_2(VAR_1);
 struct ipoib_path *VAR_4;

 if (!VAR_3->broadcast)
  return ((void*)0);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_4->queue);

 FUNC_0(&VAR_4->neigh_list);

 FUNC_1(VAR_3, VAR_4, VAR_2);

 return VAR_4;
}
