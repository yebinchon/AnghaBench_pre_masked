
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad9523_state {int lock; } ;
typedef int ssize_t ;




 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct ad9523_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int*) ;
 struct iio_dev_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_2(VAR_1);
 struct iio_dev_attr *VAR_6 = FUNC_7(VAR_2);
 struct ad9523_state *VAR_7 = FUNC_3(VAR_5);
 bool VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_3, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (!VAR_8)
  return VAR_4;

 FUNC_4(&VAR_7->lock);
 switch ((u32)VAR_6->address) {
 case 128:
  VAR_9 = FUNC_1(VAR_5);
  break;
 case 129:
  VAR_9 = FUNC_0(VAR_5);
  break;
 default:
  VAR_9 = -VAR_0;
 }
 FUNC_5(&VAR_7->lock);

 return VAR_9 ? VAR_9 : VAR_4;
}
