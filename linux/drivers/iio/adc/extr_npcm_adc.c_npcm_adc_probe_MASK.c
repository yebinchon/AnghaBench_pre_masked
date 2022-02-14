
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct npcm_adc {int adc_sample_hz; scalar_t__ adc_clk; scalar_t__ vref; scalar_t__ regs; int wq; scalar_t__ rst_regmap; struct device* dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 scalar_t__ FUNC_8 (struct device*,int *) ;
 struct iio_dev* FUNC_9 (struct device*,int) ;
 scalar_t__ FUNC_10 (struct device*,struct resource*) ;
 scalar_t__ FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct device*,int,int ,int ,char*,struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*) ;
 struct npcm_adc* FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_18 (struct device_node*,char*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct iio_dev*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (char*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_15)
{
 int VAR_16;
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 struct resource *VAR_20;
 struct npcm_adc *VAR_21;
 struct iio_dev *VAR_22;
 struct device *VAR_23 = &VAR_15->dev;
 struct device_node *VAR_24 = VAR_15->dev.of_node;

 VAR_22 = FUNC_9(&VAR_15->dev, sizeof(*VAR_21));
 if (!VAR_22)
  return -VAR_2;
 VAR_21 = FUNC_14(VAR_22);

 VAR_21->dev = &VAR_15->dev;

 VAR_20 = FUNC_20(VAR_15, VAR_4, 0);
 VAR_21->regs = FUNC_10(&VAR_15->dev, VAR_20);
 if (FUNC_1(VAR_21->regs))
  return FUNC_2(VAR_21->regs);

 VAR_21->adc_clk = FUNC_8(&VAR_15->dev, ((void*)0));
 if (FUNC_1(VAR_21->adc_clk)) {
  FUNC_7(&VAR_15->dev, "ADC clock failed: can't read clk\n");
  return FUNC_2(VAR_21->adc_clk);
 }


 VAR_19 = FUNC_16(VAR_21->regs + VAR_5);
 VAR_18 = VAR_19 & VAR_8;
 VAR_18 = VAR_18 >> VAR_9;
 VAR_21->adc_sample_hz = FUNC_4(VAR_21->adc_clk) / ((VAR_18 + 1) * 2);

 if (FUNC_18(VAR_24, "nuvoton,npcm750-adc")) {
  VAR_21->rst_regmap = FUNC_25
   ("nuvoton,npcm750-rst");
  if (FUNC_1(VAR_21->rst_regmap)) {
   FUNC_5(&VAR_15->dev, "Failed to find nuvoton,npcm750-rst\n");
   VAR_16 = FUNC_2(VAR_21->rst_regmap);
   goto err_disable_clk;
  }
 }

 VAR_17 = FUNC_19(VAR_15, 0);
 if (VAR_17 <= 0) {
  VAR_16 = -VAR_0;
  goto err_disable_clk;
 }

 VAR_16 = FUNC_12(&VAR_15->dev, VAR_17, VAR_14, 0,
          "NPCM_ADC", VAR_22);
 if (VAR_16 < 0) {
  FUNC_5(VAR_23, "failed requesting interrupt\n");
  goto err_disable_clk;
 }

 VAR_19 = FUNC_16(VAR_21->regs + VAR_5);
 VAR_21->vref = FUNC_11(&VAR_15->dev, "vref");
 if (!FUNC_1(VAR_21->vref)) {
  VAR_16 = FUNC_24(VAR_21->vref);
  if (VAR_16) {
   FUNC_5(&VAR_15->dev, "Can't enable ADC reference voltage\n");
   goto err_disable_clk;
  }

  FUNC_17(VAR_19 & ~VAR_10,
     VAR_21->regs + VAR_5);
 } else {




  if (FUNC_2(VAR_21->vref) != -VAR_1) {
   VAR_16 = FUNC_2(VAR_21->vref);
   goto err_disable_clk;
  }


  FUNC_17(VAR_19 | VAR_10,
     VAR_21->regs + VAR_5);
 }

 FUNC_15(&VAR_21->wq);

 VAR_19 = FUNC_16(VAR_21->regs + VAR_5);
 VAR_19 |= VAR_11;


 FUNC_17(VAR_19, VAR_21->regs + VAR_5);


 FUNC_17(VAR_19 | VAR_6, VAR_21->regs + VAR_5);

 FUNC_21(VAR_15, VAR_22);
 VAR_22->name = FUNC_6(&VAR_15->dev);
 VAR_22->dev.parent = &VAR_15->dev;
 VAR_22->info = &VAR_13;
 VAR_22->modes = VAR_3;
 VAR_22->channels = VAR_12;
 VAR_22->num_channels = FUNC_0(VAR_12);

 VAR_16 = FUNC_13(VAR_22);
 if (VAR_16) {
  FUNC_5(&VAR_15->dev, "Couldn't register the device.\n");
  goto err_iio_register;
 }

 FUNC_22("NPCM ADC driver probed\n");

 return 0;

err_iio_register:
 FUNC_17(VAR_19 & ~VAR_7, VAR_21->regs + VAR_5);
 if (!FUNC_1(VAR_21->vref))
  FUNC_23(VAR_21->vref);
err_disable_clk:
 FUNC_3(VAR_21->adc_clk);

 return VAR_16;
}
