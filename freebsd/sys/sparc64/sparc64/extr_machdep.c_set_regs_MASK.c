
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_wstate; } ;
struct thread {struct trapframe* td_frame; } ;
struct reg {int r_wstate; int r_tstate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct reg*,struct trapframe*,int) ;

int
FUNC_2(struct thread *VAR_1, struct reg *VAR_2)
{
 struct trapframe *VAR_3;

 if (!FUNC_0(VAR_2->r_tstate))
  return (VAR_0);
 VAR_3 = VAR_1->td_frame;
 VAR_2->r_wstate = VAR_3->tf_wstate;
 FUNC_1(VAR_2, VAR_3, sizeof(*VAR_2));
 return (0);
}
