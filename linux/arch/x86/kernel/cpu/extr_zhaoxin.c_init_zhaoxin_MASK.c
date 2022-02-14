
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int cpuid_level; int x86; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*,int ) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct cpuinfo_x86*) ;
 int FUNC_3 (struct cpuinfo_x86*) ;
 int FUNC_4 (struct cpuinfo_x86*) ;
 int FUNC_5 (struct cpuinfo_x86*) ;
 int FUNC_6 (struct cpuinfo_x86*) ;
 int FUNC_7 (struct cpuinfo_x86*,int ) ;
 int FUNC_8 (struct cpuinfo_x86*) ;

__attribute__((used)) static void FUNC_9(struct cpuinfo_x86 *VAR_3)
{
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);




 if (VAR_3->cpuid_level > 9) {
  unsigned int VAR_4 = FUNC_1(10);






  if ((VAR_4 & 0xff) && (((VAR_4 >> 8) & 0xff) > 1))
   FUNC_7(VAR_3, VAR_0);
 }

 if (VAR_3->x86 >= 0x6)
  FUNC_6(VAR_3);




 if (FUNC_0(VAR_3, VAR_2))
  FUNC_8(VAR_3);
}
