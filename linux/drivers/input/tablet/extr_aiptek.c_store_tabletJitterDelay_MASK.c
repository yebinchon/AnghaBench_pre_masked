
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int jitterDelay; } ;
struct aiptek {TYPE_1__ newSetting; } ;
typedef int ssize_t ;


 struct aiptek* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct aiptek *VAR_4 = FUNC_0(VAR_0);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2, 10, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_4->newSetting.jitterDelay = VAR_6;
 return VAR_3;
}
