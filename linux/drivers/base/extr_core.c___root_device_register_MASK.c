
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; int release; } ;
struct root_device {struct device dev; struct module* owner; } ;
struct module_kobject {int kobj; } ;
struct module {struct module_kobject mkobj; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,char const*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct root_device*) ;
 struct root_device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *,char*) ;

struct device *FUNC_8(const char *VAR_3, struct module *VAR_4)
{
 struct root_device *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_5(sizeof(struct root_device), VAR_1);
 if (!VAR_5)
  return FUNC_0(VAR_6);

 VAR_6 = FUNC_1(&VAR_5->dev, "%s", VAR_3);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return FUNC_0(VAR_6);
 }

 VAR_5->dev.release = VAR_2;

 VAR_6 = FUNC_2(&VAR_5->dev);
 if (VAR_6) {
  FUNC_6(&VAR_5->dev);
  return FUNC_0(VAR_6);
 }
 return &VAR_5->dev;
}
