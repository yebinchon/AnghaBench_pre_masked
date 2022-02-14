
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int** temp; int config5; int alarms; int lock; } ;
typedef int ssize_t ;
typedef int s8 ;



 int VAR_0 ;


 scalar_t__ FUNC_0 (struct adt7475_data*) ;

 int FUNC_1 (struct adt7475_data*) ;
 size_t VAR_1 ;
 struct adt7475_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adt7475_data*,int) ;
 int FUNC_6 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct adt7475_data *VAR_5 = FUNC_2(VAR_2);
 struct sensor_device_attribute_2 *VAR_6 = FUNC_7(VAR_3);
 int VAR_7;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 switch (VAR_6->nr) {
 case 129:
  FUNC_3(&VAR_5->lock);
  VAR_7 = VAR_5->temp[VAR_6->nr][VAR_6->index];
  if (VAR_6->index != 1)
   VAR_7 = (VAR_7 >> 4) & 0xF;
  else
   VAR_7 = (VAR_7 & 0xF);




  VAR_7 = FUNC_5(VAR_5, VAR_5->temp[VAR_1][VAR_6->index]) -
   VAR_7 * 1000;
  FUNC_4(&VAR_5->lock);
  break;

 case 128:




  FUNC_3(&VAR_5->lock);
  VAR_7 = (s8)VAR_5->temp[VAR_6->nr][VAR_6->index];
  if (VAR_5->config5 & VAR_0)
   VAR_7 *= 1000;
  else
   VAR_7 *= 500;
  FUNC_4(&VAR_5->lock);
  break;

 case 131:
  VAR_7 = (VAR_5->alarms >> (VAR_6->index + 4)) & 1;
  break;

 case 130:

  VAR_7 = !!(VAR_5->alarms & (VAR_6->index ? 0x8000 : 0x4000));
  break;

 default:

  VAR_7 = FUNC_5(VAR_5, VAR_5->temp[VAR_6->nr][VAR_6->index]);
 }

 return FUNC_6(VAR_4, "%d\n", VAR_7);
}
