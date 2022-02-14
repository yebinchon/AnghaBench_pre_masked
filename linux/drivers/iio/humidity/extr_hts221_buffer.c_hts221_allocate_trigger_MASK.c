
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct st_sensors_platform_data {scalar_t__ open_drain; } ;
struct iio_dev {int trig; int name; } ;
struct hts221_hw {TYPE_2__* trig; TYPE_4__* dev; int irq; int name; int regmap; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {scalar_t__ platform_data; struct device_node* of_node; } ;
struct TYPE_11__ {TYPE_4__* parent; } ;
struct TYPE_12__ {TYPE_1__ dev; int * ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;




 int FUNC_1 (TYPE_4__*,char*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,unsigned long) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,char*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,int ,int *,int ,unsigned long,int ,struct hts221_hw*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct iio_dev* FUNC_6 (struct hts221_hw*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_9 (int ) ;
 unsigned long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (int ,int ,int ,int ) ;

int FUNC_13(struct hts221_hw *VAR_9)
{
 struct iio_dev *VAR_10 = FUNC_6(VAR_9);
 bool VAR_11 = 0, VAR_12 = 0;
 struct device_node *VAR_13 = VAR_9->dev->of_node;
 struct st_sensors_platform_data *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_15 = FUNC_10(FUNC_9(VAR_9->irq));

 switch (VAR_15) {
 case 130:
 case 128:
  break;
 case 129:
 case 131:
  VAR_11 = 1;
  break;
 default:
  FUNC_2(VAR_9->dev,
    "mode %lx unsupported, using IRQF_TRIGGER_RISING\n",
    VAR_15);
  VAR_15 = 128;
  break;
 }

 VAR_16 = FUNC_12(VAR_9->regmap, VAR_1,
     VAR_2,
     FUNC_0(VAR_2,
         VAR_11));
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = (struct st_sensors_platform_data *)VAR_9->dev->platform_data;
 if ((VAR_13 && FUNC_11(VAR_13, "drive-open-drain")) ||
     (VAR_14 && VAR_14->open_drain)) {
  VAR_15 |= VAR_6;
  VAR_12 = 1;
 }

 VAR_16 = FUNC_12(VAR_9->regmap, VAR_3,
     VAR_4,
     FUNC_0(VAR_4,
         VAR_12));
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_9->dev, VAR_9->irq, ((void*)0),
     VAR_7,
     VAR_15 | VAR_5,
     VAR_9->name, VAR_9);
 if (VAR_16) {
  FUNC_1(VAR_9->dev, "failed to request trigger irq %d\n",
   VAR_9->irq);
  return VAR_16;
 }

 VAR_9->trig = FUNC_3(VAR_9->dev, "%s-trigger",
       VAR_10->name);
 if (!VAR_9->trig)
  return -VAR_0;

 FUNC_8(VAR_9->trig, VAR_10);
 VAR_9->trig->ops = &VAR_8;
 VAR_9->trig->dev.parent = VAR_9->dev;
 VAR_10->trig = FUNC_7(VAR_9->trig);

 return FUNC_4(VAR_9->dev, VAR_9->trig);
}
