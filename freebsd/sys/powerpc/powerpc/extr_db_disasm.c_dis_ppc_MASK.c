
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct opcode {int mask; int code; int name; } ;
typedef int instr_t ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct opcode const*,int,int ,char*,int) ;
 int FUNC_2 (int,int ) ;

void
FUNC_3(const struct opcode *VAR_0, instr_t VAR_1, vm_offset_t VAR_2)
{
 const struct opcode *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 char VAR_6[80];

 for (VAR_5 = 0, VAR_3 = &VAR_0[0];
     VAR_4 == 0 && VAR_3->mask != 0;
     VAR_5++, VAR_3 = &VAR_0[VAR_5]) {
  if ((VAR_1 & VAR_3->mask) == VAR_3->code) {
   VAR_4 = 1;
   FUNC_1(VAR_3, VAR_1, VAR_2, VAR_6,
    sizeof VAR_6);
   FUNC_0("%s%s\n", VAR_3->name, VAR_6);
   return;
  }
 }
 FUNC_2(VAR_1, VAR_2);
}
