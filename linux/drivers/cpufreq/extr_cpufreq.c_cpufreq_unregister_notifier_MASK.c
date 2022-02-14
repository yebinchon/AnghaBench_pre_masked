
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct notifier_block*) ;

int FUNC_6(struct notifier_block *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 if (FUNC_2())
  return -VAR_0;

 switch (VAR_6) {
 case 128:
  FUNC_3(&VAR_2);

  VAR_7 = FUNC_5(
    &VAR_4, VAR_5);
  if (!VAR_7 && !FUNC_0(VAR_1 >= 0))
   VAR_1++;

  FUNC_4(&VAR_2);
  break;
 case 129:
  VAR_7 = FUNC_1(
    &VAR_3, VAR_5);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
