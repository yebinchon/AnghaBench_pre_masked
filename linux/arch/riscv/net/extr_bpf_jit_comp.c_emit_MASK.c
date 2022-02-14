
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv_jit_context {size_t ninsns; int * insns; } ;



__attribute__((used)) static void FUNC_0(const u32 VAR_0, struct rv_jit_context *VAR_1)
{
 if (VAR_1->insns)
  VAR_1->insns[VAR_1->ninsns] = VAR_0;

 VAR_1->ninsns++;
}
