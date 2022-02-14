
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int * algo; } ;
struct at91_twi_dev {TYPE_1__ adapter; int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,struct at91_twi_dev*) ;

int FUNC_3(struct platform_device *VAR_2,
    u32 VAR_3, struct at91_twi_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_2->dev, VAR_4->irq, VAR_1,
         0, FUNC_1(VAR_4->dev), VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "Cannot get irq %d: %d\n", VAR_4->irq, VAR_5);
  return VAR_5;
 }

 VAR_4->adapter.algo = &VAR_0;

 return 0;
}
