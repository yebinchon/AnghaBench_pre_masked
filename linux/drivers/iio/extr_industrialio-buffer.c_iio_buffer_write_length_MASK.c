
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; struct iio_buffer* buffer; } ;
struct iio_buffer {unsigned int length; unsigned int watermark; TYPE_1__* access; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_length ) (struct iio_buffer*,unsigned int) ;} ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (char const*,int,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iio_buffer*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct iio_buffer *VAR_6 = VAR_5->buffer;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 == VAR_6->length)
  return VAR_4;

 FUNC_3(&VAR_5->mlock);
 if (FUNC_1(VAR_5->buffer)) {
  VAR_8 = -VAR_0;
 } else {
  VAR_6->access->set_length(VAR_6, VAR_7);
  VAR_8 = 0;
 }
 if (VAR_8)
  goto out;
 if (VAR_6->length && VAR_6->length < VAR_6->watermark)
  VAR_6->watermark = VAR_6->length;
out:
 FUNC_4(&VAR_5->mlock);

 return VAR_8 ? VAR_8 : VAR_4;
}
