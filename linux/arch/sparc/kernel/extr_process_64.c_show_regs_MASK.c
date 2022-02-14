
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* u_regs; scalar_t__ tpc; int y; int tnpc; int tstate; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,void*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (int ,unsigned long*) ;

void FUNC_5(struct pt_regs *VAR_3)
{
 FUNC_2(VAR_0);

 FUNC_1("TSTATE: %016lx TPC: %016lx TNPC: %016lx Y: %08x    %s\n", VAR_3->tstate,
        VAR_3->tpc, VAR_3->tnpc, VAR_3->y, FUNC_0());
 FUNC_1("TPC: <%pS>\n", (void *) VAR_3->tpc);
 FUNC_1("g0: %016lx g1: %016lx g2: %016lx g3: %016lx\n",
        VAR_3->u_regs[0], VAR_3->u_regs[1], VAR_3->u_regs[2],
        VAR_3->u_regs[3]);
 FUNC_1("g4: %016lx g5: %016lx g6: %016lx g7: %016lx\n",
        VAR_3->u_regs[4], VAR_3->u_regs[5], VAR_3->u_regs[6],
        VAR_3->u_regs[7]);
 FUNC_1("o0: %016lx o1: %016lx o2: %016lx o3: %016lx\n",
        VAR_3->u_regs[8], VAR_3->u_regs[9], VAR_3->u_regs[10],
        VAR_3->u_regs[11]);
 FUNC_1("o4: %016lx o5: %016lx sp: %016lx ret_pc: %016lx\n",
        VAR_3->u_regs[12], VAR_3->u_regs[13], VAR_3->u_regs[14],
        VAR_3->u_regs[15]);
 FUNC_1("RPC: <%pS>\n", (void *) VAR_3->u_regs[15]);
 FUNC_3(VAR_3);
 FUNC_4(VAR_2, (unsigned long *) VAR_3->u_regs[VAR_1]);
}
