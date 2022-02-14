
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83795_data {int tol_speed; int * target_speed; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83795_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83795_data *VAR_3 = FUNC_3(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_2(VAR_1);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;
 u16 VAR_7 = 0;

 switch (VAR_5) {
 case 129:
  VAR_7 = FUNC_0(VAR_3->target_speed[VAR_6]);
  break;
 case 128:
  VAR_7 = VAR_3->tol_speed;
  break;
 }

 return FUNC_1(VAR_2, "%u\n", VAR_7);
}
