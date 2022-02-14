
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {size_t* pwm_trange; int* pwm_tmin; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 struct adt7462_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;
 int* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_2(VAR_3);
 struct adt7462_data *VAR_6 = FUNC_0(VAR_2);


 int VAR_7 = VAR_1[VAR_6->pwm_trange[VAR_5->index] >>
       VAR_0];
 int VAR_8 = (VAR_6->pwm_tmin[VAR_5->index] - 64) * 1000;

 return FUNC_1(VAR_4, "%d\n", VAR_8 + VAR_7);
}
