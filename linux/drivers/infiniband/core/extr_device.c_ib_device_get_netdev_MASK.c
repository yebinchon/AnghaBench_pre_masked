
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ reg_state; } ;
struct ib_port_data {int netdev_lock; int netdev; } ;
struct TYPE_2__ {struct net_device* (* get_netdev ) (struct ib_device*,unsigned int) ;} ;
struct ib_device {TYPE_1__ ops; struct ib_port_data* port_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 struct net_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ib_device*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct net_device* FUNC_7 (struct ib_device*,unsigned int) ;

struct net_device *FUNC_8(struct ib_device *VAR_1,
     unsigned int VAR_2)
{
 struct ib_port_data *VAR_3;
 struct net_device *VAR_4;

 if (!FUNC_4(VAR_1, VAR_2))
  return ((void*)0);

 VAR_3 = &VAR_1->port_data[VAR_2];





 if (VAR_1->ops.get_netdev)
  VAR_4 = VAR_1->ops.get_netdev(VAR_1, VAR_2);
 else {
  FUNC_5(&VAR_3->netdev_lock);
  VAR_4 = FUNC_3(
   VAR_3->netdev, FUNC_2(&VAR_3->netdev_lock));
  if (VAR_4)
   FUNC_0(VAR_4);
  FUNC_6(&VAR_3->netdev_lock);
 }





 if (VAR_4 && VAR_4->reg_state != VAR_0) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
