
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int cpuid_level; } ;


 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char) ;

__attribute__((used)) static void FUNC_3(struct cpuinfo_x86 *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 unsigned int VAR_4[4];
 unsigned char *VAR_5 = (unsigned char *)VAR_4;

 if (VAR_0->cpuid_level < 2)
  return;


 VAR_3 = FUNC_1(2) & 0xFF;

 for (VAR_1 = 0 ; VAR_1 < VAR_3 ; VAR_1++) {
  FUNC_0(2, &VAR_4[0], &VAR_4[1], &VAR_4[2], &VAR_4[3]);


  for (VAR_2 = 0 ; VAR_2 < 3 ; VAR_2++)
   if (VAR_4[VAR_2] & (1 << 31))
    VAR_4[VAR_2] = 0;


  for (VAR_2 = 1 ; VAR_2 < 16 ; VAR_2++)
   FUNC_2(VAR_5[VAR_2]);
 }
}
