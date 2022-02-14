
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct notifier_block*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct notifier_block*) ;

int FUNC_5(struct notifier_block *VAR_6, unsigned int VAR_7)
{
 int VAR_8;

 if (FUNC_1())
  return -VAR_1;

 switch (VAR_7) {
 case 128:
  FUNC_2(&VAR_3);

  if (VAR_2 > 0) {
   FUNC_3(&VAR_3);
   return -VAR_0;
  }
  VAR_8 = FUNC_4(
    &VAR_5, VAR_6);
  if (!VAR_8)
   VAR_2--;

  FUNC_3(&VAR_3);
  break;
 case 129:
  VAR_8 = FUNC_0(
    &VAR_4, VAR_6);
  break;
 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
