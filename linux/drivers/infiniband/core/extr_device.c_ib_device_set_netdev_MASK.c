
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ib_port_data {int netdev_lock; int netdev; } ;
struct ib_device {struct ib_port_data* port_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_port_data*) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct net_device*) ;
 struct net_device* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ib_device*,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct ib_device *VAR_1, struct net_device *VAR_2,
    unsigned int VAR_3)
{
 struct net_device *VAR_4;
 struct ib_port_data *VAR_5;
 unsigned long VAR_6;
 int VAR_7;





 VAR_7 = FUNC_1(VAR_1);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_7(VAR_1, VAR_3))
  return -VAR_0;

 VAR_5 = &VAR_1->port_data[VAR_3];
 FUNC_8(&VAR_5->netdev_lock, VAR_6);
 VAR_4 = FUNC_6(
  VAR_5->netdev, FUNC_4(&VAR_5->netdev_lock));
 if (VAR_4 == VAR_2) {
  FUNC_9(&VAR_5->netdev_lock, VAR_6);
  return 0;
 }

 if (VAR_2)
  FUNC_2(VAR_2);
 FUNC_5(VAR_5->netdev, VAR_2);
 FUNC_9(&VAR_5->netdev_lock, VAR_6);

 FUNC_0(VAR_5);
 if (VAR_4)
  FUNC_3(VAR_4);

 return 0;
}
