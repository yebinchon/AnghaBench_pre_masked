
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int dummy; } ;
struct ipoib_mcast {int list; int rb_node; int flags; } ;
struct ipoib_dev_priv {int multicast_tree; int dev; } ;


 int VAR_0 ;
 struct ipoib_mcast* FUNC_0 (int ,int*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct ipoib_dev_priv *VAR_1, u8 *VAR_2,
    struct list_head *VAR_3)
{

 if (*VAR_2 == 0xff) {
  struct ipoib_mcast *VAR_4 = FUNC_0(VAR_1->dev, VAR_2);

  if (VAR_4 && FUNC_4(VAR_0, &VAR_4->flags)) {
   FUNC_2(&VAR_4->list);
   FUNC_3(&VAR_4->rb_node, &VAR_1->multicast_tree);
   FUNC_1(&VAR_4->list, VAR_3);
  }
 }
}
