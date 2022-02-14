
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {int* fan_div; int* fan_min; int update_lock; scalar_t__ valid; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 struct adm1031_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
        struct device_attribute *VAR_2, const char *VAR_3,
        size_t VAR_4)
{
 struct adm1031_data *VAR_5 = FUNC_5(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = FUNC_9(VAR_2)->index;
 long VAR_8;
 u8 VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_6(VAR_3, 10, &VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_9 = VAR_8 == 8 ? 0xc0 :
       VAR_8 == 4 ? 0x80 :
       VAR_8 == 2 ? 0x40 :
       VAR_8 == 1 ? 0x00 :
       0xff;
 if (VAR_9 == 0xff)
  return -VAR_0;

 FUNC_7(&VAR_5->update_lock);

 VAR_5->fan_div[VAR_7] = FUNC_3(VAR_6,
            FUNC_0(VAR_7));
 VAR_5->fan_min[VAR_7] = FUNC_3(VAR_6,
            FUNC_1(VAR_7));


 VAR_10 = FUNC_2(VAR_5->fan_div[VAR_7]);
 VAR_5->fan_div[VAR_7] = VAR_9 | (0x3f & VAR_5->fan_div[VAR_7]);
 VAR_11 = VAR_5->fan_min[VAR_7] * VAR_10 / VAR_8;
 VAR_5->fan_min[VAR_7] = VAR_11 > 0xff ? 0xff : VAR_11;

 FUNC_4(VAR_6, FUNC_0(VAR_7),
       VAR_5->fan_div[VAR_7]);
 FUNC_4(VAR_6, FUNC_1(VAR_7),
       VAR_5->fan_min[VAR_7]);


 VAR_5->valid = 0;
 FUNC_8(&VAR_5->update_lock);
 return VAR_4;
}
