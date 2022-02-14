
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct lm85_data {int update_lock; TYPE_1__* autofan; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int config; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct lm85_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_7(VAR_2)->index;
 struct lm85_data *VAR_6 = FUNC_1(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch (VAR_9) {
 case 0:
  VAR_8 = 3;
  break;
 case 1:
  VAR_8 = 7;
  break;
 case 2:




  VAR_8 = 6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(&VAR_6->update_lock);
 VAR_6->autofan[VAR_5].config = FUNC_3(VAR_7,
  FUNC_0(VAR_5));
 VAR_6->autofan[VAR_5].config = (VAR_6->autofan[VAR_5].config & ~0xe0)
  | (VAR_8 << 5);
 FUNC_4(VAR_7, FUNC_0(VAR_5),
  VAR_6->autofan[VAR_5].config);
 FUNC_6(&VAR_6->update_lock);
 return VAR_4;
}
