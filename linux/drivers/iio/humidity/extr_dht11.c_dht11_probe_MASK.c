
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; int name; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct dht11 {scalar_t__ irq; int num_edges; int lock; int completion; scalar_t__ timestamp; int gpiod; struct device* dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,int *,int ) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 struct dht11* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct dht11 *VAR_9;
 struct iio_dev *VAR_10;

 VAR_10 = FUNC_6(VAR_8, sizeof(*VAR_9));
 if (!VAR_10) {
  FUNC_4(VAR_8, "Failed to allocate IIO device\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_9(VAR_10);
 VAR_9->dev = VAR_8;
 VAR_9->gpiod = FUNC_5(VAR_8, ((void*)0), VAR_3);
 if (FUNC_1(VAR_9->gpiod))
  return FUNC_2(VAR_9->gpiod);

 VAR_9->irq = FUNC_8(VAR_9->gpiod);
 if (VAR_9->irq < 0) {
  FUNC_4(VAR_8, "GPIO %d has no interrupt\n", FUNC_3(VAR_9->gpiod));
  return -VAR_1;
 }

 VAR_9->timestamp = FUNC_11() - VAR_0 - 1;
 VAR_9->num_edges = -1;

 FUNC_13(VAR_7, VAR_10);

 FUNC_10(&VAR_9->completion);
 FUNC_12(&VAR_9->lock);
 VAR_10->name = VAR_7->name;
 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_6;
 VAR_10->modes = VAR_4;
 VAR_10->channels = VAR_5;
 VAR_10->num_channels = FUNC_0(VAR_5);

 return FUNC_7(VAR_8, VAR_10);
}
