
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {scalar_t__ lab; int * addr; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct uasm_reloc *VAR_1, u32 *VAR_2, u32 *VAR_3,
          long VAR_4)
{
 for (; VAR_1->lab != VAR_0; VAR_1++)
  if (VAR_1->addr >= VAR_2 && VAR_1->addr < VAR_3)
   VAR_1->addr += VAR_4;
}
