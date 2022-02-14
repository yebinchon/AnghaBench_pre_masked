
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 struct device* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 struct device *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_2(&VAR_2->kobj, &VAR_0))
  FUNC_1("Failed to create group for CPU%d\n", VAR_1);
 return 0;
}
