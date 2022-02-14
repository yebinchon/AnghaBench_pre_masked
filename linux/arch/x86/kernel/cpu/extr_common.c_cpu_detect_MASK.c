
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int cpuid_level; int x86; int x86_clflush_size; int x86_cache_alignment; int x86_stepping; int x86_model; int * x86_vendor_id; } ;


 int FUNC_0 (int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct cpuinfo_x86 *VAR_0)
{

 FUNC_0(0x00000000, (unsigned int *)&VAR_0->cpuid_level,
       (unsigned int *)&VAR_0->x86_vendor_id[0],
       (unsigned int *)&VAR_0->x86_vendor_id[8],
       (unsigned int *)&VAR_0->x86_vendor_id[4]);

 VAR_0->x86 = 4;

 if (VAR_0->cpuid_level >= 0x00000001) {
  u32 VAR_1, VAR_2, VAR_3, VAR_4;

  FUNC_0(0x00000001, &VAR_2, &VAR_4, &VAR_1, &VAR_3);
  VAR_0->x86 = FUNC_1(VAR_2);
  VAR_0->x86_model = FUNC_2(VAR_2);
  VAR_0->x86_stepping = FUNC_3(VAR_2);

  if (VAR_3 & (1<<19)) {
   VAR_0->x86_clflush_size = ((VAR_4 >> 8) & 0xff) * 8;
   VAR_0->x86_cache_alignment = VAR_0->x86_clflush_size;
  }
 }
}
