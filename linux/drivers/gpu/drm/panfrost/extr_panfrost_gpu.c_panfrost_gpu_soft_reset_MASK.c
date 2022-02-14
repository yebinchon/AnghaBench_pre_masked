
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct panfrost_device {int dev; scalar_t__ iomem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct panfrost_device*,int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

int FUNC_3(struct panfrost_device *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_7, VAR_3, 0);
 FUNC_1(VAR_7, VAR_2, VAR_6);
 FUNC_1(VAR_7, VAR_0, VAR_1);

 VAR_8 = FUNC_2(VAR_7->iomem + VAR_4,
  VAR_9, VAR_9 & VAR_6, 100, 10000);

 if (VAR_8) {
  FUNC_0(VAR_7->dev, "gpu soft reset timed out\n");
  return VAR_8;
 }

 FUNC_1(VAR_7, VAR_2, VAR_5);
 FUNC_1(VAR_7, VAR_3, VAR_5);

 return 0;
}
