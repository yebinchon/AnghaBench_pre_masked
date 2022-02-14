
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ways; } ;
struct cpuinfo_mips {int processor_id; int tlbsize; TYPE_1__ scache; int cputype; } ;


 int VAR_0 ;
 int VAR_1 ;

 char** VAR_2 ;
 int FUNC_0 (struct cpuinfo_mips*) ;

__attribute__((used)) static inline void FUNC_1(struct cpuinfo_mips *VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_3);
 switch (VAR_3->processor_id & VAR_1) {
 case 128:
  VAR_3->cputype = VAR_0;
  VAR_2[VAR_4] = "Sandcraft SR71000";
  VAR_3->scache.ways = 8;
  VAR_3->tlbsize = 64;
  break;
 }
}
