
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct opal_msg {int * params; } ;
struct notifier_block {int dummy; } ;







 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_0,
     unsigned long VAR_1, void *VAR_2)
{
 uint64_t VAR_3;

 switch (VAR_1) {
 case 131:
  if (FUNC_1()) {
   FUNC_5("EPOW msg received. Powering off system\n");
   FUNC_2(1);
  }
  break;
 case 132:
  FUNC_5("DPO msg received. Powering off system\n");
  FUNC_2(1);
  break;
 case 130:
  VAR_3 = FUNC_0(((struct opal_msg *)VAR_2)->params[0]);
  switch (VAR_3) {
  case 128:
   FUNC_5("Reboot requested\n");
   FUNC_3();
   break;
  case 129:
   FUNC_5("Poweroff requested\n");
   FUNC_2(1);
   break;
  default:
   FUNC_4("Unknown power-control type %llu\n", VAR_3);
  }
  break;
 default:
  FUNC_4("Unknown OPAL message type %lu\n", VAR_1);
 }

 return 0;
}
