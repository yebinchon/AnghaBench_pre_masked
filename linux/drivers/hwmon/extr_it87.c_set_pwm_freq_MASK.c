
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int fan_ctl; int extra; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long,int ,int) ;
 struct it87_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct it87_data*) ;
 int FUNC_3 (struct it87_data*,int ) ;
 int FUNC_4 (struct it87_data*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int* VAR_3 ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute *VAR_8 = FUNC_8(VAR_5);
 struct it87_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10 = VAR_8->index;
 unsigned long VAR_11;
 int VAR_12;

 if (FUNC_5(VAR_6, 10, &VAR_11) < 0)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_11, 0, 1000000);
 VAR_11 *= FUNC_2(VAR_9) ? 256 : 128;


 for (VAR_12 = 0; VAR_12 < 7; VAR_12++) {
  if (VAR_11 > (VAR_3[VAR_12] + VAR_3[VAR_12 + 1]) / 2)
   break;
 }

 FUNC_6(&VAR_9->update_lock);
 if (VAR_10 == 0) {
  VAR_9->fan_ctl = FUNC_3(VAR_9, VAR_1) & 0x8f;
  VAR_9->fan_ctl |= VAR_12 << 4;
  FUNC_4(VAR_9, VAR_1, VAR_9->fan_ctl);
 } else {
  VAR_9->extra = FUNC_3(VAR_9, VAR_2) & 0x8f;
  VAR_9->extra |= VAR_12 << 4;
  FUNC_4(VAR_9, VAR_2, VAR_9->extra);
 }
 FUNC_7(&VAR_9->update_lock);

 return VAR_7;
}
