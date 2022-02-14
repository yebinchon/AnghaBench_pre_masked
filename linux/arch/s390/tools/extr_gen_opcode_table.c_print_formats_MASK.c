
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gen_opcode {int nr; TYPE_1__* insn; } ;
struct TYPE_2__ {char* format; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(struct gen_opcode *VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4;

 FUNC_1(VAR_1->insn, VAR_1->nr, sizeof(*VAR_1->insn), VAR_0);
 VAR_2 = "";
 VAR_4 = 0;
 FUNC_0("enum {\n");
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  if (!FUNC_2(VAR_2, VAR_1->insn[VAR_3].format))
   continue;
  VAR_4++;
  VAR_2 = VAR_1->insn[VAR_3].format;
  FUNC_0("\tINSTR_%s,\n", VAR_2);
 }
 FUNC_0("}; /* %d */\n\n", VAR_4);
}
