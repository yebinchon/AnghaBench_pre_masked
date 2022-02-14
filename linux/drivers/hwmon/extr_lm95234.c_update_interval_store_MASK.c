
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm95234_data {int update_lock; int client; int interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lm95234_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct lm95234_data*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned long* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct lm95234_data *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8;
 u8 VAR_9;

 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, 10, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  if (VAR_8 <= VAR_1[VAR_9])
   break;
 }

 FUNC_5(&VAR_6->update_lock);
 VAR_6->interval = FUNC_4(VAR_1[VAR_9]);
 FUNC_1(VAR_6->client, VAR_0, VAR_9);
 FUNC_6(&VAR_6->update_lock);

 return VAR_5;
}
