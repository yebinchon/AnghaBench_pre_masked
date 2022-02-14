
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {struct adf4350_platform_data* platform_data; scalar_t__ of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_10__ {TYPE_3__* parent; } ;
struct iio_dev {scalar_t__* name; int num_channels; int * channels; int modes; int * info; TYPE_1__ dev; } ;
struct clk {int dummy; } ;
struct adf4350_state {struct clk* reg; int regs_hw; int min_out_freq; scalar_t__ clkin; struct clk* clk; int chspc; struct adf4350_platform_data* pdata; struct spi_device* spi; } ;
struct adf4350_platform_data {scalar_t__* name; scalar_t__ power_up_frequency; int gpio_lock_detect; scalar_t__ clkin; int channel_spacing; } ;
struct TYPE_11__ {scalar_t__* name; int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct adf4350_platform_data* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct adf4350_state*,scalar_t__) ;
 int FUNC_3 (struct clk*) ;
 scalar_t__ FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 struct adf4350_platform_data VAR_8 ;
 int FUNC_6 (TYPE_3__*,char*,int ) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 struct clk* FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,int ,scalar_t__*) ;
 struct iio_dev* FUNC_10 (TYPE_3__*,int) ;
 struct clk* FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct iio_dev*) ;
 struct adf4350_state* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (struct clk*) ;
 int FUNC_18 (struct clk*) ;
 TYPE_2__* FUNC_19 (struct spi_device*) ;
 int FUNC_20 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_9)
{
 struct adf4350_platform_data *VAR_10;
 struct iio_dev *VAR_11;
 struct adf4350_state *VAR_12;
 struct clk *VAR_13 = ((void*)0);
 int VAR_14;

 if (VAR_9->dev.of_node) {
  VAR_10 = FUNC_1(&VAR_9->dev);
  if (VAR_10 == ((void*)0))
   return -VAR_2;
 } else {
  VAR_10 = VAR_9->dev.platform_data;
 }

 if (!VAR_10) {
  FUNC_7(&VAR_9->dev, "no platform data? using default\n");
  VAR_10 = &VAR_8;
 }

 if (!VAR_10->clkin) {
  VAR_13 = FUNC_8(&VAR_9->dev, "clkin");
  if (FUNC_0(VAR_13))
   return -VAR_4;

  VAR_14 = FUNC_5(VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_11 = FUNC_10(&VAR_9->dev, sizeof(*VAR_12));
 if (VAR_11 == ((void*)0)) {
  VAR_14 = -VAR_3;
  goto error_disable_clk;
 }

 VAR_12 = FUNC_15(VAR_11);

 VAR_12->reg = FUNC_11(&VAR_9->dev, "vcc");
 if (!FUNC_0(VAR_12->reg)) {
  VAR_14 = FUNC_18(VAR_12->reg);
  if (VAR_14)
   goto error_disable_clk;
 }

 FUNC_20(VAR_9, VAR_11);
 VAR_12->spi = VAR_9;
 VAR_12->pdata = VAR_10;

 VAR_11->dev.parent = &VAR_9->dev;
 VAR_11->name = (VAR_10->name[0] != 0) ? VAR_10->name :
  FUNC_19(VAR_9)->name;

 VAR_11->info = &VAR_7;
 VAR_11->modes = VAR_5;
 VAR_11->channels = &VAR_6;
 VAR_11->num_channels = 1;

 VAR_12->chspc = VAR_10->channel_spacing;
 if (VAR_13) {
  VAR_12->clk = VAR_13;
  VAR_12->clkin = FUNC_4(VAR_13);
 } else {
  VAR_12->clkin = VAR_10->clkin;
 }

 VAR_12->min_out_freq = FUNC_19(VAR_9)->driver_data == 4351 ?
  VAR_1 : VAR_0;

 FUNC_16(VAR_12->regs_hw, 0xFF, sizeof(VAR_12->regs_hw));

 if (FUNC_13(VAR_10->gpio_lock_detect)) {
  VAR_14 = FUNC_9(&VAR_9->dev, VAR_10->gpio_lock_detect,
     VAR_11->name);
  if (VAR_14) {
   FUNC_6(&VAR_9->dev, "fail to request lock detect GPIO-%d",
    VAR_10->gpio_lock_detect);
   goto error_disable_reg;
  }
  FUNC_12(VAR_10->gpio_lock_detect);
 }

 if (VAR_10->power_up_frequency) {
  VAR_14 = FUNC_2(VAR_12, VAR_10->power_up_frequency);
  if (VAR_14)
   goto error_disable_reg;
 }

 VAR_14 = FUNC_14(VAR_11);
 if (VAR_14)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_12->reg))
  FUNC_17(VAR_12->reg);
error_disable_clk:
 if (VAR_13)
  FUNC_3(VAR_13);

 return VAR_14;
}
