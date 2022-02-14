
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int tlbsize; unsigned int tlbsizevtlb; int tlbsizeftlbsets; unsigned int tlbsizeftlbways; unsigned int kscratch_mask; int options; } ;


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
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (struct cpuinfo_mips*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (struct cpuinfo_mips*,unsigned long) ;
 int FUNC_7 (struct cpuinfo_mips*,int ) ;
 int FUNC_8 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_9(struct cpuinfo_mips *VAR_25)
{
 unsigned int VAR_26;
 unsigned int VAR_27;
 unsigned int VAR_28;
 unsigned int VAR_29 = VAR_1;
 unsigned long VAR_30;

 VAR_26 = FUNC_5();

 if (VAR_22) {
  if (((VAR_26 & VAR_7) >> 29) == 2)
   VAR_25->options |= VAR_16;






  if (!VAR_21)
   VAR_28 = VAR_26 & VAR_10;
  else if (VAR_20)
   VAR_28 = 128;
  else
   VAR_28 = 0;

  switch (VAR_28) {
  case 129:
   VAR_25->tlbsize += (VAR_26 & VAR_11) * 0x40;
   VAR_25->tlbsizevtlb = VAR_25->tlbsize;
   break;
  case 128:
   VAR_25->tlbsizevtlb +=
    ((VAR_26 & VAR_13) >>
      VAR_14) * 0x40;
   VAR_25->tlbsize = VAR_25->tlbsizevtlb;
   VAR_29 = VAR_12;

  case 130:
   if (VAR_23)
    break;
   VAR_27 = (VAR_26 & ~VAR_29) |
    (FUNC_3(VAR_28) <<
     VAR_2);
   FUNC_8(VAR_27);
   FUNC_1();
   VAR_26 = FUNC_5();
   if (VAR_26 != VAR_27) {
    FUNC_4("PAGE_SIZE 0x%lx is not supported by FTLB (config4=0x%x)\n",
           VAR_19, VAR_26);

    FUNC_7(VAR_25, 0);
    VAR_23 = 1;
    break;
   }
   VAR_25->tlbsizeftlbsets = 1 <<
    ((VAR_26 & VAR_3) >>
     VAR_4);
   VAR_25->tlbsizeftlbways = ((VAR_26 & VAR_5) >>
           VAR_6) + 2;
   VAR_25->tlbsize += VAR_25->tlbsizeftlbways * VAR_25->tlbsizeftlbsets;
   VAR_24 = 1;
   break;
  }
 }

 VAR_25->kscratch_mask = (VAR_26 & VAR_8)
    >> VAR_9;

 VAR_30 = VAR_17;
 if (VAR_26 & VAR_0)
  VAR_30 |= VAR_18;
 FUNC_6(VAR_25, VAR_30);






 FUNC_0(VAR_30 != FUNC_2(VAR_25));

 return VAR_26 & VAR_15;
}
