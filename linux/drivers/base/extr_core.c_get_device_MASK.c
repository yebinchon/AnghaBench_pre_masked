
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 struct device* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

struct device *FUNC_2(struct device *VAR_0)
{
 return VAR_0 ? FUNC_0(FUNC_1(&VAR_0->kobj)) : ((void*)0);
}
