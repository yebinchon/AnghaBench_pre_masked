
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct wakeup_source*) ;
 struct wakeup_source* FUNC_2 (char const*) ;
 int FUNC_3 (struct wakeup_source*) ;
 int FUNC_4 (struct device*,struct wakeup_source*) ;

struct wakeup_source *FUNC_5(struct device *VAR_0,
          const char *VAR_1)
{
 struct wakeup_source *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  if (!VAR_0 || FUNC_0(VAR_0)) {
   VAR_3 = FUNC_4(VAR_0, VAR_2);
   if (VAR_3) {
    FUNC_3(VAR_2);
    return ((void*)0);
   }
  }
  FUNC_1(VAR_2);
 }
 return VAR_2;
}
