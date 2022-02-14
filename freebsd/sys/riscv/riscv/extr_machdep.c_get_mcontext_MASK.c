
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int tf_sstatus; int tf_sepc; int tf_tp; int tf_gp; int tf_sp; int tf_ra; int tf_a; int tf_s; int tf_t; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_4__ {int gp_sstatus; int gp_sepc; int gp_tp; int gp_gp; int gp_sp; int gp_ra; scalar_t__* gp_t; scalar_t__* gp_a; scalar_t__* gp_s; } ;
struct TYPE_5__ {TYPE_1__ mc_gpregs; } ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int) ;

int
FUNC_1(struct thread *VAR_1, mcontext_t *VAR_2, int VAR_3)
{
 struct trapframe *VAR_4 = VAR_1->td_frame;

 FUNC_0(VAR_2->mc_gpregs.gp_t, VAR_4->tf_t, sizeof(VAR_2->mc_gpregs.gp_t));
 FUNC_0(VAR_2->mc_gpregs.gp_s, VAR_4->tf_s, sizeof(VAR_2->mc_gpregs.gp_s));
 FUNC_0(VAR_2->mc_gpregs.gp_a, VAR_4->tf_a, sizeof(VAR_2->mc_gpregs.gp_a));

 if (VAR_3 & VAR_0) {
  VAR_2->mc_gpregs.gp_a[0] = 0;
  VAR_2->mc_gpregs.gp_t[0] = 0;
 }

 VAR_2->mc_gpregs.gp_ra = VAR_4->tf_ra;
 VAR_2->mc_gpregs.gp_sp = VAR_4->tf_sp;
 VAR_2->mc_gpregs.gp_gp = VAR_4->tf_gp;
 VAR_2->mc_gpregs.gp_tp = VAR_4->tf_tp;
 VAR_2->mc_gpregs.gp_sepc = VAR_4->tf_sepc;
 VAR_2->mc_gpregs.gp_sstatus = VAR_4->tf_sstatus;

 return (0);
}
