
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {int nud_state; int ha; scalar_t__ primary_key; scalar_t__ dev; } ;
struct i40iw_device {int closing; int init_state; } ;
struct i40iw_handler {struct i40iw_device device; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 struct i40iw_handler* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40iw_device*,int ,int *,int,int ) ;

int FUNC_3(struct notifier_block *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 struct neighbour *VAR_8 = VAR_7;
 struct i40iw_device *VAR_9;
 struct i40iw_handler *VAR_10;
 __be32 *VAR_11;
 u32 VAR_12[4];

 switch (VAR_6) {
 case 128:
  VAR_10 = FUNC_1((struct net_device *)VAR_8->dev);
  if (!VAR_10)
   return VAR_3;
  VAR_9 = &VAR_10->device;
  if (VAR_9->init_state < VAR_2 || VAR_9->closing)
   return VAR_3;
  VAR_11 = (__be32 *)VAR_8->primary_key;
  FUNC_0(VAR_12, VAR_11);
  if (VAR_8->nud_state & VAR_4) {
   FUNC_2(VAR_9,
            VAR_8->ha,
            VAR_12,
            0,
            VAR_0);

  } else {
   FUNC_2(VAR_9,
            VAR_8->ha,
            VAR_12,
            0,
            VAR_1);
  }
  break;
 default:
  break;
 }
 return VAR_3;
}
