
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int linesz; int ways; int sets; int flags; int waysize; void* waybit; } ;
struct TYPE_3__ {int linesz; int ways; int sets; int flags; int waysize; void* waybit; } ;
struct cpuinfo_mips {int options; int processor_id; TYPE_2__ dcache; TYPE_1__ icache; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct cpuinfo_mips*) ;
 struct cpuinfo_mips VAR_26 ;
 int FUNC_2 () ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 unsigned int FUNC_6 () ;
 unsigned long FUNC_7 () ;
 int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 int FUNC_10 () ;
 int * VAR_29 ;
 int FUNC_11 (unsigned int) ;

__attribute__((used)) static void FUNC_12(void)
{
 struct cpuinfo_mips *VAR_30 = &VAR_26;
 unsigned int VAR_31 = FUNC_6();
 unsigned int VAR_32 = FUNC_9();
 int VAR_33 = 0;
 unsigned long VAR_34;
 unsigned int VAR_35;

 switch (FUNC_2()) {
 case 144:
 case 143:
 case 142:
 case 159:
  VAR_28 = 1 << (12 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 2;
  VAR_30->icache.waybit = FUNC_0(VAR_28/2);

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 2;
  VAR_30->dcache.waybit= FUNC_0(VAR_27/2);

  VAR_30->options |= VAR_13;
  break;

 case 141:
  VAR_28 = 1 << (12 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 2;
  VAR_30->icache.waybit= 0;

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 2;
  VAR_30->dcache.waybit = 0;

  VAR_30->options |= VAR_13 | VAR_14;
  break;

 case 137:
  VAR_28 = 1 << (12 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 4;
  VAR_30->icache.waybit= 0;

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 4;
  VAR_30->dcache.waybit = 0;

  VAR_30->options |= VAR_13;
  VAR_30->options |= VAR_14;
  break;

 case 149:
 case 148:
 case 150:
 case 146:
 case 145:
 case 147:
  VAR_28 = 1 << (12 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 1;
  VAR_30->icache.waybit = 0;

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 1;
  VAR_30->dcache.waybit = 0;

  VAR_30->options |= VAR_13;
  break;

 case 154:
 case 153:
 case 152:
 case 151:
  VAR_28 = 1 << (12 + ((VAR_31 & VAR_23) >> 29));
  VAR_30->icache.linesz = 64;
  VAR_30->icache.ways = 2;
  VAR_30->icache.waybit = 0;

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_22) >> 26));
  VAR_30->dcache.linesz = 32;
  VAR_30->dcache.ways = 2;
  VAR_30->dcache.waybit = 0;

  VAR_30->options |= VAR_14;
  break;

 case 132:
  FUNC_11(VAR_31 & ~VAR_25);

 case 133:

  if (VAR_30->processor_id == 0x0c80U || VAR_30->processor_id == 0x0c81U ||
      VAR_30->processor_id == 0x0c82U) {
   VAR_31 |= 0x00400000U;
   if (VAR_30->processor_id == 0x0c80U)
    VAR_31 |= VAR_24;
   FUNC_11(VAR_31);
  } else
   VAR_30->options |= VAR_13;

  VAR_28 = 1 << (10 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 2;
  VAR_30->icache.waybit = FUNC_0(VAR_28/2);

  VAR_27 = 1 << (10 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 2;
  VAR_30->dcache.waybit = FUNC_0(VAR_27/2);
  break;

 case 129:
 case 136:
 case 135:
 case 134:
 case 131:
 case 130:
  VAR_28 = 1 << (10 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 1;
  VAR_30->icache.waybit = 0;

  VAR_27 = 1 << (10 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 1;
  VAR_30->dcache.waybit = 0;

  VAR_30->options |= VAR_13;
  break;

 case 140:
  FUNC_10();

  VAR_28 = 1 << (12 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  VAR_30->icache.ways = 4;
  VAR_30->icache.waybit = FUNC_0(VAR_28 / VAR_30->icache.ways);

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  VAR_30->dcache.ways = 4;
  VAR_30->dcache.waybit = FUNC_0(VAR_27 / VAR_30->dcache.ways);

  VAR_30->options |= VAR_13;
  VAR_30->options |= VAR_14;
  break;

 case 165:
  VAR_28 = 1 << (12 + ((VAR_31 & VAR_3) >> 9));
  VAR_30->icache.linesz = 16 << ((VAR_31 & VAR_2) >> 5);
  if (VAR_32 & 0x3)
   VAR_30->icache.ways = 4;
  else
   VAR_30->icache.ways = 2;
  VAR_30->icache.waybit = 0;

  VAR_27 = 1 << (12 + ((VAR_31 & VAR_1) >> 6));
  VAR_30->dcache.linesz = 16 << ((VAR_31 & VAR_0) >> 4);
  if (VAR_32 & 0x3)
   VAR_30->dcache.ways = 4;
  else
   VAR_30->dcache.ways = 2;
  VAR_30->dcache.waybit = 0;
  break;

 case 164:
  VAR_34 = FUNC_7();
  VAR_35 = (VAR_34 >> 19) & 7;
  if (VAR_35)
   VAR_30->icache.linesz = 2 << VAR_35;
  else
   VAR_30->icache.linesz = 0;
  VAR_30->icache.sets = 64 << ((VAR_34 >> 22) & 7);
  VAR_30->icache.ways = 1 + ((VAR_34 >> 16) & 7);
  VAR_28 = VAR_30->icache.sets *
       VAR_30->icache.ways *
       VAR_30->icache.linesz;
  VAR_30->icache.waybit = 0;

  VAR_35 = (VAR_34 >> 10) & 7;
  if (VAR_35)
   VAR_30->dcache.linesz = 2 << VAR_35;
  else
   VAR_30->dcache.linesz = 0;
  VAR_30->dcache.sets = 64 << ((VAR_34 >> 13) & 7);
  VAR_30->dcache.ways = 1 + ((VAR_34 >> 7) & 7);
  VAR_27 = VAR_30->dcache.sets *
       VAR_30->dcache.ways *
       VAR_30->dcache.linesz;
  VAR_30->dcache.waybit = 0;
  if ((VAR_32 & VAR_20) >= VAR_19)
   VAR_30->options |= VAR_14;
  break;

 case 169:

  VAR_30->icache.linesz = 128;
  VAR_30->icache.sets = 16;
  VAR_30->icache.ways = 8;
  VAR_30->icache.flags |= VAR_8;
  VAR_28 = VAR_30->icache.sets * VAR_30->icache.ways * VAR_30->icache.linesz;

  VAR_30->dcache.linesz = 128;
  VAR_30->dcache.ways = 8;
  VAR_30->dcache.sets = 8;
  VAR_27 = VAR_30->dcache.sets * VAR_30->dcache.ways * VAR_30->dcache.linesz;
  VAR_30->options |= VAR_14;
  break;

 default:
  if (!(VAR_31 & VAR_11))
   FUNC_4("Don't know how to probe P-caches on this cpu.");





  VAR_34 = FUNC_7();

  VAR_35 = (VAR_34 >> 19) & 7;


  if (VAR_35 == 7)
   FUNC_4("Invalid icache line size");

  VAR_30->icache.linesz = VAR_35 ? 2 << VAR_35 : 0;

  VAR_30->icache.sets = 32 << (((VAR_34 >> 22) + 1) & 7);
  VAR_30->icache.ways = 1 + ((VAR_34 >> 16) & 7);

  VAR_28 = VAR_30->icache.sets *
         VAR_30->icache.ways *
         VAR_30->icache.linesz;
  VAR_30->icache.waybit = FUNC_0(VAR_28/VAR_30->icache.ways);

  if (VAR_31 & VAR_12)
   VAR_30->icache.flags |= VAR_8;




  VAR_30->dcache.flags = 0;

  VAR_35 = (VAR_34 >> 10) & 7;


  if (VAR_35 == 7)
   FUNC_4("Invalid dcache line size");

  VAR_30->dcache.linesz = VAR_35 ? 2 << VAR_35 : 0;

  VAR_30->dcache.sets = 32 << (((VAR_34 >> 13) + 1) & 7);
  VAR_30->dcache.ways = 1 + ((VAR_34 >> 7) & 7);

  VAR_27 = VAR_30->dcache.sets *
         VAR_30->dcache.ways *
         VAR_30->dcache.linesz;
  VAR_30->dcache.waybit = FUNC_0(VAR_27/VAR_30->dcache.ways);

  VAR_30->options |= VAR_14;
  break;
 }
 if ((VAR_32 & VAR_17) == VAR_18 &&
     (VAR_32 & VAR_20) < VAR_21 &&
     !(VAR_31 & VAR_4) && VAR_30->icache.linesz != 16 &&
     VAR_16 <= 0x8000)
  FUNC_4("Improper R4000SC processor configuration detected");


 VAR_30->icache.waysize = VAR_28 / VAR_30->icache.ways;
 VAR_30->dcache.waysize = VAR_27 / VAR_30->dcache.ways;

 VAR_30->icache.sets = VAR_30->icache.linesz ?
  VAR_28 / (VAR_30->icache.linesz * VAR_30->icache.ways) : 0;
 VAR_30->dcache.sets = VAR_30->dcache.linesz ?
  VAR_27 / (VAR_30->dcache.linesz * VAR_30->dcache.ways) : 0;







 switch (FUNC_2()) {
 case 176:
 case 174:
 case 168:
 case 167:
 case 139:
 case 138:
 case 128:
  VAR_30->dcache.flags |= VAR_7;
  break;

 case 154:
 case 153:
 case 152:
 case 151:
  break;

 case 172:
 case 177:
  VAR_33 = FUNC_1(VAR_30);

 case 163:
 case 162:
 case 175:
 case 173:
 case 178:
 case 166:
 case 158:
 case 156:
 case 161:
 case 155:
 case 157:
 case 160:
  if (!(FUNC_8() & VAR_10) &&
      (VAR_30->icache.waysize > VAR_16))
   VAR_30->icache.flags |= VAR_5;
  if (!VAR_33 && (FUNC_8() & VAR_9)) {




   VAR_30->dcache.flags |= VAR_7;
   break;
  }

 default:
  if (VAR_33 || VAR_30->dcache.waysize > VAR_16)
   VAR_30->dcache.flags |= VAR_5;
 }


 if (VAR_30->dcache.flags & VAR_7)
  VAR_30->dcache.flags &= ~VAR_5;






 if (FUNC_3())
  VAR_30->icache.flags |= VAR_15;

 switch (FUNC_2()) {
 case 176:




  VAR_30->icache.flags |= VAR_8;
  break;

 case 171:
 case 168:
 case 167:
  VAR_30->icache.flags |= VAR_6;
  break;

 case 170:
  VAR_30->icache.flags |= VAR_6;

  VAR_30->dcache.flags &= ~VAR_5;
  break;

 case 165:




  VAR_30->icache.ways = 1;
 }

 FUNC_5("Primary instruction cache %ldkB, %s, %s, linesize %d bytes.\n",
        VAR_28 >> 10,
        VAR_30->icache.flags & VAR_8 ? "VIVT" : "VIPT",
        VAR_29[VAR_30->icache.ways], VAR_30->icache.linesz);

 FUNC_5("Primary data cache %ldkB, %s, %s, %s, linesize %d bytes\n",
        VAR_27 >> 10, VAR_29[VAR_30->dcache.ways],
        (VAR_30->dcache.flags & VAR_7) ? "PIPT" : "VIPT",
        (VAR_30->dcache.flags & VAR_5) ?
   "cache aliases" : "no aliases",
        VAR_30->dcache.linesz);
}
