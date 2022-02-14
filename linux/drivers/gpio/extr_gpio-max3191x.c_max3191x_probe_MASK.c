
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {int modalias; struct device dev; } ;
struct TYPE_7__ {int base; int ngpio; int can_sleep; int set_config; int get_multiple; int get; int set_multiple; int set; int direction_output; int direction_input; int get_direction; struct device* parent; int owner; int label; } ;
struct TYPE_6__ {int len; void* rx_buf; } ;
struct max3191x_chip {int nchips; int lock; TYPE_3__ gpio; TYPE_2__ xfer; int mesg; TYPE_4__* db1_pins; TYPE_4__* db0_pins; scalar_t__ ignore_uv; int mode; TYPE_1__* modesel_pins; void* fault_pins; void* fault; void* undervolt2; void* overtemp; void* undervolt1; void* crc_error; } ;
struct TYPE_8__ {scalar_t__ ndescs; } ;
struct TYPE_5__ {int info; int desc; int ndescs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int*) ;
 void* FUNC_4 (struct device*,char*,int ,int) ;
 int FUNC_5 (struct device*,TYPE_4__*) ;
 void* FUNC_6 (struct device*,int,int,int ) ;
 struct max3191x_chip* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (TYPE_3__*,struct max3191x_chip*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct max3191x_chip*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*,int) ;
 int FUNC_14 (struct spi_device*,struct max3191x_chip*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct max3191x_chip *VAR_19;
 int VAR_20, VAR_21;

 VAR_19 = FUNC_7(VAR_18, sizeof(*VAR_19), VAR_1);
 if (!VAR_19)
  return -VAR_0;
 FUNC_14(VAR_17, VAR_19);

 VAR_19->nchips = 1;
 FUNC_3(VAR_18, "#daisy-chained-devices",
     &VAR_19->nchips);

 VAR_20 = FUNC_0(VAR_19->nchips);
 VAR_19->crc_error = FUNC_6(VAR_18, VAR_20, sizeof(long), VAR_1);
 VAR_19->undervolt1 = FUNC_6(VAR_18, VAR_20, sizeof(long), VAR_1);
 VAR_19->undervolt2 = FUNC_6(VAR_18, VAR_20, sizeof(long), VAR_1);
 VAR_19->overtemp = FUNC_6(VAR_18, VAR_20, sizeof(long), VAR_1);
 VAR_19->fault = FUNC_6(VAR_18, VAR_20, sizeof(long), VAR_1);
 VAR_19->xfer.rx_buf = FUNC_6(VAR_18, VAR_19->nchips,
        2, VAR_1);
 if (!VAR_19->crc_error || !VAR_19->undervolt1 ||
     !VAR_19->overtemp || !VAR_19->undervolt2 ||
     !VAR_19->fault || !VAR_19->xfer.rx_buf)
  return -VAR_0;

 VAR_19->modesel_pins = FUNC_4(VAR_18,
     "maxim,modesel", VAR_2, VAR_19->nchips);
 VAR_19->fault_pins = FUNC_4(VAR_18,
     "maxim,fault", VAR_3, VAR_19->nchips);
 VAR_19->db0_pins = FUNC_4(VAR_18,
     "maxim,db0", VAR_4, VAR_19->nchips);
 VAR_19->db1_pins = FUNC_4(VAR_18,
     "maxim,db1", VAR_4, VAR_19->nchips);

 VAR_19->mode = FUNC_2(VAR_18, "maxim,modesel-8bit")
     ? VAR_6 : VAR_7;
 if (VAR_19->modesel_pins)
  FUNC_9(
     VAR_19->modesel_pins->ndescs,
     VAR_19->modesel_pins->desc,
     VAR_19->modesel_pins->info, VAR_19->mode);

 VAR_19->ignore_uv = FUNC_2(VAR_18,
        "maxim,ignore-undervoltage");

 if (VAR_19->db0_pins && VAR_19->db1_pins &&
     VAR_19->db0_pins->ndescs != VAR_19->db1_pins->ndescs) {
  FUNC_1(VAR_18, "ignoring maxim,db*-gpios: array len mismatch\n");
  FUNC_5(VAR_18, VAR_19->db0_pins);
  FUNC_5(VAR_18, VAR_19->db1_pins);
  VAR_19->db0_pins = ((void*)0);
  VAR_19->db1_pins = ((void*)0);
 }

 VAR_19->xfer.len = VAR_19->nchips * FUNC_10(VAR_19);
 FUNC_13(&VAR_19->mesg, &VAR_19->xfer, 1);

 VAR_19->gpio.label = VAR_17->modalias;
 VAR_19->gpio.owner = VAR_8;
 VAR_19->gpio.parent = VAR_18;
 VAR_19->gpio.base = -1;
 VAR_19->gpio.ngpio = VAR_19->nchips * VAR_5;
 VAR_19->gpio.can_sleep = 1;

 VAR_19->gpio.get_direction = VAR_12;
 VAR_19->gpio.direction_input = VAR_9;
 VAR_19->gpio.direction_output = VAR_10;
 VAR_19->gpio.set = VAR_14;
 VAR_19->gpio.set_multiple = VAR_16;
 VAR_19->gpio.get = VAR_11;
 VAR_19->gpio.get_multiple = VAR_13;
 VAR_19->gpio.set_config = VAR_15;

 FUNC_12(&VAR_19->lock);

 VAR_21 = FUNC_8(&VAR_19->gpio, VAR_19);
 if (VAR_21) {
  FUNC_11(&VAR_19->lock);
  return VAR_21;
 }

 return 0;
}
