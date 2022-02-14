
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_16)
{
 FUNC_0("Data abort info:\n");

 if (VAR_16 & VAR_5) {
  FUNC_0("  Access size = %u byte(s)\n",
    1U << ((VAR_16 & VAR_6) >> VAR_7));
  FUNC_0("  SSE = %lu, SRT = %lu\n",
    (VAR_16 & VAR_12) >> VAR_13,
    (VAR_16 & VAR_10) >> VAR_11);
  FUNC_0("  SF = %lu, AR = %lu\n",
    (VAR_16 & VAR_8) >> VAR_9,
    (VAR_16 & VAR_0) >> VAR_1);
 } else {
  FUNC_0("  ISV = 0, ISS = 0x%08lx\n", VAR_16 & VAR_4);
 }

 FUNC_0("  CM = %lu, WnR = %lu\n",
   (VAR_16 & VAR_2) >> VAR_3,
   (VAR_16 & VAR_14) >> VAR_15);
}
