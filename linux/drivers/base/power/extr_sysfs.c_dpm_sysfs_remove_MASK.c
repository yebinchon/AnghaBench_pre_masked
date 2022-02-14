
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct device *VAR_3)
{
 if (FUNC_1(VAR_3))
  return;
 FUNC_4(&VAR_3->kobj, &VAR_1);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 FUNC_4(&VAR_3->kobj, &VAR_2);
 FUNC_3(&VAR_3->kobj, &VAR_0);
}
