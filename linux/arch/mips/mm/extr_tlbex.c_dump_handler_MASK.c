
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1(const char *VAR_0, const void *VAR_1, const void *VAR_2)
{
 unsigned int VAR_3 = (VAR_2 - VAR_1) / sizeof(u32);
 const u32 *VAR_4 = VAR_1;
 int VAR_5;

 FUNC_0("LEAF(%s)\n", VAR_0);

 FUNC_0("\t.set push\n");
 FUNC_0("\t.set noreorder\n");

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0("\t.word\t0x%08x\t\t# %p\n", VAR_4[VAR_5], &VAR_4[VAR_5]);

 FUNC_0("\t.set\tpop\n");

 FUNC_0("\tEND(%s)\n", VAR_0);
}
