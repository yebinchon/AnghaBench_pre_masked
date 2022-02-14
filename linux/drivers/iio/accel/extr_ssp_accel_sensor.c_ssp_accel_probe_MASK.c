
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ssp_sensor_data {int type; int process_data; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int * setup_ops; int available_scan_masks; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct iio_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,struct iio_dev*) ;
 struct iio_buffer* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct iio_dev*,struct iio_buffer*) ;
 struct ssp_sensor_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct platform_device*,struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct iio_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 int VAR_10;
 struct iio_dev *VAR_11;
 struct ssp_sensor_data *VAR_12;
 struct iio_buffer *VAR_13;

 VAR_11 = FUNC_1(&VAR_9->dev, sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_11);

 VAR_12->process_data = VAR_8;
 VAR_12->type = VAR_2;

 VAR_11->name = VAR_5;
 VAR_11->dev.parent = &VAR_9->dev;
 VAR_11->dev.of_node = VAR_9->dev.of_node;
 VAR_11->info = &VAR_6;
 VAR_11->modes = VAR_1;
 VAR_11->channels = VAR_3;
 VAR_11->num_channels = FUNC_0(VAR_3);
 VAR_11->available_scan_masks = VAR_7;

 VAR_13 = FUNC_3(&VAR_9->dev);
 if (!VAR_13)
  return -VAR_0;

 FUNC_4(VAR_11, VAR_13);

 VAR_11->setup_ops = &VAR_4;

 FUNC_6(VAR_9, VAR_11);

 VAR_10 = FUNC_2(&VAR_9->dev, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;


 FUNC_7(VAR_11, VAR_2);

 return 0;
}
