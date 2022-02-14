
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct notifier_block {int dummy; } ;
struct net_device {int dev_addr; } ;
struct in_ifaddr {int ifa_address; TYPE_1__* ifa_dev; } ;
struct in_device {int ifa_list; } ;
struct i40iw_device {scalar_t__ init_state; TYPE_2__* ldev; scalar_t__ closing; } ;
struct i40iw_handler {struct i40iw_device device; } ;
struct TYPE_4__ {struct net_device* netdev; } ;
struct TYPE_3__ {struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 struct i40iw_handler* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40iw_device*,struct net_device*,scalar_t__*,int,int) ;
 int FUNC_3 (struct i40iw_device*,int ,scalar_t__*,int,scalar_t__) ;
 struct net_device* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct in_ifaddr* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct notifier_block *VAR_4,
    unsigned long VAR_5,
    void *VAR_6)
{
 struct in_ifaddr *VAR_7 = VAR_6;
 struct net_device *VAR_8 = VAR_7->ifa_dev->dev;
 struct net_device *VAR_9;
 struct net_device *VAR_10;
 struct i40iw_device *VAR_11;
 struct i40iw_handler *VAR_12;
 u32 VAR_13;
 u32 VAR_14 = VAR_0;

 VAR_12 = FUNC_1(VAR_8);
 if (!VAR_12)
  return VAR_3;

 VAR_11 = &VAR_12->device;
 if (VAR_11->init_state < VAR_2 || VAR_11->closing)
  return VAR_3;

 VAR_9 = VAR_11->ldev->netdev;
 VAR_10 = FUNC_4(VAR_9);
 if (VAR_9 != VAR_8)
  return VAR_3;

 if (VAR_10) {
  struct in_device *VAR_15;

  FUNC_7();
  VAR_15 = FUNC_0(VAR_10);

  VAR_13 = 0;
  if (VAR_15) {
   struct in_ifaddr *VAR_16;

   VAR_16 = FUNC_6(VAR_15->ifa_list);
   if (VAR_16)
    VAR_13 = FUNC_5(VAR_16->ifa_address);
  }

  FUNC_8();
 } else {
  VAR_13 = FUNC_5(VAR_7->ifa_address);
 }
 switch (VAR_5) {
 case 129:
  VAR_14 = VAR_1;

 case 128:

 case 130:


  if (!VAR_13)
   break;

  FUNC_3(VAR_11,
           VAR_9->dev_addr,
           &VAR_13,
           1,
           VAR_14);
  FUNC_2(VAR_11, VAR_9, &VAR_13, 1,
    (VAR_14 == VAR_0) ? 1 : 0);
  break;
 default:
  break;
 }
 return VAR_3;
}
