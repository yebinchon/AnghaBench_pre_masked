
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 if (!VAR_2)
  return 0;
 FUNC_0(VAR_3, &VAR_0);
 return FUNC_1(&VAR_3->kobj, &VAR_1);
}
