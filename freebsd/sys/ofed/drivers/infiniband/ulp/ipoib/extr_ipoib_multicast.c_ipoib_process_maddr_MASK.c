
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int uint8_t ;
typedef int u_int ;
struct sockaddr_dl {int sdl_alen; } ;
struct ipoib_mcast_ctx {int remove_list; struct ipoib_dev_priv* priv; } ;
struct TYPE_4__ {union ib_gid mgid; } ;
struct ipoib_mcast {int flags; int list; int rb_node; TYPE_2__ mcmember; } ;
struct ipoib_dev_priv {int multicast_list; int multicast_tree; int port; int ca; int flags; TYPE_1__* dev; } ;
struct ib_sa_mcmember_rec {int dummy; } ;
struct TYPE_3__ {int if_broadcastaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_mcast*) ;
 struct ipoib_mcast* FUNC_2 (struct ipoib_dev_priv*,union ib_gid*) ;
 int FUNC_3 (int ,int ,union ib_gid*,struct ib_sa_mcmember_rec*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int ,char*) ;
 int FUNC_5 (int *,int,int ) ;
 struct ipoib_mcast* FUNC_6 (struct ipoib_dev_priv*,int ) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static u_int
FUNC_14(void *VAR_3, struct sockaddr_dl *VAR_4, u_int VAR_5)
{
 struct ipoib_mcast_ctx *VAR_6 = VAR_3;
 struct ipoib_dev_priv *VAR_7 = VAR_6->priv;
 struct ipoib_mcast *VAR_8;
 struct ib_sa_mcmember_rec VAR_9;
 union ib_gid VAR_10;
 uint8_t *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_4);
 VAR_12 = VAR_4->sdl_alen;
 if (!FUNC_5(VAR_11, VAR_12,
     VAR_7->dev->if_broadcastaddr))
  return (0);

 FUNC_10(VAR_10.raw, VAR_11 + 4, sizeof VAR_10);

 VAR_8 = FUNC_2(VAR_7, &VAR_10);
 if (!VAR_8 || FUNC_13(VAR_2, &VAR_8->flags)) {
  struct ipoib_mcast *VAR_13;


  if (FUNC_13(VAR_0, &VAR_7->flags) &&
      !FUNC_3(VAR_7->ca, VAR_7->port, &VAR_10, &VAR_9)) {
   FUNC_4(VAR_7, "ignoring multicast entry for mgid %16D\n",
     VAR_10.raw, ":");
   return (0);
  }


  FUNC_4(VAR_7, "adding multicast entry for mgid %16D\n",
    VAR_10.raw, ":");

  VAR_13 = FUNC_6(VAR_7, 0);
  if (!VAR_13) {
   FUNC_7(VAR_7, "unable to allocate memory for multicast structure\n");
   return (0);
  }

  FUNC_12(VAR_1, &VAR_13->flags);

  VAR_13->mcmember.mgid = VAR_10;

  if (VAR_8) {

   FUNC_9(&VAR_8->list, &VAR_6->remove_list);

   FUNC_11(&VAR_8->rb_node,
     &VAR_13->rb_node,
     &VAR_7->multicast_tree);
  } else
   FUNC_1(VAR_7, VAR_13);

  FUNC_8(&VAR_13->list, &VAR_7->multicast_list);
 }

 if (VAR_8)
  FUNC_12(VAR_1, &VAR_8->flags);

 return (1);
}
