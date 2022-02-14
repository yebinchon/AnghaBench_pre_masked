
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct insn_emulation {int current_mode; TYPE_1__* ops; } ;
typedef enum insn_emulation_mode { ____Placeholder_insn_emulation_mode } insn_emulation_mode ;
struct TYPE_3__ {int name; } ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct insn_emulation*,int) ;

__attribute__((used)) static int FUNC_4(struct insn_emulation *VAR_0,
           enum insn_emulation_mode VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 128:
  break;
 case 130:
  FUNC_2(VAR_0->ops);
  break;
 case 129:
  if (!FUNC_3(VAR_0, 0))
   FUNC_0("Disabled %s support\n", VAR_0->ops->name);
  break;
 }

 switch (VAR_0->current_mode) {
 case 128:
  break;
 case 130:
  FUNC_1(VAR_0->ops);
  break;
 case 129:
  VAR_2 = FUNC_3(VAR_0, 1);
  if (!VAR_2)
   FUNC_0("Enabled %s support\n", VAR_0->ops->name);
  break;
 }

 return VAR_2;
}
