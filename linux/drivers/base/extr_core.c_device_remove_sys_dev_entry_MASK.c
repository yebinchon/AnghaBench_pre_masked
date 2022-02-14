
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct device {int devt; } ;


 struct kobject* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct kobject*,char*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct kobject *VAR_1 = FUNC_0(VAR_0);
 char VAR_2[15];

 if (VAR_1) {
  FUNC_1(VAR_2, VAR_0->devt);
  FUNC_2(VAR_1, VAR_2);
 }
}
