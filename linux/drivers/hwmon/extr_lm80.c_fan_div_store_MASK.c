
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm80_data {int** fan; int* fan_div; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,unsigned long) ;
 struct lm80_data* FUNC_5 (struct device*) ;
 size_t VAR_2 ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_3,
        struct device_attribute *VAR_4, const char *VAR_5,
        size_t VAR_6)
{
 int VAR_7 = FUNC_11(VAR_4)->index;
 struct lm80_data *VAR_8 = FUNC_5(VAR_3);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10, VAR_11;
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_6(VAR_5, 10, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_9(&VAR_8->update_lock);
 VAR_10 = FUNC_1(VAR_8->fan[VAR_2][VAR_7],
      FUNC_0(VAR_8->fan_div[VAR_7]));

 switch (VAR_11) {
 case 1:
  VAR_8->fan_div[VAR_7] = 0;
  break;
 case 2:
  VAR_8->fan_div[VAR_7] = 1;
  break;
 case 4:
  VAR_8->fan_div[VAR_7] = 2;
  break;
 case 8:
  VAR_8->fan_div[VAR_7] = 3;
  break;
 default:
  FUNC_4(VAR_3,
   "fan_div value %ld not supported. Choose one of 1, 2, 4 or 8!\n",
   VAR_11);
  FUNC_10(&VAR_8->update_lock);
  return -VAR_0;
 }

 VAR_13 = FUNC_7(VAR_9, VAR_1);
 if (VAR_13 < 0) {
  FUNC_10(&VAR_8->update_lock);
  return VAR_13;
 }
 VAR_12 = (VAR_13 & ~(3 << (2 * (VAR_7 + 1))))
     | (VAR_8->fan_div[VAR_7] << (2 * (VAR_7 + 1)));
 FUNC_8(VAR_9, VAR_1, VAR_12);


 VAR_8->fan[VAR_2][VAR_7] = FUNC_2(VAR_10, FUNC_0(VAR_8->fan_div[VAR_7]));
 FUNC_8(VAR_9, FUNC_3(VAR_7 + 1),
    VAR_8->fan[VAR_2][VAR_7]);
 FUNC_10(&VAR_8->update_lock);

 return VAR_6;
}
