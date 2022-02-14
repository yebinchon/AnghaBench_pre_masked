
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int** block9; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int,size_t) ;
 struct lm93_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = (FUNC_8(VAR_5))->index;
 struct lm93_data *VAR_9 = FUNC_2(VAR_4);
 struct i2c_client *VAR_10 = VAR_9->client;
 u8 VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_6, 10, &VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_6(&VAR_9->update_lock);
 VAR_11 = FUNC_4(VAR_10, FUNC_1(VAR_8, VAR_0));
 VAR_12 = FUNC_4(VAR_10, FUNC_1(VAR_8, VAR_1));
 VAR_11 = (VAR_11 & 0xf0) | FUNC_0(VAR_13, (VAR_12 & 0x07) ?
   VAR_3 :
   VAR_2);
 VAR_9->block9[VAR_8][VAR_0] = VAR_11;
 FUNC_5(VAR_10, FUNC_1(VAR_8, VAR_0), VAR_11);
 FUNC_7(&VAR_9->update_lock);
 return VAR_7;
}
