
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_crc {int clk; int list; struct device* dev; int regs; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int lock; int dev_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int *) ;
 struct stm32_crc* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct platform_device*,struct stm32_crc*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*,int ) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct stm32_crc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_9(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = VAR_6;

 VAR_7->regs = FUNC_10(VAR_5, 0);
 if (FUNC_1(VAR_7->regs)) {
  FUNC_6(VAR_6, "Cannot map CRC IO\n");
  return FUNC_2(VAR_7->regs);
 }

 VAR_7->clk = FUNC_8(VAR_6, ((void*)0));
 if (FUNC_1(VAR_7->clk)) {
  FUNC_6(VAR_6, "Could not get clock\n");
  return FUNC_2(VAR_7->clk);
 }

 VAR_8 = FUNC_4(VAR_7->clk);
 if (VAR_8) {
  FUNC_6(VAR_7->dev, "Failed to enable clock\n");
  return VAR_8;
 }

 FUNC_17(VAR_6, VAR_0);
 FUNC_18(VAR_6);

 FUNC_14(VAR_6);
 FUNC_16(VAR_6);
 FUNC_13(VAR_6);

 FUNC_12(VAR_5, VAR_7);

 FUNC_19(&VAR_4.lock);
 FUNC_11(&VAR_7->list, &VAR_4.dev_list);
 FUNC_20(&VAR_4.lock);

 VAR_8 = FUNC_5(VAR_3, FUNC_0(VAR_3));
 if (VAR_8) {
  FUNC_6(VAR_6, "Failed to register\n");
  FUNC_3(VAR_7->clk);
  return VAR_8;
 }

 FUNC_7(VAR_6, "Initialized\n");

 FUNC_15(VAR_6);

 return 0;
}
