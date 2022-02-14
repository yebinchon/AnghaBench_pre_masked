
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long long uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 unsigned long long FUNC_5 (unsigned long long,int,int) ;

__attribute__((used)) static uint32_t FUNC_6(unsigned short VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned char VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 unsigned long long VAR_12, VAR_13;
 uint8_t VAR_14, VAR_15;
 int VAR_16 = 0;

 FUNC_4("Dcache index 0x%04x  ", VAR_4);
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  __asm__ __volatile__ (
  "	.set	push\n\t"
  "	.set	noreorder\n\t"
  "	.set	mips64\n\t"
  "	.set	noat\n\t"
  "	cache	5, 0(%3)\n\t"
  "	mfc0	%0, $29, 2\n\t"
  "	dmfc0	$1, $28, 2\n\t"
  "	dsrl32	%1, $1, 0\n\t"
  "	sll	%2, $1, 0\n\t"
  "	.set	pop"
  : "=r" (VAR_9), "=r" (VAR_11), "=r" (VAR_10)
  : "r" ((VAR_7 << 13) | VAR_4));

  VAR_12 = ((unsigned long long)VAR_11 << 32) | VAR_10;
  VAR_13 = (VAR_12 & 0xFFFFFFE000ULL) | VAR_4;
  if (VAR_7 == 0) {
   VAR_15 = (VAR_9 >> 14) & 0xff;
   FUNC_4("[Bank %d Set 0x%02x]  LRU > %d %d %d %d > MRU\n",
        ((VAR_4 >> 11) & 0x2) | ((VAR_4 >> 5) & 1),
        ((VAR_4 >> 6) & 0x3f),
        (VAR_15 & 0x3),
        ((VAR_15 >> 2) & 0x3),
        ((VAR_15 >> 4) & 0x3),
        ((VAR_15 >> 6) & 0x3));
  }
  VAR_8 = (VAR_9 >> 25) & 0x1f;
  VAR_6 = FUNC_0(VAR_8);
  FUNC_4(" %d  [PA %010llx]  [state %s (%02x)]  raw tags: %08X-%016llX\n",
       VAR_7, VAR_13, FUNC_2(VAR_8), VAR_8, VAR_9, VAR_12);
  if (VAR_6) {
   if (((VAR_12 >> 11) & 1) ^ FUNC_5(VAR_12, 39, 26)) {
    FUNC_4("   ** bad parity in PTag1\n");
    VAR_16 |= VAR_2;
   }
   if (((VAR_12 >> 10) & 1) ^ FUNC_5(VAR_12, 25, 13)) {
    FUNC_4("   ** bad parity in PTag0\n");
    VAR_16 |= VAR_2;
   }
  } else {
   VAR_16 |= VAR_3;
  }

  if (VAR_5) {
   uint32_t VAR_17, VAR_18, VAR_19;
   unsigned long long VAR_20;
   int VAR_21;
   char VAR_22 = 0;

   for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {

    __asm__ __volatile__ (
    "	.set	push\n\t"
    "	.set	noreorder\n\t"
    "	.set	mips64\n\t"
    "	.set	noat\n\t"
    "	cache	7, 0(%3)\n\t"
    "	mfc0	%0, $29, 3\n\t"
    "	dmfc0	$1, $28, 3\n\t"
    "	dsrl32	%1, $1, 0 \n\t"
    "	sll	%2, $1, 0 \n\t"
    "	.set	pop"
    : "=r" (VAR_19), "=r" (VAR_17), "=r" (VAR_18)
    : "r" ((VAR_7 << 13) | VAR_4 | (VAR_21 << 3)));
    VAR_20 = ((unsigned long long)VAR_17 << 32) | VAR_18;
    VAR_14 = FUNC_1(VAR_20);
    if (VAR_14 != VAR_19) {
     int VAR_23;
     VAR_22 |= 1 << (3-VAR_21);
     VAR_14 ^= VAR_19;
     VAR_23 = FUNC_3(VAR_14);
     VAR_16 |= (VAR_23 == 1) ? VAR_1 : VAR_0;
    }
    FUNC_4("  %02X-%016llX", VAR_19, VAR_20);
   }
   FUNC_4("\n");
   if (VAR_22)
    FUNC_4("  dwords w/ bad ECC: %d %d %d %d\n",
           !!(VAR_22 & 8), !!(VAR_22 & 4),
           !!(VAR_22 & 2), !!(VAR_22 & 1));
  }
 }
 return VAR_16;
}
