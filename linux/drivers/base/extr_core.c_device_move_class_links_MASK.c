
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
       struct device *VAR_1,
       struct device *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1)
  FUNC_1(&VAR_0->kobj, "device");
 if (VAR_2)
  VAR_3 = FUNC_0(&VAR_0->kobj, &VAR_2->kobj,
       "device");
 return VAR_3;
}
