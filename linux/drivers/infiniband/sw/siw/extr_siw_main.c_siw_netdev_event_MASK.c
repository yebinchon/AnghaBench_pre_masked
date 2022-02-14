
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int base_dev; int state; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dev; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,unsigned long) ;
 int * FUNC_1 (struct net_device*) ;
 struct ib_device* FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 struct net_device* FUNC_5 (void*) ;
 int FUNC_6 (struct ib_device*,char*) ;
 int FUNC_7 (struct siw_device*) ;
 int FUNC_8 (struct siw_device*,int,int ) ;
 struct siw_device* FUNC_9 (struct ib_device*) ;

__attribute__((used)) static int FUNC_10(struct notifier_block *VAR_8, unsigned long VAR_9,
       void *VAR_10)
{
 struct net_device *VAR_11 = FUNC_5(VAR_10);
 struct ib_device *VAR_12;
 struct siw_device *VAR_13;

 FUNC_0(&VAR_11->dev, "siw: event %lu\n", VAR_9);

 if (FUNC_1(VAR_11) != &VAR_7)
  return VAR_5;

 VAR_12 = FUNC_2(VAR_11, VAR_6);
 if (!VAR_12)
  return VAR_5;

 VAR_13 = FUNC_9(VAR_12);

 switch (VAR_9) {
 case 128:
  VAR_13->state = VAR_3;
  FUNC_8(VAR_13, 1, VAR_1);
  break;

 case 131:
  FUNC_7(VAR_13);
  break;

 case 132:
  VAR_13->state = VAR_4;
  FUNC_8(VAR_13, 1, VAR_2);
  break;

 case 130:





  FUNC_6(VAR_12, "unexpected NETDEV_REGISTER event\n");
  break;

 case 129:
  FUNC_4(&VAR_13->base_dev);
  break;

 case 134:
  FUNC_8(VAR_13, 1, VAR_0);
  break;



 case 133:
 case 135:
  break;

 default:
  break;
 }
 FUNC_3(&VAR_13->base_dev);

 return VAR_5;
}
