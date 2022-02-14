
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7x10_data {int hyst; int * temp; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adt7x10_data*,int ) ;
 int VAR_0 ;
 struct adt7x10_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct adt7x10_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_4->index;
 int VAR_7;

 VAR_7 = (VAR_5->hyst & VAR_0) * 1000;





 if (VAR_6 == 2)
  VAR_7 = -VAR_7;
 return FUNC_2(VAR_3, "%d\n",
         FUNC_0(VAR_5, VAR_5->temp[VAR_6]) - VAR_7);
}
