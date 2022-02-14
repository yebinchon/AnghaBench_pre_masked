
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int start_prevent_time; scalar_t__ autosleep_enabled; scalar_t__ active; int prevent_sleep_time; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int ktime_t ;


 struct wakeup_source* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct wakeup_source *VAR_3 = FUNC_0(VAR_0);
 ktime_t VAR_4 = VAR_3->prevent_sleep_time;

 if (VAR_3->active && VAR_3->autosleep_enabled) {
  VAR_4 = FUNC_1(VAR_4,
   FUNC_3(FUNC_2(), VAR_3->start_prevent_time));
 }
 return FUNC_5(VAR_2, "%lld\n", FUNC_4(VAR_4));
}
