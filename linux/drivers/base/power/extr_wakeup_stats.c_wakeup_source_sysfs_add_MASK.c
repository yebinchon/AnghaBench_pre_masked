
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct device*,struct wakeup_source*) ;

int FUNC_3(struct device *VAR_0, struct wakeup_source *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_1->dev = VAR_2;

 return 0;
}
