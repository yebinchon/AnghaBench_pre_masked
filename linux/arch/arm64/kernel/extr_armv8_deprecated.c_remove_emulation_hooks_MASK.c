
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct undef_hook {scalar_t__ instr_mask; } ;
struct insn_emulation_ops {int name; struct undef_hook* hooks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct undef_hook*) ;

__attribute__((used)) static void FUNC_3(struct insn_emulation_ops *VAR_0)
{
 struct undef_hook *VAR_1;

 FUNC_0(!VAR_0->hooks);

 for (VAR_1 = VAR_0->hooks; VAR_1->instr_mask; VAR_1++)
  FUNC_2(VAR_1);

 FUNC_1("Removed %s emulation handler\n", VAR_0->name);
}
