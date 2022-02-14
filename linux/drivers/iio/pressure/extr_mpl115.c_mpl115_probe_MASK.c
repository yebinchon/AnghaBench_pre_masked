
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpl115_ops {int (* init ) (struct device*) ;int (* read ) (struct device*,int ) ;} ;
struct mpl115_data {int a0; int b1; int b2; int c12; struct device* dev; struct mpl115_ops const* ops; int lock; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int channels; int modes; TYPE_1__ dev; int * info; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct mpl115_data* FUNC_3 (struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,int ) ;
 int FUNC_9 (struct device*,int ) ;

int FUNC_10(struct device *VAR_8, const char *VAR_9,
   const struct mpl115_ops *VAR_10)
{
 struct mpl115_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_8, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_12);
 VAR_11->dev = VAR_8;
 VAR_11->ops = VAR_10;
 FUNC_4(&VAR_11->lock);

 VAR_12->info = &VAR_7;
 VAR_12->name = VAR_9;
 VAR_12->dev.parent = VAR_8;
 VAR_12->modes = VAR_1;
 VAR_12->channels = VAR_6;
 VAR_12->num_channels = FUNC_0(VAR_6);

 VAR_13 = VAR_11->ops->init(VAR_11->dev);
 if (VAR_13)
  return VAR_13;

 VAR_13 = VAR_11->ops->read(VAR_11->dev, VAR_2);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_11->a0 = VAR_13;
 VAR_13 = VAR_11->ops->read(VAR_11->dev, VAR_3);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_11->b1 = VAR_13;
 VAR_13 = VAR_11->ops->read(VAR_11->dev, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_11->b2 = VAR_13;
 VAR_13 = VAR_11->ops->read(VAR_11->dev, VAR_5);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_11->c12 = VAR_13;

 return FUNC_2(VAR_8, VAR_12);
}
