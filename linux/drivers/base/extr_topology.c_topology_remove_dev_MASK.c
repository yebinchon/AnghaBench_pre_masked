
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 struct device* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1)
{
 struct device *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->kobj, &VAR_0);
 return 0;
}
