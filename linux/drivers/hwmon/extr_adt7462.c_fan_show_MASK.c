
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int * fan; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct adt7462_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct adt7462_data*,size_t) ;
 int FUNC_4 (char*,char*,...) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_5(VAR_1);
 struct adt7462_data *VAR_4 = FUNC_2(VAR_0);

 if (!FUNC_3(VAR_4, VAR_3->index) ||
     !FUNC_0(VAR_4->fan[VAR_3->index]))
  return FUNC_4(VAR_2, "0\n");

 return FUNC_4(VAR_2, "%d\n",
         FUNC_1(VAR_4->fan[VAR_3->index]));
}
