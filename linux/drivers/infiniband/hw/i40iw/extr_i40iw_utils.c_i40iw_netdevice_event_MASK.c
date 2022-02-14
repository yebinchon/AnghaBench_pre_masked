
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct i40iw_device {scalar_t__ init_state; int iw_status; TYPE_1__* ldev; scalar_t__ closing; } ;
struct i40iw_handler {struct i40iw_device device; } ;
struct TYPE_2__ {struct net_device* netdev; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct i40iw_handler* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct i40iw_device*) ;
 struct net_device* FUNC_2 (void*) ;

int FUNC_3(struct notifier_block *VAR_2,
     unsigned long VAR_3,
     void *VAR_4)
{
 struct net_device *VAR_5;
 struct net_device *VAR_6;
 struct i40iw_device *VAR_7;
 struct i40iw_handler *VAR_8;

 VAR_5 = FUNC_2(VAR_4);

 VAR_8 = FUNC_0(VAR_5);
 if (!VAR_8)
  return VAR_0;

 VAR_7 = &VAR_8->device;
 if (VAR_7->init_state < VAR_1 || VAR_7->closing)
  return VAR_0;

 VAR_6 = VAR_7->ldev->netdev;
 if (VAR_6 != VAR_5)
  return VAR_0;

 VAR_7->iw_status = 1;

 switch (VAR_3) {
 case 129:
  VAR_7->iw_status = 0;

 case 128:
  FUNC_1(VAR_7);
  break;
 default:
  break;
 }
 return VAR_0;
}
