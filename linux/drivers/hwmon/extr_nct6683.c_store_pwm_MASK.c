
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; } ;
struct nct6683_data {int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct nct6683_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nct6683_data*,int ,unsigned long) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6,
   size_t VAR_7)
{
 struct sensor_device_attribute_2 *VAR_8 = FUNC_6(VAR_5);
 struct nct6683_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10 = VAR_8->index;
 unsigned long VAR_11;

 if (FUNC_2(VAR_6, 10, &VAR_11) || VAR_11 > 255)
  return -VAR_0;

 FUNC_3(&VAR_9->update_lock);
 FUNC_5(VAR_9, VAR_3, VAR_2);
 FUNC_7(1000, 2000);
 FUNC_5(VAR_9, FUNC_0(VAR_10), VAR_11);
 FUNC_5(VAR_9, VAR_3, VAR_1);
 FUNC_4(&VAR_9->update_lock);

 return VAR_7;
}
