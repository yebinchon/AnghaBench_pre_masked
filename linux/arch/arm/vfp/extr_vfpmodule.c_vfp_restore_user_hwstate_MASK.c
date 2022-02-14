
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfp_hard_struct {unsigned long fpexc; int fpinst2; int fpinst; int fpscr; int fpregs; } ;
struct user_vfp_exc {unsigned long fpexc; int fpinst2; int fpinst; } ;
struct user_vfp {int fpscr; int fpregs; } ;
struct TYPE_2__ {struct vfp_hard_struct hard; } ;
struct thread_info {TYPE_1__ vfpstate; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct thread_info*) ;

int FUNC_3(struct user_vfp *VAR_3, struct user_vfp_exc *VAR_4)
{
 struct thread_info *VAR_5 = FUNC_0();
 struct vfp_hard_struct *VAR_6 = &VAR_5->vfpstate.hard;
 unsigned long VAR_7;


 FUNC_2(VAR_5);





 FUNC_1(&VAR_6->fpregs, &VAR_3->fpregs, sizeof(VAR_6->fpregs));



 VAR_6->fpscr = VAR_3->fpscr;




 VAR_7 = VAR_4->fpexc;


 VAR_7 |= VAR_0;


 VAR_7 &= ~(VAR_1 | VAR_2);
 VAR_6->fpexc = VAR_7;

 VAR_6->fpinst = VAR_4->fpinst;
 VAR_6->fpinst2 = VAR_4->fpinst2;

 return 0;
}
