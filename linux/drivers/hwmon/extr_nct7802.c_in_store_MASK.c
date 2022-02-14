
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct nct7802_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nct7802_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct nct7802_data*,int,int,unsigned long) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_3(VAR_1);
 struct nct7802_data *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = VAR_4->index;
 int VAR_7 = VAR_4->nr;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_7, VAR_6, VAR_8);
 return VAR_9 ? : VAR_3;
}
