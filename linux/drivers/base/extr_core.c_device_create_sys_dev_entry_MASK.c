
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct device {int kobj; int devt; } ;


 struct kobject* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct kobject*,int *,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct kobject *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;
 char VAR_3[15];

 if (VAR_1) {
  FUNC_1(VAR_3, VAR_0->devt);
  VAR_2 = FUNC_2(VAR_1, &VAR_0->kobj, VAR_3);
 }

 return VAR_2;
}
