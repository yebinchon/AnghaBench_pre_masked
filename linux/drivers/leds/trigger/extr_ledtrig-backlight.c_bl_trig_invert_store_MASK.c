
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bl_trig_notifier {unsigned long invert; scalar_t__ old_status; int brightness; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (struct led_classdev*,int ) ;
 struct bl_trig_notifier* FUNC_2 (struct device*) ;
 struct led_classdev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct led_classdev *VAR_7 = FUNC_3(VAR_3);
 struct bl_trig_notifier *VAR_8 = FUNC_2(VAR_3);
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_5, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9 > 1)
  return -VAR_1;

 VAR_8->invert = VAR_9;


 if ((VAR_8->old_status == VAR_0) ^ VAR_8->invert)
  FUNC_1(VAR_7, VAR_2);
 else
  FUNC_1(VAR_7, VAR_8->brightness);

 return VAR_6;
}
