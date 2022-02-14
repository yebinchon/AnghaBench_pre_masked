
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int xTilt; } ;
struct aiptek {TYPE_1__ newSetting; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct aiptek* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,int*) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct aiptek *VAR_8 = FUNC_0(VAR_4);
 int VAR_9;

 if (FUNC_1(VAR_6, 10, &VAR_9)) {
  size_t VAR_10 = VAR_6[VAR_7 - 1] == '\n' ? VAR_7 - 1 : VAR_7;

  if (FUNC_2(VAR_6, "disable", VAR_10))
   return -VAR_3;

  VAR_8->newSetting.xTilt = VAR_0;
 } else {
  if (VAR_9 < VAR_2 || VAR_9 > VAR_1)
   return -VAR_3;

  VAR_8->newSetting.xTilt = VAR_9;
 }

 return VAR_7;
}
