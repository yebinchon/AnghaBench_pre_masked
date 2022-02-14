
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_device_config {int scan_mask; } ;
struct iio_dev {int buffer_list; } ;
struct iio_buffer {int dummy; } ;


 int FUNC_0 (struct iio_dev*,struct iio_buffer*) ;
 int FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,struct iio_buffer*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,struct iio_device_config*) ;
 int FUNC_6 (struct iio_dev*,int ) ;
 int FUNC_7 (struct iio_dev*,struct iio_buffer*,struct iio_buffer*,struct iio_device_config*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_0,
         struct iio_buffer *VAR_1,
         struct iio_buffer *VAR_2)
{
 struct iio_device_config VAR_3;
 int VAR_4;

 VAR_4 = FUNC_7(VAR_0, VAR_1, VAR_2,
  &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_1) {
  VAR_4 = FUNC_3(VAR_0, VAR_1);
  if (VAR_4)
   goto err_free_config;
 }

 VAR_4 = FUNC_4(VAR_0);
 if (VAR_4)
  goto err_deactivate_all;

 if (VAR_2)
  FUNC_1(VAR_2);
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);


 if (FUNC_8(&VAR_0->buffer_list))
  return 0;

 VAR_4 = FUNC_5(VAR_0, &VAR_3);
 if (VAR_4)
  goto err_deactivate_all;

 return 0;

err_deactivate_all:
 FUNC_2(VAR_0);

err_free_config:
 FUNC_6(VAR_0, VAR_3.scan_mask);
 return VAR_4;
}
