
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mpbroadcast; int mpstatus; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2)
{
 int VAR_3 =
     ((FUNC_1(&(VAR_1->mpstatus)) >>
       VAR_0) & 1);
 if (!VAR_3) {
  FUNC_4("######## !!!! The irqmp-ctrl must have broadcast enabled, smp wont work !!!!! ####### nr cpus: %d\n",
       FUNC_3());
  if (FUNC_3() > 1) {
   FUNC_0();
  } else {
   FUNC_4("continue anyway\n");
   return;
  }
 }
 FUNC_2(&(VAR_1->mpbroadcast), VAR_2);
}
