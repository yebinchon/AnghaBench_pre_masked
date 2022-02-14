
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct TYPE_2__ {int autosuspend_delay; int use_autosuspend; } ;
struct device {TYPE_1__ power; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 if (!VAR_1->power.use_autosuspend)
  return -VAR_0;
 return FUNC_0(VAR_3, "%d\n", VAR_1->power.autosuspend_delay);
}
