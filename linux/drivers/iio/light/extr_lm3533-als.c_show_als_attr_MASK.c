
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
 int FUNC_1 (struct iio_dev*,int ,int *) ;
 int FUNC_2 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_3 (struct iio_dev*,int ,int,int *) ;
 int FUNC_4 (char*,int ,char*,int ) ;
 struct lm3533_als_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct lm3533_als_attribute *VAR_6 = FUNC_5(VAR_3);
 u8 VAR_7;
 int VAR_8;

 switch (VAR_6->type) {
 case 131:
  VAR_8 = FUNC_1(VAR_5, VAR_6->val1,
         &VAR_7);
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_5, VAR_6->val1,
       VAR_6->val2, &VAR_7);
  break;
 case 129:
  VAR_8 = FUNC_3(VAR_5, VAR_6->val1,
        0, &VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_3(VAR_5, VAR_6->val1,
        1, &VAR_7);
  break;
 default:
  VAR_8 = -VAR_0;
 }

 if (VAR_8)
  return VAR_8;

 return FUNC_4(VAR_4, VAR_1, "%u\n", VAR_7);
}
