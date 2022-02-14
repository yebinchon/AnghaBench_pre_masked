
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct TYPE_2__ {int use_autosuspend; } ;
struct device {TYPE_1__ power; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (struct device*,long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 long VAR_6;

 if (!VAR_2->power.use_autosuspend)
  return -VAR_1;

 if (FUNC_2(VAR_4, 10, &VAR_6) != 0 || VAR_6 != (int) VAR_6)
  return -VAR_0;

 FUNC_0(VAR_2);
 FUNC_3(VAR_2, VAR_6);
 FUNC_1(VAR_2);
 return VAR_5;
}
