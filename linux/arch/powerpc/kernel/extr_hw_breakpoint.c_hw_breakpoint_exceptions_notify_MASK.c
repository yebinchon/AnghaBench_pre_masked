
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

int FUNC_2(
  struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 int VAR_4 = VAR_0;

 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_3);
  break;
 }

 return VAR_4;
}
