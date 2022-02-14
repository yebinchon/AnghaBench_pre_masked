
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sensor_device_attribute {int index; } ;
struct lm63_data {int temp2_offset; scalar_t__* temp11; scalar_t__ remote_unsigned; scalar_t__ temp11u; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__) ;
 struct lm63_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct lm63_data *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = VAR_3->index;
 int VAR_6;

 if (!VAR_5) {




  if (VAR_4->temp11u)
   VAR_6 = FUNC_0(VAR_4->temp11u);
  else
   VAR_6 = FUNC_0(VAR_4->temp11[VAR_5]);
 } else {
  if (VAR_4->remote_unsigned && VAR_5 == 2)
   VAR_6 = FUNC_0((u16)VAR_4->temp11[VAR_5]);
  else
   VAR_6 = FUNC_0(VAR_4->temp11[VAR_5]);
 }
 return FUNC_2(VAR_2, "%d\n", VAR_6 + VAR_4->temp2_offset);
}
