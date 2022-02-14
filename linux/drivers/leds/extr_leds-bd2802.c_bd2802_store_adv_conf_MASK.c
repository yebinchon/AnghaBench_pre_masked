
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bd2802_led {int rwsem; scalar_t__ adf_on; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct bd2802_led*) ;
 int FUNC_1 (struct bd2802_led*) ;
 int FUNC_2 (int *) ;
 struct bd2802_led* FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct bd2802_led *VAR_5 = FUNC_3(FUNC_5(VAR_1));

 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_5->rwsem);
 if (!VAR_5->adf_on && !FUNC_4(VAR_3, "on", 2))
  FUNC_1(VAR_5);
 else if (VAR_5->adf_on && !FUNC_4(VAR_3, "off", 3))
  FUNC_0(VAR_5);
 FUNC_6(&VAR_5->rwsem);

 return VAR_4;
}
