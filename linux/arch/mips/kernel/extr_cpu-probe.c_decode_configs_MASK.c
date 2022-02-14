
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int flags; } ;
struct cpuinfo_mips {int options; TYPE_1__ scache; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
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
 unsigned int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_4 (struct cpuinfo_mips*) ;
 int FUNC_5 (struct cpuinfo_mips*) ;
 int FUNC_6 (struct cpuinfo_mips*) ;
 int FUNC_7 (struct cpuinfo_mips*) ;
 int FUNC_8 (struct cpuinfo_mips*) ;
 int FUNC_9 (struct cpuinfo_mips*) ;
 int FUNC_10 (int ) ;
 unsigned int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ VAR_15 ;
 int FUNC_13 (struct cpuinfo_mips*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 unsigned int FUNC_16 () ;
 int FUNC_17 (struct cpuinfo_mips*,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (unsigned int) ;

__attribute__((used)) static void FUNC_21(struct cpuinfo_mips *VAR_16)
{
 int VAR_17;


 VAR_16->options = VAR_3 | VAR_4 | VAR_5 |
       VAR_6 | VAR_8 | VAR_9;

 VAR_16->scache.flags = VAR_2;


 FUNC_17(VAR_16, VAR_15 ? 0 : VAR_0);

 VAR_17 = FUNC_4(VAR_16);
 FUNC_0(!VAR_17);
 if (VAR_17)
  VAR_17 = FUNC_5(VAR_16);
 if (VAR_17)
  VAR_17 = FUNC_6(VAR_16);
 if (VAR_17)
  VAR_17 = FUNC_7(VAR_16);
 if (VAR_17)
  VAR_17 = FUNC_8(VAR_16);
 if (VAR_17)
  VAR_17 = FUNC_9(VAR_16);


 if (VAR_13) {
  u64 VAR_18;
  unsigned int VAR_19;


  VAR_18 = VAR_12 ? FUNC_15()
      : (s32)FUNC_14();
  if (VAR_18 & VAR_10) {

   VAR_16->options |= VAR_7;
  } else {

   VAR_19 = FUNC_16();
   FUNC_20(VAR_19 | VAR_11);
   FUNC_12();





   if (VAR_12)
    FUNC_19(VAR_18 | VAR_10);
   else
    FUNC_18(VAR_18 | VAR_10);
   FUNC_1();

   FUNC_20(VAR_19);
   if (FUNC_14() & VAR_10) {
    VAR_16->options |= VAR_7;
    FUNC_18(VAR_18);
   }
  }
 }


 FUNC_17(VAR_16, (VAR_15 ? 0 : VAR_0) | VAR_1);

 FUNC_13(VAR_16);


 if (VAR_13) {
  unsigned int VAR_20;

  VAR_20 = FUNC_11();
  if (VAR_14)
   VAR_20 >>= FUNC_10(FUNC_2()) - 1;
  FUNC_3(VAR_16, VAR_20);
 }

}
