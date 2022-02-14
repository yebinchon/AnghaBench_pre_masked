
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct it87_data {int** temp; int update_lock; int valid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_2 ;
 int FUNC_2 (long) ;
 struct it87_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct it87_data*,int) ;
 int FUNC_5 (struct it87_data*,int,int) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 struct sensor_device_attribute_2 *VAR_7 = FUNC_9(VAR_4);
 int VAR_8 = VAR_7->nr;
 int VAR_9 = VAR_7->index;
 struct it87_data *VAR_10 = FUNC_3(VAR_3);
 long VAR_11;
 u8 VAR_12, VAR_13;

 if (FUNC_6(VAR_5, 10, &VAR_11) < 0)
  return -VAR_0;

 FUNC_7(&VAR_10->update_lock);

 switch (VAR_9) {
 default:
 case 1:
  VAR_12 = FUNC_1(VAR_8);
  break;
 case 2:
  VAR_12 = FUNC_0(VAR_8);
  break;
 case 3:
  VAR_13 = FUNC_4(VAR_10, VAR_1);
  if (!(VAR_13 & 0x80)) {
   VAR_13 |= 0x80;
   FUNC_5(VAR_10, VAR_1, VAR_13);
  }
  VAR_10->valid = 0;
  VAR_12 = VAR_2[VAR_8];
  break;
 }

 VAR_10->temp[VAR_8][VAR_9] = FUNC_2(VAR_11);
 FUNC_5(VAR_10, VAR_12, VAR_10->temp[VAR_8][VAR_9]);
 FUNC_8(&VAR_10->update_lock);
 return VAR_6;
}
