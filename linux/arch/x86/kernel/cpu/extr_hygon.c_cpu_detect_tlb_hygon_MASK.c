
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cpuinfo_x86 {int extended_cpuid_level; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int*,int*,int*,int*) ;
 int FUNC_1 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u16 VAR_12 = 0xfff;

 if (VAR_7->extended_cpuid_level < 0x80000006)
  return;

 FUNC_0(0x80000006, &VAR_9, &VAR_8, &VAR_10, &VAR_11);

 VAR_2[VAR_0] = (VAR_8 >> 16) & VAR_12;
 VAR_5[VAR_0] = VAR_8 & VAR_12;


 if (!((VAR_9 >> 16) & VAR_12))
  VAR_1[VAR_0] = (FUNC_1(0x80000005) >> 16) & 0xff;
 else
  VAR_1[VAR_0] = (VAR_9 >> 16) & VAR_12;


 VAR_3[VAR_0] = VAR_1[VAR_0] >> 1;


 if (!(VAR_9 & VAR_12)) {
  FUNC_0(0x80000005, &VAR_9, &VAR_8, &VAR_10, &VAR_11);
  VAR_4[VAR_0] = VAR_9 & 0xff;
 } else
  VAR_4[VAR_0] = VAR_9 & VAR_12;

 VAR_6[VAR_0] = VAR_4[VAR_0] >> 1;
}
