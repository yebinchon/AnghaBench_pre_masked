
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int extended_cpuid_level; char* x86_model_id; } ;


 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_0)
{
 unsigned int *VAR_1;
 char *VAR_2, *VAR_3, *VAR_4;

 if (VAR_0->extended_cpuid_level < 0x80000004)
  return;

 VAR_1 = (unsigned int *)VAR_0->x86_model_id;
 FUNC_0(0x80000002, &VAR_1[0], &VAR_1[1], &VAR_1[2], &VAR_1[3]);
 FUNC_0(0x80000003, &VAR_1[4], &VAR_1[5], &VAR_1[6], &VAR_1[7]);
 FUNC_0(0x80000004, &VAR_1[8], &VAR_1[9], &VAR_1[10], &VAR_1[11]);
 VAR_0->x86_model_id[48] = 0;


 VAR_2 = VAR_3 = VAR_4 = &VAR_0->x86_model_id[0];

 while (*VAR_2 == ' ')
  VAR_2++;

 while (*VAR_2) {

  if (!FUNC_1(*VAR_2))
   VAR_4 = VAR_3;

  *VAR_3++ = *VAR_2++;
 }

 *(VAR_4 + 1) = '\0';
}
