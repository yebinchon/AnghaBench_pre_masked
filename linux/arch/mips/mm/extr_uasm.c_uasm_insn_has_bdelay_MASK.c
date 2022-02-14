
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {scalar_t__ lab; scalar_t__ type; int * addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct uasm_reloc *VAR_3, u32 *VAR_4)
{
 for (; VAR_3->lab != VAR_2; VAR_3++) {
  if (VAR_3->addr == VAR_4
      && (VAR_3->type == VAR_1
   || VAR_3->type == VAR_0))
   return 1;
 }

 return 0;
}
