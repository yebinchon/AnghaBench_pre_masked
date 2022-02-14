
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ds1621_data {int conf; unsigned long update_interval; int zbits; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t s32 ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ds1621_data* FUNC_1 (struct device*) ;
 unsigned long* VAR_3 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 size_t FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct ds1621_data *VAR_8 = FUNC_1(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10;
 s32 VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_4(VAR_6, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;


 while (VAR_12 < (FUNC_0(VAR_3) - 1) &&
        VAR_10 > VAR_3[VAR_12])
  VAR_12++;

 FUNC_5(&VAR_8->update_lock);
 VAR_8->conf = FUNC_2(VAR_9, VAR_0);
 VAR_8->conf &= ~VAR_1;
 VAR_8->conf |= (VAR_12 << VAR_2);
 FUNC_3(VAR_9, VAR_0, VAR_8->conf);
 VAR_8->update_interval = VAR_3[VAR_12];
 VAR_8->zbits = 7 - VAR_12;
 FUNC_6(&VAR_8->update_lock);

 return VAR_7;
}
