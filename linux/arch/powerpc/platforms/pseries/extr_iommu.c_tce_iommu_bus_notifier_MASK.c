
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;



 int FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_0,
  unsigned long VAR_1, void *VAR_2)
{
 struct device *VAR_3 = VAR_2;

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_3);
  return 0;
 default:
  return 0;
 }
}
