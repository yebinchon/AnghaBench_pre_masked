
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {int state; TYPE_1__* pdev; int queue; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static int FUNC_2(struct skd_device *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->state) {
 case 137:
 case 136:
  FUNC_1(&VAR_1->pdev->dev, "stopping queue\n");
  FUNC_0(VAR_1->queue);
  break;
 case 135:
 case 129:
 case 128:
 case 133:
 case 134:
 case 130:
 case 132:
 case 131:
 default:
  VAR_2 = -VAR_0;
  FUNC_1(&VAR_1->pdev->dev, "state [%d] not implemented\n",
   VAR_1->state);
 }
 return VAR_2;
}
