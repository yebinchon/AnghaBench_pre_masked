
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nitrox_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct nitrox_device*) ;
 int FUNC_2 (struct nitrox_device*) ;
 int FUNC_3 (struct nitrox_device*) ;
 int FUNC_4 (struct nitrox_device*) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 (struct nitrox_device*) ;
 int FUNC_7 (struct nitrox_device*) ;
 int FUNC_8 (struct nitrox_device*) ;
 int FUNC_9 (struct nitrox_device*) ;
 int FUNC_10 (struct nitrox_device*) ;
 int FUNC_11 (struct nitrox_device*) ;
 int FUNC_12 (struct nitrox_device*) ;
 int FUNC_13 (struct nitrox_device*) ;

__attribute__((used)) static int FUNC_14(struct nitrox_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev, "BIST check failed\n");
  return VAR_1;
 }

 FUNC_12(VAR_0);

 FUNC_8(VAR_0);
 FUNC_2(VAR_0);
 FUNC_9(VAR_0);
 FUNC_10(VAR_0);
 FUNC_5(VAR_0);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 FUNC_7(VAR_0);
 FUNC_11(VAR_0);


 VAR_1 = FUNC_13(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_6(VAR_0);

 return 0;
}
