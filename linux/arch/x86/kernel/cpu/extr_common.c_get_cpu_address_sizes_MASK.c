
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int extended_cpuid_level; int x86_virt_bits; int x86_phys_bits; int x86_cache_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*,int ) ;
 int FUNC_1 (int,int*,int*,int*,int*) ;

void FUNC_2(struct cpuinfo_x86 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;

 if (VAR_2->extended_cpuid_level >= 0x80000008) {
  FUNC_1(0x80000008, &VAR_3, &VAR_4, &VAR_5, &VAR_6);

  VAR_2->x86_virt_bits = (VAR_3 >> 8) & 0xff;
  VAR_2->x86_phys_bits = VAR_3 & 0xff;
 }




 VAR_2->x86_cache_bits = VAR_2->x86_phys_bits;
}
