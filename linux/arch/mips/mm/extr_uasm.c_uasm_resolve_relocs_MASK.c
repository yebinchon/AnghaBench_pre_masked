
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uasm_reloc {scalar_t__ lab; } ;
struct uasm_label {scalar_t__ lab; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uasm_reloc*,struct uasm_label*) ;

void FUNC_1(struct uasm_reloc *VAR_1,
      struct uasm_label *VAR_2)
{
 struct uasm_label *VAR_3;

 for (; VAR_1->lab != VAR_0; VAR_1++)
  for (VAR_3 = VAR_2; VAR_3->lab != VAR_0; VAR_3++)
   if (VAR_1->lab == VAR_3->lab)
    FUNC_0(VAR_1, VAR_3);
}
