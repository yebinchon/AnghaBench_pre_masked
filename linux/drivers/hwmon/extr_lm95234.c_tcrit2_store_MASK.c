
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm95234_data {long* tcrit2; int update_lock; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (long,int) ;
 int FUNC_1 (int) ;
 long FUNC_2 (int ,int ,int) ;
 struct lm95234_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,long) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (struct lm95234_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct lm95234_data *VAR_4 = FUNC_3(VAR_0);
 int VAR_5 = FUNC_9(VAR_1)->index;
 long VAR_6;
 int VAR_7 = FUNC_6(VAR_4);

 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_2, 10, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_2(FUNC_0(VAR_6, 1000), 0, VAR_5 ? 255 : 127);

 FUNC_7(&VAR_4->update_lock);
 VAR_4->tcrit2[VAR_5] = VAR_6;
 FUNC_4(VAR_4->client, FUNC_1(VAR_5), VAR_6);
 FUNC_8(&VAR_4->update_lock);

 return VAR_3;
}
