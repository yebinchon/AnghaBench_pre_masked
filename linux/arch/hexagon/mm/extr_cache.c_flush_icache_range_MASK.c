
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;

void FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_2(VAR_1, VAR_2-1);
 unsigned long VAR_4, VAR_5;

 VAR_1 &= ~(VAR_0 - 1);

 FUNC_1(VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  __asm__ __volatile__ (
   "	dccleana(%0); "
   "	icinva(%0);	"
   :
   : "r" (VAR_1)
  );
  VAR_1 += VAR_0;
 }
 __asm__ __volatile__ (
  "isync"
 );
 FUNC_0(VAR_5);
}
