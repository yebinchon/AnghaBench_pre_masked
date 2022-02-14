
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlbsize; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
 FUNC_2();

 if (VAR_1) {
  if (VAR_1 > 1 && VAR_1 <= VAR_0.tlbsize) {
   int VAR_2 = VAR_0.tlbsize - VAR_1;
   FUNC_4(VAR_2);
   FUNC_3(VAR_2-1);
   FUNC_1("Restricting TLB to %d entries\n", VAR_1);
  } else
   FUNC_1("Ignoring invalid argument ntlb=%d\n", VAR_1);
 }

 FUNC_0();
}
