
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int tf_sstatus; int tf_sepc; int tf_gp; int tf_sp; int tf_ra; int tf_a; int tf_s; int tf_t; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_4__ {int gp_sstatus; int gp_sepc; int gp_gp; int gp_sp; int gp_ra; int gp_a; int gp_s; int gp_t; } ;
struct TYPE_5__ {TYPE_1__ mc_gpregs; } ;
typedef TYPE_2__ mcontext_t ;


 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct thread *VAR_0, mcontext_t *VAR_1)
{
 struct trapframe *VAR_2;

 VAR_2 = VAR_0->td_frame;

 FUNC_0(VAR_2->tf_t, VAR_1->mc_gpregs.gp_t, sizeof(VAR_2->tf_t));
 FUNC_0(VAR_2->tf_s, VAR_1->mc_gpregs.gp_s, sizeof(VAR_2->tf_s));
 FUNC_0(VAR_2->tf_a, VAR_1->mc_gpregs.gp_a, sizeof(VAR_2->tf_a));

 VAR_2->tf_ra = VAR_1->mc_gpregs.gp_ra;
 VAR_2->tf_sp = VAR_1->mc_gpregs.gp_sp;
 VAR_2->tf_gp = VAR_1->mc_gpregs.gp_gp;
 VAR_2->tf_sepc = VAR_1->mc_gpregs.gp_sepc;
 VAR_2->tf_sstatus = VAR_1->mc_gpregs.gp_sstatus;

 return (0);
}
