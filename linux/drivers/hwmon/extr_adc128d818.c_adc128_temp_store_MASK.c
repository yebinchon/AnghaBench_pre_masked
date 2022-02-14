
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adc128_data {int* temp; int update_lock; int client; } ;
typedef int ssize_t ;
typedef int s8 ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,int) ;
 int FUNC_1 (int ,int,int) ;
 struct adc128_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct adc128_data *VAR_6 = FUNC_2(VAR_2);
 int VAR_7 = FUNC_7(VAR_3)->index;
 long VAR_8;
 int VAR_9;
 s8 VAR_10;

 VAR_9 = FUNC_4(VAR_4, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_5(&VAR_6->update_lock);
 VAR_10 = FUNC_1(FUNC_0(VAR_8, 1000), -128, 127);
 VAR_6->temp[VAR_7] = VAR_10 << 1;
 FUNC_3(VAR_6->client,
      VAR_7 == 1 ? VAR_1
          : VAR_0,
      VAR_10);
 FUNC_6(&VAR_6->update_lock);

 return VAR_5;
}
