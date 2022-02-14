
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fwnet_peer {struct fwnet_device* dev; } ;
struct fwnet_device {int dev_link; scalar_t__ queued_datagrams; int peer_list; struct net_device* netdev; } ;
struct fw_unit {int device; } ;


 int FUNC_0 (scalar_t__) ;
 struct fwnet_peer* FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct fwnet_device*) ;
 int FUNC_4 (struct fwnet_peer*,struct fwnet_device*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct fw_unit *VAR_1)
{
 struct fwnet_peer *VAR_2 = FUNC_1(&VAR_1->device);
 struct fwnet_device *VAR_3 = VAR_2->dev;
 struct net_device *VAR_4;
 int VAR_5;

 FUNC_7(&VAR_0);

 VAR_4 = VAR_3->netdev;

 FUNC_4(VAR_2, VAR_3);

 if (FUNC_6(&VAR_3->peer_list)) {
  FUNC_10(VAR_4);

  FUNC_3(VAR_3);

  for (VAR_5 = 0; VAR_3->queued_datagrams && VAR_5 < 5; VAR_5++)
   FUNC_9(1);
  FUNC_0(VAR_3->queued_datagrams);
  FUNC_5(&VAR_3->dev_link);

  FUNC_2(VAR_4);
 }

 FUNC_8(&VAR_0);
}
