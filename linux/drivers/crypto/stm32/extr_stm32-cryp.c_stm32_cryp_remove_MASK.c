
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_cryp {int clk; int dev; int list; int engine; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 struct stm32_cryp* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct stm32_cryp *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_8(VAR_5->dev);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_3(VAR_1, FUNC_0(VAR_1));
 FUNC_4(VAR_3, FUNC_0(VAR_3));

 FUNC_2(VAR_5->engine);

 FUNC_10(&VAR_2.lock);
 FUNC_5(&VAR_5->list);
 FUNC_11(&VAR_2.lock);

 FUNC_7(VAR_5->dev);
 FUNC_9(VAR_5->dev);

 FUNC_1(VAR_5->clk);

 return 0;
}
