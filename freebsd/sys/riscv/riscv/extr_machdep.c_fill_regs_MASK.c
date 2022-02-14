
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_a; int tf_s; int tf_t; int tf_tp; int tf_gp; int tf_sp; int tf_ra; int tf_sstatus; int tf_sepc; } ;
struct thread {struct trapframe* td_frame; } ;
struct reg {int a; int s; int t; int tp; int gp; int sp; int ra; int sstatus; int sepc; } ;


 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct thread *VAR_0, struct reg *VAR_1)
{
 struct trapframe *VAR_2;

 VAR_2 = VAR_0->td_frame;
 VAR_1->sepc = VAR_2->tf_sepc;
 VAR_1->sstatus = VAR_2->tf_sstatus;
 VAR_1->ra = VAR_2->tf_ra;
 VAR_1->sp = VAR_2->tf_sp;
 VAR_1->gp = VAR_2->tf_gp;
 VAR_1->tp = VAR_2->tf_tp;

 FUNC_0(VAR_1->t, VAR_2->tf_t, sizeof(VAR_1->t));
 FUNC_0(VAR_1->s, VAR_2->tf_s, sizeof(VAR_1->s));
 FUNC_0(VAR_1->a, VAR_2->tf_a, sizeof(VAR_1->a));

 return (0);
}
