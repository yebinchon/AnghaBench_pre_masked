
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_hash_dev {int clk; int dev; scalar_t__ dma_lch; int list; int engine; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 struct stm32_hash_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_10 (struct stm32_hash_dev*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct stm32_hash_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_6(VAR_3->dev);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_10(VAR_3);

 FUNC_1(VAR_3->engine);

 FUNC_8(&VAR_1.lock);
 FUNC_3(&VAR_3->list);
 FUNC_9(&VAR_1.lock);

 if (VAR_3->dma_lch)
  FUNC_2(VAR_3->dma_lch);

 FUNC_5(VAR_3->dev);
 FUNC_7(VAR_3->dev);

 FUNC_0(VAR_3->clk);

 return 0;
}
