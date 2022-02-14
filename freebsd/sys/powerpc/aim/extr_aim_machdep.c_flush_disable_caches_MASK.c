
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int register_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

void
FUNC_6(void)
{
 register_t VAR_19;
 register_t VAR_20;
 register_t VAR_21;
 volatile uint32_t *VAR_22;
 uint32_t VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_19 = FUNC_1();
 FUNC_5();
 FUNC_3(VAR_19 & ~(VAR_13 | VAR_12));
 VAR_20 = FUNC_2(VAR_18);
 VAR_20 &= ~VAR_11;
 FUNC_4(VAR_18, VAR_20);
 FUNC_5();
 FUNC_0();
 __asm__ __volatile__("dssall; sync");
 FUNC_5();
 FUNC_0();
 __asm__ __volatile__("dcbf 0,%0" :: "r"(0));
 __asm__ __volatile__("dcbf 0,%0" :: "r"(0));
 __asm__ __volatile__("dcbf 0,%0" :: "r"(0));


 FUNC_4(VAR_17, FUNC_2(VAR_17) | 0xFF);
 FUNC_5();
 FUNC_0();

 FUNC_4(VAR_17, 0);





 VAR_22 = (volatile uint32_t *)0x00000000;
 for (VAR_24 = 0; VAR_24 < 128 * 1024; VAR_24++) {
  VAR_23 = *VAR_22;
  __asm__ __volatile__("dcbf 0,%0" :: "r"(VAR_22));
  VAR_22 += 32/sizeof(*VAR_22);
 }

 VAR_22 = (volatile uint32_t *)0xfff00000;
 VAR_25 = 0xfe;

 for (; VAR_25 != 0xff;) {
  FUNC_4(VAR_17, VAR_25);
  for (VAR_24 = 0; VAR_24 < 128; VAR_24++) {
   VAR_23 = *VAR_22;
   __asm__ __volatile__("dcbf 0,%0" :: "r"(VAR_22));
   VAR_22 += 32/sizeof(*VAR_22);
  }
  VAR_25 = ((VAR_25 << 1) | 1) & 0xff;
 }
 FUNC_4(VAR_17, 0);

 VAR_21 = FUNC_2(VAR_15);
 if (VAR_21 & VAR_2) {
  VAR_21 &= ~(VAR_5 | VAR_1);
  FUNC_4(VAR_15, VAR_21);
  FUNC_5();
  FUNC_4(VAR_15, VAR_21 | VAR_3);
  while (FUNC_2(VAR_15) & VAR_3)
   ;
  FUNC_5();
  VAR_21 &= ~VAR_2;
  FUNC_4(VAR_15, VAR_21);
  FUNC_5();
  FUNC_4(VAR_15, VAR_21 | VAR_4);
  FUNC_5();
  while (FUNC_2(VAR_15) & VAR_4)
   ;
  FUNC_5();
 }

 VAR_21 = FUNC_2(VAR_16);
 if (VAR_21 & VAR_7) {
  VAR_21 &= ~(VAR_10 | VAR_6);
  FUNC_4(VAR_16, VAR_21);
  FUNC_5();
  FUNC_4(VAR_16, VAR_21 | VAR_8);
  while (FUNC_2(VAR_16) & VAR_8)
   ;
  FUNC_5();
  VAR_21 &= ~VAR_7;
  FUNC_4(VAR_16, VAR_21);
  FUNC_5();
  FUNC_4(VAR_16, VAR_21 | VAR_9);
  FUNC_5();
  while (FUNC_2(VAR_16) & VAR_9)
   ;
  FUNC_5();
 }

 FUNC_4(VAR_14, FUNC_2(VAR_14) & ~VAR_0);
 FUNC_5();
 FUNC_0();

 FUNC_3(VAR_19);
}
