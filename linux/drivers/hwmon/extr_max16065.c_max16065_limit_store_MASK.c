
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; size_t nr; } ;
struct max16065_data {int update_lock; int client; int * range; int ** limit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (unsigned long,int ) ;
 struct max16065_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_8(VAR_1);
 struct max16065_data *VAR_5 = FUNC_3(VAR_0);
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_2, 10, &VAR_6);
 if (FUNC_9(VAR_7 < 0))
  return VAR_7;

 VAR_8 = FUNC_2(VAR_6, VAR_5->range[VAR_4->index]);

 FUNC_6(&VAR_5->update_lock);
 VAR_5->limit[VAR_4->nr][VAR_4->index]
   = FUNC_0(VAR_8, VAR_5->range[VAR_4->index]);
 FUNC_4(VAR_5->client,
      FUNC_1(VAR_4->nr, VAR_4->index),
      VAR_8);
 FUNC_7(&VAR_5->update_lock);

 return VAR_3;
}
