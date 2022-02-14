
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3,
     unsigned long VAR_4, void *VAR_5)
{
 unsigned int VAR_6;

 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_1();
  if (VAR_6 & VAR_0) {
   FUNC_0("JTAG probe is connected - abort suspend\n");
   return VAR_1;
  }
  return VAR_2;
 default:
  return VAR_2;
 }
}
