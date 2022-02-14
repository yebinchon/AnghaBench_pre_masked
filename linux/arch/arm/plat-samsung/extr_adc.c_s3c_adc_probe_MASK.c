
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct adc_device {unsigned int prescale; scalar_t__ irq; int regs; int clk; int vdd; struct platform_device* pdev; int lock; } ;
typedef enum s3c_cpu_type { ____Placeholder_s3c_cpu_type } s3c_cpu_type ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct adc_device* VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,struct resource*) ;
 struct adc_device* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,scalar_t__,int ,int ,int ,struct adc_device*) ;
 TYPE_1__* FUNC_12 (struct platform_device*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct adc_device*) ;
 int FUNC_16 (int ) ;
 int VAR_12 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct adc_device *VAR_15;
 struct resource *VAR_16;
 enum s3c_cpu_type VAR_17 = FUNC_12(VAR_13)->driver_data;
 int VAR_18;
 unsigned VAR_19;

 VAR_15 = FUNC_9(VAR_14, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_17(&VAR_15->lock);

 VAR_15->pdev = VAR_13;
 VAR_15->prescale = FUNC_2(49);

 VAR_15->vdd = FUNC_10(VAR_14, "vdd");
 if (FUNC_0(VAR_15->vdd)) {
  FUNC_4(VAR_14, "operating without regulator \"vdd\" .\n");
  return FUNC_1(VAR_15->vdd);
 }

 VAR_15->irq = FUNC_13(VAR_13, 1);
 if (VAR_15->irq <= 0) {
  FUNC_4(VAR_14, "failed to get adc irq\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_11(VAR_14, VAR_15->irq, VAR_12, 0, FUNC_6(VAR_14),
    VAR_15);
 if (VAR_18 < 0) {
  FUNC_4(VAR_14, "failed to attach adc irq\n");
  return VAR_18;
 }

 VAR_15->clk = FUNC_7(VAR_14, "adc");
 if (FUNC_0(VAR_15->clk)) {
  FUNC_4(VAR_14, "failed to get adc clock\n");
  return FUNC_1(VAR_15->clk);
 }

 VAR_16 = FUNC_14(VAR_13, VAR_3, 0);
 VAR_15->regs = FUNC_8(VAR_14, VAR_16);
 if (FUNC_0(VAR_15->regs))
  return FUNC_1(VAR_15->regs);

 VAR_18 = FUNC_16(VAR_15->vdd);
 if (VAR_18)
  return VAR_18;

 FUNC_3(VAR_15->clk);

 VAR_19 = VAR_15->prescale | VAR_5;


 if (VAR_17 == VAR_8)
  VAR_19 |= VAR_6;
 if (VAR_17 == VAR_9 || VAR_17 == VAR_10)
  VAR_19 |= VAR_7;

 FUNC_18(VAR_19, VAR_15->regs + VAR_4);

 FUNC_5(VAR_14, "attached adc driver\n");

 FUNC_15(VAR_13, VAR_15);
 VAR_11 = VAR_15;

 return 0;
}
