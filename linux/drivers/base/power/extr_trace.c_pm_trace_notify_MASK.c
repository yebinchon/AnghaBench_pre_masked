
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 switch (VAR_2) {
 case 129:
 case 128:
  if (VAR_0) {
   VAR_0 = 0;
   FUNC_0("Possible incorrect RTC due to pm_trace, please use 'ntpdate' or 'rdate' to reset it.\n");
  }
  break;
 default:
  break;
 }
 return 0;
}
