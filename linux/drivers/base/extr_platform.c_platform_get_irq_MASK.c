
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int) ;

int FUNC_2(struct platform_device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0 && VAR_3 != -VAR_0)
  FUNC_1(&VAR_1->dev, "IRQ index %u not found\n", VAR_2);

 return VAR_3;
}
