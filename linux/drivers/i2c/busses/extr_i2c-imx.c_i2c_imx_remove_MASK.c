
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int dev; } ;
struct imx_i2c_struct {int clk; int clk_change_nb; scalar_t__ dma; TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct imx_i2c_struct*) ;
 int FUNC_5 (int ,struct imx_i2c_struct*,int ) ;
 struct imx_i2c_struct* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct imx_i2c_struct *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_8(&VAR_4->dev);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_2(&VAR_5->adapter.dev, "adapter removed\n");
 FUNC_3(&VAR_5->adapter);

 if (VAR_5->dma)
  FUNC_4(VAR_5);


 FUNC_5(0, VAR_5, VAR_2);
 FUNC_5(0, VAR_5, VAR_3);
 FUNC_5(0, VAR_5, VAR_0);
 FUNC_5(0, VAR_5, VAR_1);

 FUNC_1(VAR_5->clk, &VAR_5->clk_change_nb);
 FUNC_0(VAR_5->clk);

 FUNC_9(&VAR_4->dev);
 FUNC_7(&VAR_4->dev);

 return 0;
}
