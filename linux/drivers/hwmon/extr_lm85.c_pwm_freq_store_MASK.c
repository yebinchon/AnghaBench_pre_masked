
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm85_data {scalar_t__ type; int cfg5; int* pwm_freq; int update_lock; TYPE_1__* zone; int freq_map_size; int freq_map; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 struct lm85_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
         struct device_attribute *VAR_4, const char *VAR_5,
         size_t VAR_6)
{
 int VAR_7 = FUNC_7(VAR_4)->index;
 struct lm85_data *VAR_8 = FUNC_2(VAR_3);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_5, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_8->update_lock);





 if (VAR_8->type == VAR_2 && VAR_10 >= 11300) {
  VAR_8->cfg5 &= ~VAR_0;
  FUNC_4(VAR_9, VAR_1, VAR_8->cfg5);
 } else {
  VAR_8->pwm_freq[VAR_7] = FUNC_0(VAR_8->freq_map,
       VAR_8->freq_map_size, VAR_10);
  FUNC_4(VAR_9, FUNC_1(VAR_7),
     (VAR_8->zone[VAR_7].range << 4)
     | VAR_8->pwm_freq[VAR_7]);
  if (VAR_8->type == VAR_2) {
   VAR_8->cfg5 |= VAR_0;
   FUNC_4(VAR_9, VAR_1, VAR_8->cfg5);
  }
 }
 FUNC_6(&VAR_8->update_lock);
 return VAR_6;
}
