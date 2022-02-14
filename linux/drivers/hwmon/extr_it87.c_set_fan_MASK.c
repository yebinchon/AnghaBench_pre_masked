
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct it87_data {int** fan; int* fan_div; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (long) ;
 int FUNC_2 (long,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct it87_data* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct it87_data*) ;
 int FUNC_5 (struct it87_data*,int ) ;
 int FUNC_6 (struct it87_data*,int ,int) ;
 scalar_t__ FUNC_7 (char const*,int,long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct sensor_device_attribute_2* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4, struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute_2 *VAR_8 = FUNC_10(VAR_5);
 int VAR_9 = VAR_8->nr;
 int VAR_10 = VAR_8->index;

 struct it87_data *VAR_11 = FUNC_3(VAR_4);
 long VAR_12;
 u8 VAR_13;

 if (FUNC_7(VAR_6, 10, &VAR_12) < 0)
  return -VAR_0;

 FUNC_8(&VAR_11->update_lock);

 if (FUNC_4(VAR_11)) {
  VAR_11->fan[VAR_9][VAR_10] = FUNC_1(VAR_12);
  FUNC_6(VAR_11, VAR_3[VAR_9],
     VAR_11->fan[VAR_9][VAR_10] & 0xff);
  FUNC_6(VAR_11, VAR_1[VAR_9],
     VAR_11->fan[VAR_9][VAR_10] >> 8);
 } else {
  VAR_13 = FUNC_5(VAR_11, VAR_2);
  switch (VAR_9) {
  case 0:
   VAR_11->fan_div[VAR_9] = VAR_13 & 0x07;
   break;
  case 1:
   VAR_11->fan_div[VAR_9] = (VAR_13 >> 3) & 0x07;
   break;
  case 2:
   VAR_11->fan_div[VAR_9] = (VAR_13 & 0x40) ? 3 : 1;
   break;
  }
  VAR_11->fan[VAR_9][VAR_10] =
    FUNC_2(VAR_12, FUNC_0(VAR_11->fan_div[VAR_9]));
  FUNC_6(VAR_11, VAR_3[VAR_9],
     VAR_11->fan[VAR_9][VAR_10]);
 }

 FUNC_9(&VAR_11->update_lock);
 return VAR_7;
}
