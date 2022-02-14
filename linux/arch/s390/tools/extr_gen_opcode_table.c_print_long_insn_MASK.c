
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {int name_len; char* upper; char* name; } ;
struct gen_opcode {int nr; struct insn* insn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct insn*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct gen_opcode *VAR_1)
{
 struct insn *VAR_2;
 int VAR_3, VAR_4;

 FUNC_1(VAR_1->insn, VAR_1->nr, sizeof(*VAR_1->insn), VAR_0);
 VAR_4 = 0;
 FUNC_0("enum {\n");
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  VAR_2 = &VAR_1->insn[VAR_3];
  if (VAR_2->name_len < 6)
   continue;
  FUNC_0("\tLONG_INSN_%s,\n", VAR_2->upper);
  VAR_4++;
 }
 FUNC_0("}; /* %d */\n\n", VAR_4);

 FUNC_0("#define LONG_INSN_INITIALIZER { \\\n");
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  VAR_2 = &VAR_1->insn[VAR_3];
  if (VAR_2->name_len < 6)
   continue;
  FUNC_0("\t[LONG_INSN_%s] = \"%s\", \\\n", VAR_2->upper, VAR_2->name);
 }
 FUNC_0("}\n\n");
}
