
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_cdev_receive_phy_packets {int closure; } ;
union ioctl_arg {struct fw_cdev_receive_phy_packets receive_phy_packets; } ;
struct fw_card {int lock; int phy_receiver_list; } ;
struct client {int phy_receiver_closure; int phy_receiver_link; TYPE_1__* device; } ;
struct TYPE_2__ {int is_local; struct fw_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct client *VAR_1, union ioctl_arg *VAR_2)
{
 struct fw_cdev_receive_phy_packets *VAR_3 = &VAR_2->receive_phy_packets;
 struct fw_card *VAR_4 = VAR_1->device->card;


 if (!VAR_1->device->is_local)
  return -VAR_0;

 FUNC_1(&VAR_4->lock);

 FUNC_0(&VAR_1->phy_receiver_link, &VAR_4->phy_receiver_list);
 VAR_1->phy_receiver_closure = VAR_3->closure;

 FUNC_2(&VAR_4->lock);

 return 0;
}
