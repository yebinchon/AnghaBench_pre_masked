
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm80_data {int update_lock; int ** in; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct lm80_data* FUNC_3 (struct device*) ;
 int VAR_0 ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct lm80_data *VAR_5 = FUNC_3(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = FUNC_8(VAR_2)->index;
 int VAR_8 = FUNC_8(VAR_2)->nr;
 long VAR_9;
 u8 VAR_10;
 int VAR_11 = FUNC_4(VAR_3, 10, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = VAR_8 == VAR_0 ? FUNC_2(VAR_7) : FUNC_1(VAR_7);

 FUNC_6(&VAR_5->update_lock);
 VAR_5->in[VAR_8][VAR_7] = FUNC_0(VAR_9);
 FUNC_5(VAR_6, VAR_10, VAR_5->in[VAR_8][VAR_7]);
 FUNC_7(&VAR_5->update_lock);
 return VAR_4;
}
