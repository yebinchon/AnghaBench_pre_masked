
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int vio; } ;
struct device {int kobj; } ;


 struct tsc200x* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;

int FUNC_3(struct device *VAR_1)
{
 struct tsc200x *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_1->kobj, &VAR_0);

 FUNC_1(VAR_2->vio);

 return 0;
}
