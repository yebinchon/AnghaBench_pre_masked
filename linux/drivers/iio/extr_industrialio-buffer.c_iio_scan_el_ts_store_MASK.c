
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; TYPE_1__* buffer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int scan_timestamp; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3,
        size_t VAR_4)
{
 int VAR_5;
 struct iio_dev *VAR_6 = FUNC_0(VAR_1);
 bool VAR_7;

 VAR_5 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(&VAR_6->mlock);
 if (FUNC_1(VAR_6->buffer)) {
  VAR_5 = -VAR_0;
  goto error_ret;
 }
 VAR_6->buffer->scan_timestamp = VAR_7;
error_ret:
 FUNC_3(&VAR_6->mlock);

 return VAR_5 ? VAR_5 : VAR_4;
}
