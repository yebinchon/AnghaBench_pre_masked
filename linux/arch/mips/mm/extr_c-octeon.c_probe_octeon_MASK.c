
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int linesz; int sets; int ways; unsigned long waysize; int waybit; } ;
struct TYPE_3__ {int linesz; int sets; int ways; unsigned long waysize; int flags; int waybit; } ;
struct cpuinfo_mips {TYPE_2__ dcache; TYPE_1__ icache; int options; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cpuinfo_mips VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned long,...) ;
 unsigned int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;
 struct cpuinfo_mips *VAR_7 = &VAR_3;
 int VAR_8 = FUNC_0();

 VAR_6 = FUNC_4();
 switch (VAR_8) {
 case 131:
 case 128:
  VAR_7->icache.linesz = 2 << ((VAR_6 >> 19) & 7);
  VAR_7->icache.sets = 64 << ((VAR_6 >> 22) & 7);
  VAR_7->icache.ways = 1 + ((VAR_6 >> 16) & 7);
  VAR_7->icache.flags |= VAR_0;
  VAR_4 =
   VAR_7->icache.sets * VAR_7->icache.ways * VAR_7->icache.linesz;
  VAR_7->icache.waybit = FUNC_1(VAR_4 / VAR_7->icache.ways) - 1;
  VAR_7->dcache.linesz = 128;
  if (VAR_8 == 128)
   VAR_7->dcache.sets = 2;
  else
   VAR_7->dcache.sets = 1;
  VAR_7->dcache.ways = 64;
  VAR_5 =
   VAR_7->dcache.sets * VAR_7->dcache.ways * VAR_7->dcache.linesz;
  VAR_7->dcache.waybit = FUNC_1(VAR_5 / VAR_7->dcache.ways) - 1;
  VAR_7->options |= VAR_1;
  break;

 case 130:
  VAR_7->icache.linesz = 2 << ((VAR_6 >> 19) & 7);
  VAR_7->icache.sets = 8;
  VAR_7->icache.ways = 37;
  VAR_7->icache.flags |= VAR_0;
  VAR_4 = VAR_7->icache.sets * VAR_7->icache.ways * VAR_7->icache.linesz;

  VAR_7->dcache.linesz = 128;
  VAR_7->dcache.ways = 32;
  VAR_7->dcache.sets = 8;
  VAR_5 = VAR_7->dcache.sets * VAR_7->dcache.ways * VAR_7->dcache.linesz;
  VAR_7->options |= VAR_1;
  break;

 case 129:
  VAR_7->icache.linesz = 128;
  VAR_7->icache.sets = 16;
  VAR_7->icache.ways = 39;
  VAR_7->icache.flags |= VAR_0;
  VAR_4 = VAR_7->icache.sets * VAR_7->icache.ways * VAR_7->icache.linesz;

  VAR_7->dcache.linesz = 128;
  VAR_7->dcache.ways = 32;
  VAR_7->dcache.sets = 8;
  VAR_5 = VAR_7->dcache.sets * VAR_7->dcache.ways * VAR_7->dcache.linesz;
  VAR_7->options |= VAR_1;
  break;

 default:
  FUNC_2("Unsupported Cavium Networks CPU type");
  break;
 }


 VAR_7->icache.waysize = VAR_4 / VAR_7->icache.ways;
 VAR_7->dcache.waysize = VAR_5 / VAR_7->dcache.ways;

 VAR_7->icache.sets = VAR_4 / (VAR_7->icache.linesz * VAR_7->icache.ways);
 VAR_7->dcache.sets = VAR_5 / (VAR_7->dcache.linesz * VAR_7->dcache.ways);

 if (FUNC_5() == 0) {
  FUNC_3("Primary instruction cache %ldkB, %s, %d way, "
     "%d sets, linesize %d bytes.\n",
     VAR_4 >> 10,
     VAR_2 ?
    "virtually tagged" : "physically tagged",
     VAR_7->icache.ways, VAR_7->icache.sets, VAR_7->icache.linesz);

  FUNC_3("Primary data cache %ldkB, %d-way, %d sets, "
     "linesize %d bytes.\n",
     VAR_5 >> 10, VAR_7->dcache.ways,
     VAR_7->dcache.sets, VAR_7->dcache.linesz);
 }
}
