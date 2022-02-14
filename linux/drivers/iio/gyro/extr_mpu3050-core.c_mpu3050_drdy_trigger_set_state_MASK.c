
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int hw_irq_trigger; int pending_fifo_footer; int map; scalar_t__ irq_opendrain; scalar_t__ irq_latch; scalar_t__ irq_actl; int dev; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 struct mpu3050* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct mpu3050*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 int FUNC_8 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_9 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct iio_trigger *VAR_15,
       bool VAR_16)
{
 struct iio_dev *VAR_17 = FUNC_2(VAR_15);
 struct mpu3050 *VAR_18 = FUNC_1(VAR_17);
 unsigned int VAR_19;
 int VAR_20;


 if (!VAR_16) {

  VAR_20 = FUNC_9(VAR_18->map,
       VAR_7,
       0);
  if (VAR_20)
   FUNC_0(VAR_18->dev, "error disabling IRQ\n");


  VAR_20 = FUNC_7(VAR_18->map, VAR_11, &VAR_19);
  if (VAR_20)
   FUNC_0(VAR_18->dev, "error clearing IRQ status\n");


  VAR_20 = FUNC_9(VAR_18->map, VAR_0, 0);
  if (VAR_20)
   FUNC_0(VAR_18->dev, "error disabling FIFO\n");

  VAR_20 = FUNC_9(VAR_18->map, VAR_12,
       VAR_14);
  if (VAR_20)
   FUNC_0(VAR_18->dev, "error resetting FIFO\n");

  FUNC_5(VAR_18->dev);
  FUNC_6(VAR_18->dev);
  VAR_18->hw_irq_trigger = 0;

  return 0;
 } else {

  FUNC_4(VAR_18->dev);
  VAR_18->hw_irq_trigger = 1;


  VAR_20 = FUNC_9(VAR_18->map, VAR_0, 0);
  if (VAR_20)
   return VAR_20;


  VAR_20 = FUNC_8(VAR_18->map, VAR_12,
      VAR_13 |
      VAR_14,
      VAR_13 |
      VAR_14);
  if (VAR_20)
   return VAR_20;

  VAR_18->pending_fifo_footer = 0;


  VAR_20 = FUNC_9(VAR_18->map, VAR_0,
       VAR_5 |
       VAR_2 |
       VAR_3 |
       VAR_4 |
       VAR_1);
  if (VAR_20)
   return VAR_20;


  VAR_20 = FUNC_3(VAR_18);
  if (VAR_20)
   return VAR_20;


  VAR_20 = FUNC_7(VAR_18->map, VAR_11, &VAR_19);
  if (VAR_20)
   FUNC_0(VAR_18->dev, "error clearing IRQ status\n");


  VAR_19 = VAR_10;

  if (VAR_18->irq_actl)
   VAR_19 |= VAR_6;
  if (VAR_18->irq_latch)
   VAR_19 |= VAR_8;
  if (VAR_18->irq_opendrain)
   VAR_19 |= VAR_9;

  VAR_20 = FUNC_9(VAR_18->map, VAR_7, VAR_19);
  if (VAR_20)
   return VAR_20;
 }

 return 0;
}
