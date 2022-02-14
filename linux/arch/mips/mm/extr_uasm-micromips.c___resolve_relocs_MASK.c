
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uasm_reloc {int* addr; int type; } ;
struct uasm_label {scalar_t__ addr; } ;



 int FUNC_0 (long) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct uasm_reloc *VAR_0, struct uasm_label *VAR_1)
{
 long VAR_2 = (long)VAR_1->addr;
 long VAR_3 = (long)VAR_0->addr;

 switch (VAR_0->type) {
 case 128:



  *VAR_0->addr |= FUNC_0(VAR_2 - (VAR_3 + 4));

  break;

 default:
  FUNC_1("Unsupported Micro-assembler relocation %d",
        VAR_0->type);
 }
}
