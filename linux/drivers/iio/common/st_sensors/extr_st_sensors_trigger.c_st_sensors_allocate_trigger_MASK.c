
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct st_sensor_data {int edge_irq; TYPE_5__* trig; int irq; TYPE_4__* sensor_settings; scalar_t__ int_pin_open_drain; int dev; } ;
struct iio_trigger_ops {int dummy; } ;
struct iio_dev {int trig; int dev; int name; } ;
struct TYPE_12__ {int parent; } ;
struct TYPE_16__ {int name; TYPE_1__ dev; struct iio_trigger_ops const* ops; } ;
struct TYPE_13__ {scalar_t__ addr; } ;
struct TYPE_14__ {TYPE_2__ stat_drdy; int mask_ihl; int addr_ihl; } ;
struct TYPE_15__ {TYPE_3__ drdy_irq; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;




 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 struct st_sensor_data* FUNC_3 (struct iio_dev*) ;
 TYPE_5__* FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,struct iio_dev*) ;
 int FUNC_9 (int ) ;
 unsigned long FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,unsigned long,int ,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct iio_dev*,int ,int ,int) ;

int FUNC_13(struct iio_dev *VAR_5,
    const struct iio_trigger_ops *VAR_6)
{
 struct st_sensor_data *VAR_7 = FUNC_3(VAR_5);
 unsigned long VAR_8;
 int VAR_9;

 VAR_7->trig = FUNC_4("%s-trigger", VAR_5->name);
 if (VAR_7->trig == ((void*)0)) {
  FUNC_0(&VAR_5->dev, "failed to allocate iio trigger.\n");
  return -VAR_0;
 }

 FUNC_8(VAR_7->trig, VAR_5);
 VAR_7->trig->ops = VAR_6;
 VAR_7->trig->dev.parent = VAR_7->dev;

 VAR_8 = FUNC_10(FUNC_9(VAR_7->irq));




 switch(VAR_8) {
 case 131:
 case 129:
  if (!VAR_7->sensor_settings->drdy_irq.addr_ihl) {
   FUNC_0(&VAR_5->dev,
    "falling/low specified for IRQ "
    "but hardware supports only rising/high: "
    "will request rising/high\n");
   if (VAR_8 == 131)
    VAR_8 = 128;
   if (VAR_8 == 129)
    VAR_8 = 130;
  } else {

   VAR_9 = FUNC_12(VAR_5,
    VAR_7->sensor_settings->drdy_irq.addr_ihl,
    VAR_7->sensor_settings->drdy_irq.mask_ihl, 1);
   if (VAR_9 < 0)
    goto iio_trigger_free;
   FUNC_1(&VAR_5->dev,
     "interrupts on the falling edge or "
     "active low level\n");
  }
  break;
 case 128:
  FUNC_1(&VAR_5->dev,
    "interrupts on the rising edge\n");
  break;
 case 130:
  FUNC_1(&VAR_5->dev,
    "interrupts active high level\n");
  break;
 default:

  FUNC_0(&VAR_5->dev,
   "unsupported IRQ trigger specified (%lx), enforce "
   "rising edge\n", VAR_8);
  VAR_8 = 128;
 }


 if (VAR_8 == 131 ||
     VAR_8 == 128)
  VAR_7->edge_irq = 1;
 else






  VAR_8 |= VAR_1;
 if (VAR_7->int_pin_open_drain &&
     VAR_7->sensor_settings->drdy_irq.stat_drdy.addr)
  VAR_8 |= VAR_2;

 VAR_9 = FUNC_11(VAR_7->irq,
       VAR_3,
       VAR_4,
       VAR_8,
       VAR_7->trig->name,
       VAR_7->trig);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "failed to request trigger IRQ.\n");
  goto iio_trigger_free;
 }

 VAR_9 = FUNC_7(VAR_7->trig);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5->dev, "failed to register iio trigger.\n");
  goto iio_trigger_register_error;
 }
 VAR_5->trig = FUNC_6(VAR_7->trig);

 return 0;

iio_trigger_register_error:
 FUNC_2(VAR_7->irq, VAR_7->trig);
iio_trigger_free:
 FUNC_5(VAR_7->trig);
 return VAR_9;
}
