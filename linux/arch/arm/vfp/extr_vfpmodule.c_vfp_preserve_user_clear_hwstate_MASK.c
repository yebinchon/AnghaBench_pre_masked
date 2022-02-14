
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfp_hard_struct {int fpscr; int fpinst2; int fpinst; int fpexc; int fpregs; } ;
struct user_vfp_exc {int fpinst2; int fpinst; int fpexc; } ;
struct user_vfp {int fpscr; int fpregs; } ;
struct TYPE_2__ {struct vfp_hard_struct hard; } ;
struct thread_info {TYPE_1__ vfpstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct thread_info*) ;
 int FUNC_3 (struct thread_info*) ;

int FUNC_4(struct user_vfp *VAR_2,
        struct user_vfp_exc *VAR_3)
{
 struct thread_info *VAR_4 = FUNC_0();
 struct vfp_hard_struct *VAR_5 = &VAR_4->vfpstate.hard;


 FUNC_3(VAR_4);





 FUNC_1(&VAR_2->fpregs, &VAR_5->fpregs, sizeof(VAR_5->fpregs));




 VAR_2->fpscr = VAR_5->fpscr;




 VAR_3->fpexc = VAR_5->fpexc;
 VAR_3->fpinst = VAR_5->fpinst;
 VAR_3->fpinst2 = VAR_5->fpinst2;


 FUNC_2(VAR_4);





 VAR_5->fpscr &= ~(VAR_0 | VAR_1);
 return 0;
}
