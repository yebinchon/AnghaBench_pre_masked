
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct notifier_block {int dummy; } ;
struct net_device {int dev_addr; } ;
struct TYPE_7__ {int u6_addr32; } ;
struct TYPE_8__ {TYPE_3__ in6_u; } ;
struct inet6_ifaddr {TYPE_4__ addr; TYPE_1__* idev; } ;
struct i40iw_device {scalar_t__ init_state; TYPE_2__* ldev; scalar_t__ closing; } ;
struct i40iw_handler {struct i40iw_device device; } ;
struct TYPE_6__ {struct net_device* netdev; } ;
struct TYPE_5__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 struct i40iw_handler* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40iw_device*,struct net_device*,int *,int,int) ;
 int FUNC_3 (struct i40iw_device*,int ,int *,int,int ) ;

int FUNC_4(struct notifier_block *VAR_4,
     unsigned long VAR_5,
     void *VAR_6)
{
 struct inet6_ifaddr *VAR_7 = (struct inet6_ifaddr *)VAR_6;
 struct net_device *VAR_8 = VAR_7->idev->dev;
 struct net_device *VAR_9;
 struct i40iw_device *VAR_10;
 struct i40iw_handler *VAR_11;
 u32 VAR_12[4];
 u32 VAR_13 = VAR_0;

 VAR_11 = FUNC_1(VAR_8);
 if (!VAR_11)
  return VAR_3;

 VAR_10 = &VAR_11->device;
 if (VAR_10->init_state < VAR_2 || VAR_10->closing)
  return VAR_3;

 VAR_9 = VAR_10->ldev->netdev;
 if (VAR_9 != VAR_8)
  return VAR_3;

 FUNC_0(VAR_12, VAR_7->addr.in6_u.u6_addr32);
 switch (VAR_5) {
 case 129:
  VAR_13 = VAR_1;

 case 128:

 case 130:
  FUNC_3(VAR_10,
           VAR_9->dev_addr,
           VAR_12,
           0,
           VAR_13);
  FUNC_2(VAR_10, VAR_9, VAR_12, 0,
    (VAR_13 == VAR_0) ? 1 : 0);
  break;
 default:
  break;
 }
 return VAR_3;
}
