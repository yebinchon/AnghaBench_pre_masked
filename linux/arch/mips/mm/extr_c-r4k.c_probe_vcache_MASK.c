
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linesz; int sets; int ways; int waysize; scalar_t__ waybit; } ;
struct cpuinfo_mips {TYPE_1__ vcache; } ;


 scalar_t__ VAR_0 ;
 struct cpuinfo_mips VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int,int ,int) ;
 unsigned int FUNC_2 () ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct cpuinfo_mips *VAR_4 = &VAR_1;
 unsigned int VAR_5, VAR_6;

 if (FUNC_0() != VAR_0)
  return;

 VAR_5 = FUNC_2();
 if ((VAR_6 = ((VAR_5 >> 20) & 15)))
  VAR_4->vcache.linesz = 2 << VAR_6;
 else
  VAR_4->vcache.linesz = VAR_6;

 VAR_4->vcache.sets = 64 << ((VAR_5 >> 24) & 15);
 VAR_4->vcache.ways = 1 + ((VAR_5 >> 16) & 15);

 VAR_2 = VAR_4->vcache.sets * VAR_4->vcache.ways * VAR_4->vcache.linesz;

 VAR_4->vcache.waybit = 0;
 VAR_4->vcache.waysize = VAR_2 / VAR_4->vcache.ways;

 FUNC_1("Unified victim cache %ldkB %s, linesize %d bytes.\n",
  VAR_2 >> 10, VAR_3[VAR_4->vcache.ways], VAR_4->vcache.linesz);
}
