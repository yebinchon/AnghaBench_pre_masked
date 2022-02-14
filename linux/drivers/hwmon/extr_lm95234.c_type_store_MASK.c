
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm95234_data {int valid; int update_lock; int sensor_type; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm95234_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct lm95234_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct lm95234_data *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 u8 VAR_8 = FUNC_6(VAR_3)->index;
 int VAR_9 = FUNC_3(VAR_6);

 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_4, 10, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7 != 1 && VAR_7 != 2)
  return -VAR_0;

 FUNC_4(&VAR_6->update_lock);
 if (VAR_7 == 1)
  VAR_6->sensor_type |= VAR_8;
 else
  VAR_6->sensor_type &= ~VAR_8;
 VAR_6->valid = 0;
 FUNC_1(VAR_6->client, VAR_1,
      VAR_6->sensor_type);
 FUNC_5(&VAR_6->update_lock);

 return VAR_5;
}
