
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long alarms_mask; int lock; int client; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,long) ;
 struct adt7470_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int ,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct adt7470_data *VAR_6 = FUNC_1(VAR_2);
 long VAR_7;

 if (FUNC_2(VAR_4, 0, &VAR_7))
  return -VAR_1;

 if (VAR_7 & ~0xffff)
  return -VAR_1;

 FUNC_3(&VAR_6->lock);
 VAR_6->alarms_mask = VAR_7;
 FUNC_0(VAR_6->client, VAR_0, VAR_7);
 FUNC_4(&VAR_6->lock);

 return VAR_5;
}
