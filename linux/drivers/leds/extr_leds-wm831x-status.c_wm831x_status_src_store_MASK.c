
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_status {int src; int mutex; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct led_classdev* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*) ;
 struct wm831x_status* FUNC_4 (struct led_classdev*) ;
 int FUNC_5 (struct wm831x_status*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_0(VAR_1);
 struct wm831x_status *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_0, VAR_3);
 if (VAR_7 >= 0) {
  FUNC_1(&VAR_6->mutex);
  VAR_6->src = VAR_7;
  FUNC_2(&VAR_6->mutex);
  FUNC_5(VAR_6);
 }

 return VAR_4;
}
