
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc654_data {int config; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 struct tc654_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4, const char *VAR_5,
    size_t VAR_6)
{
 int VAR_7 = FUNC_5(VAR_4)->index;
 struct tc654_data *VAR_8 = FUNC_0(VAR_3);
 struct i2c_client *VAR_9 = VAR_8->client;
 u8 VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 if (FUNC_2(VAR_5, 10, &VAR_11))
  return -VAR_0;

 switch (VAR_11) {
 case 1:
  VAR_10 = 0;
  break;
 case 2:
  VAR_10 = 1;
  break;
 case 4:
  VAR_10 = 2;
  break;
 case 8:
  VAR_10 = 3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(&VAR_8->update_lock);

 VAR_8->config &= ~(0x03 << VAR_1[VAR_7]);
 VAR_8->config |= (VAR_10 << VAR_1[VAR_7]);
 VAR_12 = FUNC_1(VAR_9, VAR_2, VAR_8->config);

 FUNC_4(&VAR_8->update_lock);
 return VAR_12 < 0 ? VAR_12 : VAR_6;
}
