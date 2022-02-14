
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet_manager {int allocated; int lock; int priv_queue; struct device_queue_manager* dqm; int * pmf; } ;
struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* device_info; } ;
struct TYPE_3__ {int asic_family; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct packet_manager *VAR_6, struct device_queue_manager *VAR_7)
{
 switch (VAR_7->dev->device_info->asic_family) {
 case 138:
 case 139:

 case 141:
 case 132:
 case 140:
 case 136:
 case 135:
 case 134:
 case 128:
  VAR_6->pmf = &VAR_5;
  break;
 case 131:
 case 130:
 case 129:
 case 133:
 case 142:
  VAR_6->pmf = &VAR_4;
  break;
 case 137:
  VAR_6->pmf = &VAR_3;
  break;
 default:
  FUNC_0(1, "Unexpected ASIC family %u",
       VAR_7->dev->device_info->asic_family);
  return -VAR_0;
 }

 VAR_6->dqm = VAR_7;
 FUNC_3(&VAR_6->lock);
 VAR_6->priv_queue = FUNC_1(VAR_7->dev, VAR_2);
 if (!VAR_6->priv_queue) {
  FUNC_2(&VAR_6->lock);
  return -VAR_1;
 }
 VAR_6->allocated = 0;

 return 0;
}
