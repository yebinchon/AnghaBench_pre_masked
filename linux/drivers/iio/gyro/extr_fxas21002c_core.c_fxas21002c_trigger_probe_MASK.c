
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct device_node* of_node; } ;
struct iio_dev {int id; int name; TYPE_1__ dev; } ;
struct fxas21002c_data {int irq; TYPE_3__* dready_trig; int * regmap_fields; int regmap; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_8__ {int * ops; TYPE_2__ dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 TYPE_3__* FUNC_2 (struct device*,char*,int ,int ) ;
 int FUNC_3 (struct device*,TYPE_3__*) ;
 int FUNC_4 (struct device*,int,int ,int ,unsigned long,char*,struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_6 (int) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (int ,int) ;
 struct device* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct fxas21002c_data *VAR_8)
{
 struct device *VAR_9 = FUNC_11(VAR_8->regmap);
 struct iio_dev *VAR_10 = FUNC_0(VAR_9);
 struct device_node *VAR_11 = VAR_10->dev.of_node;
 unsigned long VAR_12;
 bool VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_8->irq)
  return 0;

 VAR_14 = FUNC_8(VAR_11, "INT1");

 if (VAR_14 == VAR_8->irq) {
  FUNC_1(VAR_9, "using interrupt line INT1\n");
  VAR_15 = FUNC_10(VAR_8->regmap_fields[VAR_1],
      1);
  if (VAR_15 < 0)
   return VAR_15;
 }

 FUNC_1(VAR_9, "using interrupt line INT2\n");

 VAR_13 = FUNC_9(VAR_11, "drive-open-drain");

 VAR_8->dready_trig = FUNC_2(VAR_9, "%s-dev%d",
         VAR_10->name,
         VAR_10->id);
 if (!VAR_8->dready_trig)
  return -VAR_0;

 VAR_12 = FUNC_7(FUNC_6(VAR_8->irq));

 if (VAR_12 == VAR_4) {
  VAR_15 = FUNC_10(VAR_8->regmap_fields[VAR_2], 1);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (VAR_13)
  VAR_12 |= VAR_3;

 VAR_15 = FUNC_4(VAR_9, VAR_8->irq,
     VAR_5,
     VAR_6,
     VAR_12, "fxas21002c_data_ready",
     VAR_10);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_8->dready_trig->dev.parent = VAR_9;
 VAR_8->dready_trig->ops = &VAR_7;
 FUNC_5(VAR_8->dready_trig, VAR_10);

 return FUNC_3(VAR_9, VAR_8->dready_trig);
}
