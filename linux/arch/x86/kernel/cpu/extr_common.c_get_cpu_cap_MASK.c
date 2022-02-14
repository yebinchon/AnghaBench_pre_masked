
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int cpuid_level; int* x86_capability; int extended_cpuid_level; int x86_power; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (int,int*,int*,int*,int*) ;
 int FUNC_2 (int,int,int*,int*,int*,int*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cpuinfo_x86*) ;
 int FUNC_6 (struct cpuinfo_x86*) ;
 int FUNC_7 (struct cpuinfo_x86*) ;

void FUNC_8(struct cpuinfo_x86 *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16, VAR_17;


 if (VAR_13->cpuid_level >= 0x00000001) {
  FUNC_1(0x00000001, &VAR_14, &VAR_15, &VAR_16, &VAR_17);

  VAR_13->x86_capability[VAR_0] = VAR_16;
  VAR_13->x86_capability[VAR_1] = VAR_17;
 }


 if (VAR_13->cpuid_level >= 0x00000006)
  VAR_13->x86_capability[VAR_2] = FUNC_3(0x00000006);


 if (VAR_13->cpuid_level >= 0x00000007) {
  FUNC_2(0x00000007, 0, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
  VAR_13->x86_capability[VAR_3] = VAR_15;
  VAR_13->x86_capability[VAR_5] = VAR_16;
  VAR_13->x86_capability[VAR_6] = VAR_17;


  if (VAR_14 >= 1) {
   FUNC_2(0x00000007, 1, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
   VAR_13->x86_capability[VAR_4] = VAR_14;
  }
 }


 if (VAR_13->cpuid_level >= 0x0000000d) {
  FUNC_2(0x0000000d, 1, &VAR_14, &VAR_15, &VAR_16, &VAR_17);

  VAR_13->x86_capability[VAR_12] = VAR_14;
 }


 VAR_14 = FUNC_3(0x80000000);
 VAR_13->extended_cpuid_level = VAR_14;

 if ((VAR_14 & 0xffff0000) == 0x80000000) {
  if (VAR_14 >= 0x80000001) {
   FUNC_1(0x80000001, &VAR_14, &VAR_15, &VAR_16, &VAR_17);

   VAR_13->x86_capability[VAR_7] = VAR_16;
   VAR_13->x86_capability[VAR_8] = VAR_17;
  }
 }

 if (VAR_13->extended_cpuid_level >= 0x80000007) {
  FUNC_1(0x80000007, &VAR_14, &VAR_15, &VAR_16, &VAR_17);

  VAR_13->x86_capability[VAR_9] = VAR_15;
  VAR_13->x86_power = VAR_17;
 }

 if (VAR_13->extended_cpuid_level >= 0x80000008) {
  FUNC_1(0x80000008, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
  VAR_13->x86_capability[VAR_10] = VAR_15;
 }

 if (VAR_13->extended_cpuid_level >= 0x8000000a)
  VAR_13->x86_capability[VAR_11] = FUNC_4(0x8000000a);

 FUNC_6(VAR_13);
 FUNC_7(VAR_13);
 FUNC_5(VAR_13);






 FUNC_0(VAR_13);
}
