
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm78_data {int* fan_min; int* fan_div; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct device*,char*,unsigned long) ;
 struct lm78_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (struct lm78_data*,int ) ;
 int FUNC_8 (struct lm78_data*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct sensor_device_attribute* FUNC_11 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_11(VAR_3);
 struct lm78_data *VAR_7 = FUNC_5(VAR_2);
 int VAR_8 = VAR_6->index;
 unsigned long VAR_9;
 u8 VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_6(VAR_4, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_9(&VAR_7->update_lock);
 VAR_9 = FUNC_1(VAR_7->fan_min[VAR_8],
      FUNC_0(VAR_7->fan_div[VAR_8]));

 switch (VAR_11) {
 case 1:
  VAR_7->fan_div[VAR_8] = 0;
  break;
 case 2:
  VAR_7->fan_div[VAR_8] = 1;
  break;
 case 4:
  VAR_7->fan_div[VAR_8] = 2;
  break;
 case 8:
  VAR_7->fan_div[VAR_8] = 3;
  break;
 default:
  FUNC_4(VAR_2,
   "fan_div value %ld not supported. Choose one of 1, 2, 4 or 8!\n",
   VAR_11);
  FUNC_10(&VAR_7->update_lock);
  return -VAR_0;
 }

 VAR_10 = FUNC_7(VAR_7, VAR_1);
 switch (VAR_8) {
 case 0:
  VAR_10 = (VAR_10 & 0xcf) | (VAR_7->fan_div[VAR_8] << 4);
  break;
 case 1:
  VAR_10 = (VAR_10 & 0x3f) | (VAR_7->fan_div[VAR_8] << 6);
  break;
 }
 FUNC_8(VAR_7, VAR_1, VAR_10);

 VAR_7->fan_min[VAR_8] =
  FUNC_2(VAR_9, FUNC_0(VAR_7->fan_div[VAR_8]));
 FUNC_8(VAR_7, FUNC_3(VAR_8), VAR_7->fan_min[VAR_8]);
 FUNC_10(&VAR_7->update_lock);

 return VAR_5;
}
