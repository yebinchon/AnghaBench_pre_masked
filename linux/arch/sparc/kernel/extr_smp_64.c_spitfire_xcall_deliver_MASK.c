
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct trap_per_cpu {int cpu_mondo_block_pa; int cpu_list_pa; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct trap_per_cpu *VAR_0, int VAR_1)
{
 u64 *VAR_2, VAR_3, VAR_4, VAR_5;
 u16 *VAR_6;
 u64 VAR_7;
 int VAR_8;

 __asm__ __volatile__("rdpr %%pstate, %0" : "=r" (VAR_7));
 VAR_6 = FUNC_0(VAR_0->cpu_list_pa);
 VAR_2 = FUNC_0(VAR_0->cpu_mondo_block_pa);
 VAR_3 = VAR_2[0];
 VAR_4 = VAR_2[1];
 VAR_5 = VAR_2[2];
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7, VAR_6[VAR_8]);
}
