
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627ehf_data {unsigned long* fan_min; int* fan_div; int update_lock; int * REG_FAN_MIN; int last_updated; int (* fan_from_reg_min ) (int,int) ;int has_fan_div; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,char*,int,int ,int ) ;
 struct w83627ehf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int,unsigned long,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 struct sensor_device_attribute* FUNC_10 (struct device_attribute*) ;
 int FUNC_11 (struct device*,struct w83627ehf_data*,int) ;
 int FUNC_12 (struct w83627ehf_data*,int ,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_13(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct w83627ehf_data *VAR_5 = FUNC_1(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_10(VAR_2);
 int VAR_7 = VAR_6->index;
 unsigned long VAR_8;
 int VAR_9;
 unsigned int VAR_10;
 u8 VAR_11;

 VAR_9 = FUNC_5(VAR_3, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_6(&VAR_5->update_lock);
 if (!VAR_5->has_fan_div) {




  if (!VAR_8) {
   VAR_8 = 0xff1f;
  } else {
   if (VAR_8 > 1350000U)
    VAR_8 = 135000U;
   VAR_8 = 1350000U / VAR_8;
   VAR_8 = (VAR_8 & 0x1f) | ((VAR_8 << 3) & 0xff00);
  }
  VAR_5->fan_min[VAR_7] = VAR_8;
  goto done;
 }
 if (!VAR_8) {

  VAR_5->fan_min[VAR_7] = 255;
  VAR_11 = VAR_5->fan_div[VAR_7];
  FUNC_2(VAR_1, "fan%u low limit and alarm disabled\n", VAR_7 + 1);
 } else if ((VAR_10 = 1350000U / VAR_8) >= 128 * 255) {




  VAR_5->fan_min[VAR_7] = 254;
  VAR_11 = 7;
  FUNC_3(VAR_1,
    "fan%u low limit %lu below minimum %u, set to minimum\n",
    VAR_7 + 1, VAR_8, VAR_5->fan_from_reg_min(254, 7));
 } else if (!VAR_10) {




  VAR_5->fan_min[VAR_7] = 1;
  VAR_11 = 0;
  FUNC_3(VAR_1,
    "fan%u low limit %lu above maximum %u, set to maximum\n",
    VAR_7 + 1, VAR_8, VAR_5->fan_from_reg_min(1, 0));
 } else {





  VAR_11 = 0;
  while (VAR_10 > 192 && VAR_11 < 7) {
   VAR_10 >>= 1;
   VAR_11++;
  }
  VAR_5->fan_min[VAR_7] = VAR_10;
 }





 if (VAR_11 != VAR_5->fan_div[VAR_7]) {
  FUNC_0(VAR_1, "fan%u clock divider changed from %u to %u\n",
   VAR_7 + 1, FUNC_4(VAR_5->fan_div[VAR_7]),
   FUNC_4(VAR_11));
  VAR_5->fan_div[VAR_7] = VAR_11;
  FUNC_11(VAR_1, VAR_5, VAR_7);

  VAR_5->last_updated = VAR_0;
 }
done:
 FUNC_12(VAR_5, VAR_5->REG_FAN_MIN[VAR_7],
         VAR_5->fan_min[VAR_7]);
 FUNC_7(&VAR_5->update_lock);

 return VAR_4;
}
