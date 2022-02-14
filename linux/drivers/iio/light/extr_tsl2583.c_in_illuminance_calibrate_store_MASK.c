
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2583_chip {int als_mutex; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct tsl2583_chip* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct tsl2583_chip *VAR_6 = FUNC_1(VAR_5);
 int VAR_7, VAR_8;

 if (FUNC_2(VAR_3, 0, &VAR_7) || VAR_7 != 1)
  return -VAR_0;

 FUNC_3(&VAR_6->als_mutex);

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 < 0)
  goto done;

 VAR_8 = VAR_4;
done:
 FUNC_4(&VAR_6->als_mutex);

 return VAR_8;
}
