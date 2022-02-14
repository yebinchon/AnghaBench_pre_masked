
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linesz; int ways; int sets; int flags; int waysize; int waybit; } ;
struct cpuinfo_mips {int isa_level; int options; TYPE_1__ scache; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 struct cpuinfo_mips VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int ,int) ;
 int VAR_11 ;
 int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static void FUNC_10(void)
{
 struct cpuinfo_mips *VAR_14 = &VAR_10;
 unsigned int VAR_15 = FUNC_7();
 int VAR_16 = 0;






 switch (FUNC_0()) {
 case 133:
 case 134:
 case 131:
 case 132:
  VAR_16 = FUNC_9(VAR_11);
  if (VAR_16)
   VAR_14->options |= VAR_1;
  break;

 case 138:
 case 137:
 case 136:
 case 135:
  VAR_12 = 0x80000 << ((VAR_15 & VAR_9) >> 16);
  VAR_14->scache.linesz = 64 << ((VAR_15 >> 13) & 1);
  VAR_14->scache.ways = 2;
  VAR_14->scache.waybit= 0;
  VAR_16 = 1;
  break;

 case 130:
 case 139:



  return;

 case 129:



  return;

 case 141:
  FUNC_1();
  return;

 case 140:
  FUNC_2();
  return;

 case 142:
 case 128:

  return;

 default:
  if (VAR_14->isa_level & (VAR_3 | VAR_4 |
        VAR_5 | VAR_6 |
        VAR_7 | VAR_8)) {
   if (!(VAR_14->scache.flags & VAR_0))
    FUNC_4("Dunno how to handle MIPS32 / MIPS64 second level cache");

   return;
  }
  VAR_16 = 0;
 }

 if (!VAR_16)
  return;


 VAR_14->scache.waysize = VAR_12 / VAR_14->scache.ways;

 VAR_14->scache.sets = VAR_12 / (VAR_14->scache.linesz * VAR_14->scache.ways);

 FUNC_5("Unified secondary cache %ldkB %s, linesize %d bytes.\n",
        VAR_12 >> 10, VAR_13[VAR_14->scache.ways], VAR_14->scache.linesz);

 VAR_14->options |= VAR_2;
}
