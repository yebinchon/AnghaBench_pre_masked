
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rmid; } ;
struct rdtgroup {TYPE_1__ mon; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rdtgroup*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct rdtgroup*) ;

int FUNC_5(struct rdtgroup *VAR_1)
{
 int VAR_2;

 if (VAR_0) {
  VAR_2 = FUNC_0();
  if (VAR_2 < 0) {
   FUNC_3("Out of RMIDs\n");
   return VAR_2;
  }
  VAR_1->mon.rmid = VAR_2;
 }

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1->mon.rmid);
  return VAR_2;
 }

 FUNC_2(VAR_1);
 return 0;
}
