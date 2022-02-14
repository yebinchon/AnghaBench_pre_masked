
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;




 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_0, unsigned long VAR_1,
    void *VAR_2)
{
 struct device *VAR_3 = VAR_2;

 switch (VAR_1) {
 case 129:
  return FUNC_0(VAR_3, ((void*)0));
 case 128:
  return FUNC_1(VAR_3, ((void*)0));
 }

 return 0;
}
