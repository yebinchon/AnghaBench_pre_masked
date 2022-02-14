
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; unsigned long npc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**,unsigned long*) ;

int FUNC_1(int VAR_1, int VAR_2, int VAR_3,
          char *VAR_4, char *VAR_5,
          struct pt_regs *VAR_6)
{
 unsigned long VAR_7;
 char *VAR_8;

 switch (VAR_4[0]) {
 case 'c':

  VAR_8 = &VAR_4[1];
  if (FUNC_0(&VAR_8, &VAR_7)) {
   VAR_6->pc = VAR_7;
   VAR_6->npc = VAR_7 + 4;
  }


 case 'D':
 case 'k':
  if (VAR_6->pc == (unsigned long) VAR_0) {
   VAR_6->pc = VAR_6->npc;
   VAR_6->npc += 4;
  }
  return 0;
 }
 return -1;
}
