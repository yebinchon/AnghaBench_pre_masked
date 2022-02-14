
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct emc6w201_data {unsigned long** fan; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 unsigned long FUNC_0 (unsigned int,unsigned long) ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long,int ,int) ;
 struct emc6w201_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ,unsigned long) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct emc6w201_data *VAR_4 = FUNC_3(VAR_0);
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6 = FUNC_8(VAR_1)->index;
 int VAR_7 = FUNC_8(VAR_1)->nr;
 int VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_5(VAR_2, 10, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9 == 0) {
  VAR_9 = 0xFFFF;
 } else {
  VAR_9 = FUNC_0(5400000U, VAR_9);
  VAR_9 = FUNC_2(VAR_9, 0, 0xFFFE);
 }

 FUNC_6(&VAR_4->update_lock);
 VAR_4->fan[VAR_6][VAR_7] = VAR_9;
 VAR_8 = FUNC_4(VAR_5, FUNC_1(VAR_7),
          VAR_4->fan[VAR_6][VAR_7]);
 FUNC_7(&VAR_4->update_lock);

 return VAR_8 < 0 ? VAR_8 : VAR_3;
}
