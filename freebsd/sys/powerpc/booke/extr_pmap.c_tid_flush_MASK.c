
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tlbtid_t ;
typedef int register_t ;





 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(tlbtid_t VAR_12)
{
 register_t VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;



 if (VAR_12 == VAR_9)
  return;

 VAR_13 = FUNC_2();
 __asm __volatile("wrteei 0");





 switch ((FUNC_3() >> 16) & 0xffff) {
 case 130:
 case 129:
 case 128:
  FUNC_5(VAR_8, VAR_12 << VAR_4);

  __asm __volatile("isync; .long 0x7c000024; isync; msync");
  __asm __volatile("wrtee %0" :: "r"(VAR_13));
  return;
 }

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
  for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {

   VAR_14 = FUNC_1(0) | FUNC_0(VAR_18);
   FUNC_5(VAR_5, VAR_14);

   VAR_16 = VAR_17 << VAR_3;
   FUNC_5(VAR_7, VAR_16);

   __asm __volatile("isync; tlbre");

   VAR_15 = FUNC_4(VAR_6);

   if (!(VAR_15 & VAR_2))
    continue;
   if (((VAR_15 & VAR_0) >> VAR_1) != VAR_12)
    continue;
   VAR_15 &= ~VAR_2;
   FUNC_5(VAR_6, VAR_15);
   __asm __volatile("isync; tlbwe; isync; msync");
  }
 __asm __volatile("wrtee %0" :: "r"(VAR_13));
}
