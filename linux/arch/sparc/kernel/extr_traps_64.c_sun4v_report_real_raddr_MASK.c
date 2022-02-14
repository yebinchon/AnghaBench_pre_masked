
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {int tstate; scalar_t__ tpc; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,unsigned int,int ) ;
 int FUNC_1 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, struct pt_regs *VAR_2)
{
 unsigned int VAR_3;
 u64 VAR_4;

 if (!(VAR_2->tstate & VAR_0))
  return;

 VAR_3 = *(unsigned int *) VAR_2->tpc;

 VAR_4 = FUNC_0(VAR_2, VAR_3, 0);

 FUNC_1("%s: insn effective address [0x%016llx]\n",
        VAR_1, VAR_4);
}
