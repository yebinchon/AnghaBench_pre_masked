
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct iio_buffer {int dummy; } ;
struct acpi_device {int dev; struct iio_dev* driver_data; } ;
struct acpi_als {int lock; struct acpi_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 struct iio_buffer* FUNC_3 (int *) ;
 int FUNC_4 (struct iio_dev*,struct iio_buffer*) ;
 struct acpi_als* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_5)
{
 struct acpi_als *VAR_6;
 struct iio_dev *VAR_7;
 struct iio_buffer *VAR_8;

 VAR_7 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_7);

 VAR_5->driver_data = VAR_7;
 VAR_6->device = VAR_5;
 FUNC_6(&VAR_6->lock);

 VAR_7->name = VAR_0;
 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->info = &VAR_4;
 VAR_7->modes = VAR_2;
 VAR_7->channels = VAR_3;
 VAR_7->num_channels = FUNC_0(VAR_3);

 VAR_8 = FUNC_3(&VAR_5->dev);
 if (!VAR_8)
  return -VAR_1;

 FUNC_4(VAR_7, VAR_8);

 return FUNC_2(&VAR_5->dev, VAR_7);
}
