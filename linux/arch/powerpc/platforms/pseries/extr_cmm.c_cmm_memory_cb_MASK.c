
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_2,
   unsigned long VAR_3, void *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_3) {
 case 131:
  FUNC_2(&VAR_0);
  VAR_1 = 1;
  VAR_5 = FUNC_1(VAR_4);
  break;
 case 129:
 case 133:
  FUNC_3(&VAR_0);
  FUNC_0("Memory offline operation complete.\n");
  break;
 case 130:
 case 128:
 case 132:
  break;
 }

 return FUNC_4(VAR_5);
}
