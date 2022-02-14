
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int tlbsize; unsigned int tlbsizevtlb; scalar_t__ tlbsizeftlbsets; int options; int ases; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct cpuinfo_mips *VAR_16)
{
 unsigned int VAR_17;

 VAR_17 = FUNC_0();

 if (VAR_17 & VAR_5)
  VAR_16->ases |= VAR_0;
 if (VAR_17 & VAR_6)
  VAR_16->options |= VAR_13;
 if (VAR_17 & VAR_8)
  VAR_16->options |= VAR_14;
 if (VAR_17 & VAR_2)
  VAR_16->ases |= VAR_1;
 if (VAR_17 & VAR_3)
  VAR_16->options |= VAR_11;
 if (VAR_17 & VAR_4) {
  VAR_16->options |= VAR_12;
  VAR_16->options |= VAR_10;
 }
 if (VAR_15) {
  VAR_16->tlbsize = ((VAR_17 & VAR_7) >> 25) + 1;
  VAR_16->tlbsizevtlb = VAR_16->tlbsize;
  VAR_16->tlbsizeftlbsets = 0;
 }

 return VAR_17 & VAR_9;
}
