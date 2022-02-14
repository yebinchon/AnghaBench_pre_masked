
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_2,
      unsigned long VAR_3, void *VAR_4)
{
 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_4);
  break;
 case 130:
  FUNC_0(VAR_4);
  break;
 case 128:
  if (VAR_0 && VAR_1)
   FUNC_2();
 }
 return 0;
}
