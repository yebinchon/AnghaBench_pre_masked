
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmu_features; } ;
struct panfrost_device {int dev; TYPE_1__ features; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int ,int ,char*,struct panfrost_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct panfrost_device*) ;
 int FUNC_6 (struct panfrost_device*) ;
 int VAR_2 ;
 int FUNC_7 (struct panfrost_device*) ;
 int FUNC_8 (struct panfrost_device*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct panfrost_device *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_3);

 FUNC_4(VAR_3->dev,
  FUNC_0(FUNC_1(0xff00, VAR_3->features.mmu_features)));

 VAR_5 = FUNC_9(FUNC_10(VAR_3->dev), "gpu");
 if (VAR_5 <= 0)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3->dev, VAR_5, VAR_2,
          VAR_1, "gpu", VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->dev, "failed to request gpu irq");
  return VAR_4;
 }

 FUNC_6(VAR_3);
 FUNC_7(VAR_3);

 return 0;
}
