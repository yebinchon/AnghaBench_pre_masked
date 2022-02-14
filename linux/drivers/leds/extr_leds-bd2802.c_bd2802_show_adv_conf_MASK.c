
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bd2802_led {int rwsem; scalar_t__ adf_on; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 struct bd2802_led* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct bd2802_led *VAR_3 = FUNC_1(FUNC_3(VAR_0));
 ssize_t VAR_4;

 FUNC_0(&VAR_3->rwsem);
 if (VAR_3->adf_on)
  VAR_4 = FUNC_2(VAR_2, "on\n");
 else
  VAR_4 = FUNC_2(VAR_2, "off\n");
 FUNC_4(&VAR_3->rwsem);

 return VAR_4;
}
