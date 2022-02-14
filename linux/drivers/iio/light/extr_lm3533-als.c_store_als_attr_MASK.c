
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als_attribute {int type; int val1; int val2; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;



 struct iio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (struct iio_dev*,int ,int ,int ) ;
 int FUNC_3 (struct iio_dev*,int ,int,int ) ;
 struct lm3533_als_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_2);
 struct lm3533_als_attribute *VAR_7 = FUNC_4(VAR_3);
 u8 VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_4, 0, &VAR_8))
  return -VAR_0;

 switch (VAR_7->type) {
 case 130:
  VAR_9 = FUNC_2(VAR_6, VAR_7->val1,
       VAR_7->val2, VAR_8);
  break;
 case 129:
  VAR_9 = FUNC_3(VAR_6, VAR_7->val1,
        0, VAR_8);
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_6, VAR_7->val1,
        1, VAR_8);
  break;
 default:
  VAR_9 = -VAR_1;
 }

 if (VAR_9)
  return VAR_9;

 return VAR_5;
}
