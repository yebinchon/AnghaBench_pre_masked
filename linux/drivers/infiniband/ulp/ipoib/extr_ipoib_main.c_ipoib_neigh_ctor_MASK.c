
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ipoib_neigh {int refcnt; int list; int queue; int daddr; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ipoib_neigh*,int *) ;
 struct ipoib_neigh* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ipoib_neigh *FUNC_6(u8 *VAR_1,
          struct net_device *VAR_2)
{
 struct ipoib_neigh *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dev = VAR_2;
 FUNC_4(&VAR_3->daddr, VAR_1, sizeof(VAR_3->daddr));
 FUNC_5(&VAR_3->queue);
 FUNC_0(&VAR_3->list);
 FUNC_2(VAR_3, ((void*)0));

 FUNC_1(&VAR_3->refcnt, 1);

 return VAR_3;
}
