
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct cpuinfo_x86 {int x86; int x86_power; int cpuid_level; int x86_coreid_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpuinfo_x86*,int ) ;

__attribute__((used)) static void FUNC_3(struct cpuinfo_x86 *VAR_3)
{
 if (VAR_3->x86 >= 0x6)
  FUNC_2(VAR_3, VAR_0);



 if (VAR_3->x86_power & (1 << 8)) {
  FUNC_2(VAR_3, VAR_0);
  FUNC_2(VAR_3, VAR_1);
 }

 if (VAR_3->cpuid_level >= 0x00000001) {
  u32 VAR_4, VAR_5, VAR_6, VAR_7;

  FUNC_0(0x00000001, &VAR_4, &VAR_5, &VAR_6, &VAR_7);





  if (VAR_7 & (1U << 28))
   VAR_3->x86_coreid_bits = FUNC_1((VAR_5 >> 16) & 0xff);
 }

}
