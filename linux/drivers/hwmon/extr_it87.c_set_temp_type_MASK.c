
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct it87_data {int sensor; int extra; int update_lock; scalar_t__ valid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct it87_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct it87_data*,int) ;
 scalar_t__ FUNC_3 (struct it87_data*,int) ;
 int FUNC_4 (struct it87_data*,int ) ;
 int FUNC_5 (struct it87_data*,int ,int) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct sensor_device_attribute *VAR_7 = FUNC_9(VAR_4);
 int VAR_8 = VAR_7->index;

 struct it87_data *VAR_9 = FUNC_0(VAR_3);
 long VAR_10;
 u8 VAR_11, VAR_12;

 if (FUNC_6(VAR_5, 10, &VAR_10) < 0)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_9, VAR_1);
 VAR_11 &= ~(1 << VAR_8);
 VAR_11 &= ~(8 << VAR_8);
 if (FUNC_3(VAR_9, VAR_8) && (VAR_11 >> 6 == VAR_8 + 1 || VAR_10 == 6))
  VAR_11 &= 0x3f;
 VAR_12 = FUNC_4(VAR_9, VAR_2);
 if (FUNC_2(VAR_9, VAR_8) && ((VAR_12 & 0x80) || VAR_10 == 6))
  VAR_12 &= 0x7f;
 if (VAR_10 == 2) {
  FUNC_1(VAR_3,
    "Sensor type 2 is deprecated, please use 4 instead\n");
  VAR_10 = 4;
 }

 if (VAR_10 == 3)
  VAR_11 |= 1 << VAR_8;
 else if (VAR_10 == 4)
  VAR_11 |= 8 << VAR_8;
 else if (FUNC_3(VAR_9, VAR_8) && VAR_10 == 6)
  VAR_11 |= (VAR_8 + 1) << 6;
 else if (FUNC_2(VAR_9, VAR_8) && VAR_10 == 6)
  VAR_12 |= 0x80;
 else if (VAR_10 != 0)
  return -VAR_0;

 FUNC_7(&VAR_9->update_lock);
 VAR_9->sensor = VAR_11;
 VAR_9->extra = VAR_12;
 FUNC_5(VAR_9, VAR_1, VAR_9->sensor);
 if (FUNC_2(VAR_9, VAR_8))
  FUNC_5(VAR_9, VAR_2, VAR_9->extra);
 VAR_9->valid = 0;
 FUNC_8(&VAR_9->update_lock);
 return VAR_6;
}
