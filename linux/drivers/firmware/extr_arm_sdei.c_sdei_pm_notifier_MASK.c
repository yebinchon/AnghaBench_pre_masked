
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_2, unsigned long VAR_3,
       void *VAR_4)
{
 int VAR_5;

 switch (VAR_3) {
 case 130:
  VAR_5 = FUNC_1();
  break;
 case 128:
 case 129:
  VAR_5 = FUNC_2();
  break;
 default:
  return VAR_0;
 }

 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_1;
}
