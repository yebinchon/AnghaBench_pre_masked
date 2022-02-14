
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {int update_lock; int ** temp; int ** reg_temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nct6775_data*,int ,int ) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2,
    size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_6(VAR_1);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 int VAR_8;
 long VAR_9;

 VAR_8 = FUNC_2(VAR_2, 10, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_3(&VAR_4->update_lock);
 VAR_4->temp[VAR_7][VAR_6] = FUNC_0(VAR_9);
 FUNC_5(VAR_4, VAR_4->reg_temp[VAR_7][VAR_6],
      VAR_4->temp[VAR_7][VAR_6]);
 FUNC_4(&VAR_4->update_lock);
 return VAR_3;
}
