
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct iio_dev {int mlock; struct iio_buffer* buffer; } ;
struct iio_buffer {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (struct iio_buffer*,int ) ;
 int FUNC_3 (struct iio_dev*,struct iio_buffer*,int ) ;
 int FUNC_4 (struct iio_dev*,struct iio_buffer*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int*) ;
 struct iio_dev_attr* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3,
     size_t VAR_4)
{
 int VAR_5;
 bool VAR_6;
 struct iio_dev *VAR_7 = FUNC_0(VAR_1);
 struct iio_buffer *VAR_8 = VAR_7->buffer;
 struct iio_dev_attr *VAR_9 = FUNC_8(VAR_2);

 VAR_5 = FUNC_7(VAR_3, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_5(&VAR_7->mlock);
 if (FUNC_1(VAR_7->buffer)) {
  VAR_5 = -VAR_0;
  goto error_ret;
 }
 VAR_5 = FUNC_3(VAR_7, VAR_8, VAR_9->address);
 if (VAR_5 < 0)
  goto error_ret;
 if (!VAR_6 && VAR_5) {
  VAR_5 = FUNC_2(VAR_8, VAR_9->address);
  if (VAR_5)
   goto error_ret;
 } else if (VAR_6 && !VAR_5) {
  VAR_5 = FUNC_4(VAR_7, VAR_8, VAR_9->address);
  if (VAR_5)
   goto error_ret;
 }

error_ret:
 FUNC_6(&VAR_7->mlock);

 return VAR_5 < 0 ? VAR_5 : VAR_4;

}
