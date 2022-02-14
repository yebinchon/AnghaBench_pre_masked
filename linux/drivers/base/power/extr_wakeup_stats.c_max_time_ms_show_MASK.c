
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {scalar_t__ max_time; int last_time; scalar_t__ active; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ ktime_t ;


 struct wakeup_source* FUNC_0 (struct device*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct wakeup_source *VAR_3 = FUNC_0(VAR_0);
 ktime_t VAR_4;
 ktime_t VAR_5 = VAR_3->max_time;

 if (VAR_3->active) {
  VAR_4 = FUNC_2(FUNC_1(), VAR_3->last_time);
  if (VAR_4 > VAR_5)
   VAR_5 = VAR_4;
 }
 return FUNC_4(VAR_2, "%lld\n", FUNC_3(VAR_5));
}
