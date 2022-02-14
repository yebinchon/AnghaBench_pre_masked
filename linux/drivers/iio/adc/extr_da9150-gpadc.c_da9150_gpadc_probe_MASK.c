
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct da9150_gpadc {int complete; int lock; struct device* dev; struct da9150* da9150; } ;
struct da9150 {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct da9150* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,int,int *,int ,int ,char*,struct da9150_gpadc*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int ) ;
 int FUNC_8 (struct iio_dev*) ;
 struct da9150_gpadc* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,char*) ;
 int FUNC_13 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct da9150 *VAR_9 = FUNC_2(VAR_8->parent);
 struct da9150_gpadc *VAR_10;
 struct iio_dev *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_4(VAR_8, sizeof(*VAR_10));
 if (!VAR_11) {
  FUNC_1(&VAR_7->dev, "Failed to allocate IIO device\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_9(VAR_11);

 FUNC_13(VAR_7, VAR_11);
 VAR_10->da9150 = VAR_9;
 VAR_10->dev = VAR_8;
 FUNC_11(&VAR_10->lock);
 FUNC_10(&VAR_10->complete);

 VAR_12 = FUNC_12(VAR_7, "GPADC");
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_5(VAR_8, VAR_12, ((void*)0), VAR_6,
     VAR_2, "GPADC", VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_8, "Failed to request IRQ %d: %d\n", VAR_12, VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_7(VAR_11, VAR_4);
 if (VAR_13) {
  FUNC_1(VAR_8, "Failed to register IIO maps: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11->name = FUNC_3(VAR_8);
 VAR_11->dev.parent = VAR_8;
 VAR_11->dev.of_node = VAR_7->dev.of_node;
 VAR_11->info = &VAR_5;
 VAR_11->modes = VAR_1;
 VAR_11->channels = VAR_3;
 VAR_11->num_channels = FUNC_0(VAR_3);

 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13) {
  FUNC_1(VAR_8, "Failed to register IIO device: %d\n", VAR_13);
  goto iio_map_unreg;
 }

 return 0;

iio_map_unreg:
 FUNC_8(VAR_11);

 return VAR_13;
}
