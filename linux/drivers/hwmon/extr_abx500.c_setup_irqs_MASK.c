
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int,int *,int ,int ,char*,struct platform_device*) ;
 int FUNC_2 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_2(VAR_1, "ABX500_TEMP_WARM");

 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->dev, "Get irq by name failed\n");
  return VAR_3;
 }

 VAR_2 = FUNC_1(&VAR_1->dev, VAR_3, ((void*)0),
  VAR_0, 0, "abx500-temp", VAR_1);
 if (VAR_2 < 0)
  FUNC_0(&VAR_1->dev, "Request threaded irq failed (%d)\n", VAR_2);

 return VAR_2;
}
