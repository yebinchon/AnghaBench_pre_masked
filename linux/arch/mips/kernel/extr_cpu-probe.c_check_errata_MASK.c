
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpuinfo_mips VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(void)
{
 struct cpuinfo_mips *VAR_4 = &VAR_3;

 switch (FUNC_0()) {
 case 128:





  if ((VAR_4->processor_id & VAR_2) <= VAR_1)
   FUNC_2(FUNC_1() | VAR_0);
  break;
 default:
  break;
 }
}
