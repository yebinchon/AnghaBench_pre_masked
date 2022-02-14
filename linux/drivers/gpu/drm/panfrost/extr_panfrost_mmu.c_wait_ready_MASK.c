
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct panfrost_device {int dev; scalar_t__ iomem; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct panfrost_device *VAR_1, u32 VAR_2)
{
 int VAR_3;
 u32 VAR_4;



 VAR_3 = FUNC_2(VAR_1->iomem + FUNC_0(VAR_2),
  VAR_4, !(VAR_4 & VAR_0), 10, 1000);

 if (VAR_3)
  FUNC_1(VAR_1->dev, "AS_ACTIVE bit stuck\n");

 return VAR_3;
}
