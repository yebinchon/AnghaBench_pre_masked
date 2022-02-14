
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct lima_device {scalar_t__ id; int empty_vm; int dlbu_dma; scalar_t__ dlbu_cpu; int dev; int clk_gpu; int clk_bus; int iomem; int pdev; int va_end; scalar_t__ va_start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,struct resource*) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct lima_device*) ;
 int FUNC_11 (struct lima_device*) ;
 int FUNC_12 (struct lima_device*) ;
 int FUNC_13 (struct lima_device*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (struct lima_device*) ;
 int FUNC_15 (struct lima_device*,int) ;
 int FUNC_16 (struct lima_device*) ;
 int VAR_7 ;
 int FUNC_17 (struct lima_device*) ;
 int FUNC_18 (struct lima_device*) ;
 int FUNC_19 (struct lima_device*) ;
 int FUNC_20 (int ) ;
 struct resource* FUNC_21 (int ,int ,int ) ;

int FUNC_22(struct lima_device *VAR_8)
{
 int VAR_9, VAR_10;
 struct resource *VAR_11;

 FUNC_9(VAR_8->dev, FUNC_0(32));

 VAR_9 = FUNC_11(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_18(VAR_8);
 if (VAR_9)
  goto err_out0;

 VAR_8->empty_vm = FUNC_19(VAR_8);
 if (!VAR_8->empty_vm) {
  VAR_9 = -VAR_0;
  goto err_out1;
 }

 VAR_8->va_start = 0;
 if (VAR_8->id == VAR_6) {
  VAR_8->va_end = VAR_5;
  VAR_8->dlbu_cpu = FUNC_7(
   VAR_8->dev, VAR_3,
   &VAR_8->dlbu_dma, VAR_1);
  if (!VAR_8->dlbu_cpu) {
   VAR_9 = -VAR_0;
   goto err_out2;
  }
 } else
  VAR_8->va_end = VAR_4;

 VAR_11 = FUNC_21(VAR_8->pdev, VAR_2, 0);
 VAR_8->iomem = FUNC_6(VAR_8->dev, VAR_11);
 if (FUNC_1(VAR_8->iomem)) {
  FUNC_4(VAR_8->dev, "fail to ioremap iomem\n");
  VAR_9 = FUNC_2(VAR_8->iomem);
  goto err_out3;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = FUNC_15(VAR_8, VAR_10);
  if (VAR_9)
   goto err_out4;
 }

 VAR_9 = FUNC_14(VAR_8);
 if (VAR_9)
  goto err_out4;

 VAR_9 = FUNC_16(VAR_8);
 if (VAR_9)
  goto err_out5;

 FUNC_5(VAR_8->dev, "bus rate = %lu\n", FUNC_3(VAR_8->clk_bus));
 FUNC_5(VAR_8->dev, "mod rate = %lu", FUNC_3(VAR_8->clk_gpu));

 return 0;

err_out5:
 FUNC_12(VAR_8);
err_out4:
 while (--VAR_10 >= 0)
  FUNC_13(VAR_8, VAR_10);
err_out3:
 if (VAR_8->dlbu_cpu)
  FUNC_8(VAR_8->dev, VAR_3,
       VAR_8->dlbu_cpu, VAR_8->dlbu_dma);
err_out2:
 FUNC_20(VAR_8->empty_vm);
err_out1:
 FUNC_17(VAR_8);
err_out0:
 FUNC_10(VAR_8);
 return VAR_9;
}
