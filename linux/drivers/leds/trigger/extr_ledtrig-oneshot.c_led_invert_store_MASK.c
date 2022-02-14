
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oneshot_trig_data {int invert; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (struct led_classdev*,int ) ;
 struct oneshot_trig_data* FUNC_2 (struct device*) ;
 struct led_classdev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_3(VAR_2);
 struct oneshot_trig_data *VAR_7 = FUNC_2(VAR_2);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7->invert = !!VAR_8;

 if (VAR_7->invert)
  FUNC_1(VAR_6, VAR_0);
 else
  FUNC_1(VAR_6, VAR_1);

 return VAR_5;
}
