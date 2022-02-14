
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_sensors_platform_data {scalar_t__ open_drain; } ;
struct st_lsm6dsx_hw {TYPE_1__** iio_devs; TYPE_2__* dev; int irq; int regmap; } ;
struct iio_buffer {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {scalar_t__ platform_data; struct device_node* of_node; } ;
struct TYPE_6__ {int * setup_ops; int modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,unsigned long) ;
 struct iio_buffer* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,unsigned long,char*,struct st_lsm6dsx_hw*) ;
 int FUNC_5 (TYPE_1__*,struct iio_buffer*) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_10(struct st_lsm6dsx_hw *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev->of_node;
 struct st_sensors_platform_data *VAR_15;
 struct iio_buffer *VAR_16;
 unsigned long VAR_17;
 bool VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_7(FUNC_6(VAR_13->irq));

 switch (VAR_17) {
 case 130:
 case 128:
  VAR_18 = 0;
  break;
 case 129:
 case 131:
  VAR_18 = 1;
  break;
 default:
  FUNC_2(VAR_13->dev, "mode %lx unsupported\n", VAR_17);
  return -VAR_0;
 }

 VAR_20 = FUNC_9(VAR_13->regmap, VAR_6,
     VAR_7,
     FUNC_0(VAR_7,
         VAR_18));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_15 = (struct st_sensors_platform_data *)VAR_13->dev->platform_data;
 if ((VAR_14 && FUNC_8(VAR_14, "drive-open-drain")) ||
     (VAR_15 && VAR_15->open_drain)) {
  VAR_20 = FUNC_9(VAR_13->regmap, VAR_8,
      VAR_9,
      FUNC_0(VAR_9,
          1));
  if (VAR_20 < 0)
   return VAR_20;

  VAR_17 |= VAR_4;
 }

 VAR_20 = FUNC_4(VAR_13->dev, VAR_13->irq,
     VAR_11,
     VAR_12,
     VAR_17 | VAR_3,
     "lsm6dsx", VAR_13);
 if (VAR_20) {
  FUNC_1(VAR_13->dev, "failed to request trigger irq %d\n",
   VAR_13->irq);
  return VAR_20;
 }

 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  if (!VAR_13->iio_devs[VAR_19])
   continue;

  VAR_16 = FUNC_3(VAR_13->dev);
  if (!VAR_16)
   return -VAR_1;

  FUNC_5(VAR_13->iio_devs[VAR_19], VAR_16);
  VAR_13->iio_devs[VAR_19]->modes |= VAR_2;
  VAR_13->iio_devs[VAR_19]->setup_ops = &VAR_10;
 }

 return 0;
}
