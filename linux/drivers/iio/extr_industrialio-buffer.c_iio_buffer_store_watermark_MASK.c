
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; struct iio_buffer* buffer; } ;
struct iio_buffer {unsigned int length; unsigned int watermark; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (char const*,int,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4,
       size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_2);
 struct iio_buffer *VAR_7 = VAR_6->buffer;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (!VAR_8)
  return -VAR_1;

 FUNC_3(&VAR_6->mlock);

 if (VAR_8 > VAR_7->length) {
  VAR_9 = -VAR_1;
  goto out;
 }

 if (FUNC_1(VAR_6->buffer)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_7->watermark = VAR_8;
out:
 FUNC_4(&VAR_6->mlock);

 return VAR_9 ? VAR_9 : VAR_5;
}
