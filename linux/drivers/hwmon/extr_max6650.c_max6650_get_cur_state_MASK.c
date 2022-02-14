
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct max6650_data* devdata; } ;
struct max6650_data {unsigned long cooling_dev_state; } ;



__attribute__((used)) static int FUNC_0(struct thermal_cooling_device *VAR_0,
     unsigned long *VAR_1)
{
 struct max6650_data *VAR_2 = VAR_0->devdata;

 *VAR_1 = VAR_2->cooling_dev_state;

 return 0;
}
