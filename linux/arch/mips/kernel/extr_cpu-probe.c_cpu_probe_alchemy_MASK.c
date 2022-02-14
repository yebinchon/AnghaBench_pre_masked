
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; int cputype; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (struct cpuinfo_mips*) ;

__attribute__((used)) static inline void FUNC_1(struct cpuinfo_mips *VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_4);
 switch (VAR_4->processor_id & VAR_1) {
 case 129:
 case 128:
  VAR_4->cputype = VAR_0;
  switch ((VAR_4->processor_id >> 24) & 0xff) {
  case 0:
   VAR_3[VAR_5] = "Au1000";
   break;
  case 1:
   VAR_3[VAR_5] = "Au1500";
   break;
  case 2:
   VAR_3[VAR_5] = "Au1100";
   break;
  case 3:
   VAR_3[VAR_5] = "Au1550";
   break;
  case 4:
   VAR_3[VAR_5] = "Au1200";
   if ((VAR_4->processor_id & VAR_2) == 2)
    VAR_3[VAR_5] = "Au1250";
   break;
  case 5:
   VAR_3[VAR_5] = "Au1210";
   break;
  default:
   VAR_3[VAR_5] = "Au1xxx";
   break;
  }
  break;
 }
}
