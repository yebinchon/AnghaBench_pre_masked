
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm95234_data {long thyst; int update_lock; int client; scalar_t__* tcrit1; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 long FUNC_0 (long,int) ;
 int VAR_0 ;
 long FUNC_1 (int,int ,int) ;
 struct lm95234_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (struct lm95234_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct lm95234_data *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = FUNC_8(VAR_2)->index;
 int VAR_7 = FUNC_5(VAR_5);
 long VAR_8;

 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_3, 10, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_0(VAR_8, 1000);
 VAR_8 = FUNC_1((int)VAR_5->tcrit1[VAR_6] - VAR_8, 0, 31);

 FUNC_6(&VAR_5->update_lock);
 VAR_5->thyst = VAR_8;
 FUNC_3(VAR_5->client, VAR_0, VAR_8);
 FUNC_7(&VAR_5->update_lock);

 return VAR_4;
}
