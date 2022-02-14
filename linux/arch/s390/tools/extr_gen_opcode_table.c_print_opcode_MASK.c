
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn {char* opcode; char* format; int name_len; char* name; char* upper; TYPE_1__* type; } ;
struct TYPE_2__ {scalar_t__ byte; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct insn *VAR_0, int VAR_1)
{
 char *VAR_2;

 VAR_2 = VAR_0->opcode;
 if (VAR_0->type->byte != 0)
  VAR_2 += 2;
 FUNC_0("\t[%4d] = { .opfrag = 0x%s, .format = INSTR_%s, ", VAR_1, VAR_2, VAR_0->format);
 if (VAR_0->name_len < 6)
  FUNC_0(".name = \"%s\" ", VAR_0->name);
 else
  FUNC_0(".offset = LONG_INSN_%s ", VAR_0->upper);
 FUNC_0("}, \\\n");
}
