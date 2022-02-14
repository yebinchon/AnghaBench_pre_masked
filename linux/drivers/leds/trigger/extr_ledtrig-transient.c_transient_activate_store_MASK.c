
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {int activate; scalar_t__ restore_state; scalar_t__ duration; scalar_t__ state; int timer; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct led_classdev*,scalar_t__) ;
 struct transient_trig_data* FUNC_3 (struct device*) ;
 struct led_classdev* FUNC_4 (struct device*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct led_classdev *VAR_8 = FUNC_4(VAR_4);
 struct transient_trig_data *VAR_9 =
  FUNC_3(VAR_4);
 unsigned long VAR_10;
 ssize_t VAR_11;

 VAR_11 = FUNC_1(VAR_6, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 != 1 && VAR_10 != 0)
  return -VAR_0;


 if (VAR_10 == 0 && VAR_9->activate == 1) {
  FUNC_0(&VAR_9->timer);
  VAR_9->activate = VAR_10;
  FUNC_2(VAR_8,
     VAR_9->restore_state);
  return VAR_7;
 }


 if (VAR_10 == 1 && VAR_9->activate == 0 &&
     VAR_9->duration != 0) {
  VAR_9->activate = VAR_10;
  FUNC_2(VAR_8, VAR_9->state);
  VAR_9->restore_state =
      (VAR_9->state == VAR_1) ? VAR_2 : VAR_1;
  FUNC_5(&VAR_9->timer,
     VAR_3 + FUNC_6(VAR_9->duration));
 }






 return VAR_7;
}
