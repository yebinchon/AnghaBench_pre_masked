
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm93_data {int* vccp_limits; int update_lock; TYPE_1__* block7; int * vid; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int max; } ;


 int FUNC_0 (unsigned long,int,long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 long FUNC_4 (int ) ;
 struct lm93_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (struct device_attribute*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = (FUNC_10(VAR_2))->index;
 struct lm93_data *VAR_6 = FUNC_5(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = VAR_5 - 6;
 long VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_3, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_8(&VAR_6->update_lock);
 if ((VAR_5 == 6 || VAR_5 == 7) && VAR_0[VAR_8]) {
  VAR_9 = FUNC_4(VAR_6->vid[VAR_8]);
  VAR_6->vccp_limits[VAR_8] = (VAR_6->vccp_limits[VAR_8] & 0x0f) |
    FUNC_0(VAR_10, 1, VAR_9);
  FUNC_7(VAR_7, FUNC_3(VAR_8),
    VAR_6->vccp_limits[VAR_8]);
 } else {
  VAR_6->block7[VAR_5].max = FUNC_1(VAR_5, VAR_10);
  FUNC_7(VAR_7, FUNC_2(VAR_5),
    VAR_6->block7[VAR_5].max);
 }
 FUNC_9(&VAR_6->update_lock);
 return VAR_4;
}
