
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; scalar_t__ cputype; int options; int tlbsize; int kscratch_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
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
 char** VAR_17 ;
 int FUNC_0 (struct cpuinfo_mips*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct cpuinfo_mips*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct cpuinfo_mips *VAR_18, int VAR_19)
{
 FUNC_0(VAR_18);

 if ((VAR_18->processor_id & VAR_15) == VAR_16) {
  VAR_18->cputype = VAR_0;
  VAR_17[VAR_19] = "Au1300";

  return;
 }

 VAR_18->options = (VAR_12 |
   VAR_3 |
   VAR_4 |
   VAR_5 |
   VAR_14 |
   VAR_6 |
   VAR_10);

 switch (VAR_18->processor_id & VAR_15) {
 case 153:
 case 149:
 case 151:
  VAR_18->cputype = VAR_1;
  VAR_17[VAR_19] = "Broadcom XLPII";
  break;

 case 150:
 case 152:
  VAR_18->cputype = VAR_1;
  VAR_17[VAR_19] = "Netlogic XLP";
  break;

 case 141:
 case 142:
 case 144:
 case 148:
 case 143:
 case 145:
 case 146:
 case 147:
  VAR_18->cputype = VAR_2;
  VAR_17[VAR_19] = "Netlogic XLR";
  break;

 case 130:
 case 134:
 case 136:
 case 137:
 case 138:
 case 139:
 case 140:
 case 128:
 case 129:
 case 131:
 case 132:
 case 133:
 case 135:
  VAR_18->cputype = VAR_2;
  VAR_17[VAR_19] = "Netlogic XLS";
  break;

 default:
  FUNC_1("Unknown Netlogic chip id [%02x]!\n",
         VAR_18->processor_id);
  VAR_18->cputype = VAR_2;
  break;
 }

 if (VAR_18->cputype == VAR_1) {
  FUNC_4(VAR_18, VAR_9);
  VAR_18->options |= (VAR_7 | VAR_13 | VAR_11);

  VAR_18->tlbsize = ((FUNC_3() >> 16) & 0xffff) + 1;
 } else {
  FUNC_4(VAR_18, VAR_8);
  VAR_18->tlbsize = ((FUNC_2() >> 25) & 0x3f) + 1;
 }
 VAR_18->kscratch_mask = 0xf;
}
