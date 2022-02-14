
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {int name_len; scalar_t__* name; int * upper; int format; int type; int opcode; } ;
struct gen_opcode {int nr; struct insn* insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct insn* FUNC_2 (struct insn*,int) ;
 int FUNC_3 (char*,int ,scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (unsigned char) ;

__attribute__((used)) static void FUNC_6(struct gen_opcode *VAR_2)
{
 struct insn VAR_3;
 int VAR_4, VAR_5;

 while (1) {
  VAR_4 = FUNC_3("%s %s %s", VAR_3.opcode, VAR_3.name, VAR_3.format);
  if (VAR_4 == VAR_0)
   break;
  if (VAR_4 != 3)
   FUNC_0(VAR_1);
  VAR_3.type = FUNC_1(VAR_3.format);
  VAR_3.name_len = FUNC_4(VAR_3.name);
  for (VAR_5 = 0; VAR_5 <= VAR_3.name_len; VAR_5++)
   VAR_3.upper[VAR_5] = FUNC_5((unsigned char)VAR_3.name[VAR_5]);
  VAR_2->nr++;
  VAR_2->insn = FUNC_2(VAR_2->insn, VAR_2->nr * sizeof(*VAR_2->insn));
  if (!VAR_2->insn)
   FUNC_0(VAR_1);
  VAR_2->insn[VAR_2->nr - 1] = VAR_3;
 }
}
