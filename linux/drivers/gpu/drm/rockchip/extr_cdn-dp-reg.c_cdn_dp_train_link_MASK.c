
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_lanes; int rate; } ;
struct cdn_dp_device {TYPE_1__ link; int dev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct cdn_dp_device*) ;
 int FUNC_3 (struct cdn_dp_device*) ;

int FUNC_4(struct cdn_dp_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Failed to start training %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Failed to get training stat %d\n", VAR_1);
  return VAR_1;
 }

 FUNC_0(VAR_0->dev, "rate:0x%x, lanes:%d\n", VAR_0->link.rate,
     VAR_0->link.num_lanes);
 return VAR_1;
}
