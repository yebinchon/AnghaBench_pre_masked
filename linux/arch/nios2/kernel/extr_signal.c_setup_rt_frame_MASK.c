
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int uc_sigmask; int uc_stack; int uc_link; int uc_flags; } ;
struct rt_sigframe {TYPE_3__ uc; int info; } ;
struct pt_regs {unsigned long sp; unsigned long ra; unsigned long r4; unsigned long r5; unsigned long r6; unsigned long ea; } ;
struct TYPE_4__ {int sa_flags; scalar_t__ sa_handler; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;
struct ksignal {scalar_t__ sig; TYPE_2__ ka; int info; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (scalar_t__) ;
 struct rt_sigframe* FUNC_5 (struct ksignal*,struct pt_regs*,int) ;
 int FUNC_6 (TYPE_3__*,struct pt_regs*) ;

__attribute__((used)) static int FUNC_7(struct ksignal *VAR_2, sigset_t *VAR_3,
     struct pt_regs *VAR_4)
{
 struct rt_sigframe *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_5(VAR_2, VAR_4, sizeof(*VAR_5));

 if (VAR_2->ka.sa.sa_flags & VAR_1)
  VAR_6 |= FUNC_2(&VAR_5->info, &VAR_2->info);


 VAR_6 |= FUNC_0(0, &VAR_5->uc.uc_flags);
 VAR_6 |= FUNC_0(0, &VAR_5->uc.uc_link);
 VAR_6 |= FUNC_1(&VAR_5->uc.uc_stack, VAR_4->sp);
 VAR_6 |= FUNC_6(&VAR_5->uc, VAR_4);
 VAR_6 |= FUNC_3(&VAR_5->uc.uc_sigmask, VAR_3, sizeof(*VAR_3));

 if (VAR_6)
  goto give_sigsegv;



 VAR_4->ra = (unsigned long) (0x1044);


 VAR_4->sp = (unsigned long) VAR_5;
 VAR_4->r4 = (unsigned long) VAR_2->sig;
 VAR_4->r5 = (unsigned long) &VAR_5->info;
 VAR_4->r6 = (unsigned long) &VAR_5->uc;
 VAR_4->ea = (unsigned long) VAR_2->ka.sa.sa_handler;
 return 0;

give_sigsegv:
 FUNC_4(VAR_2->sig);
 return -VAR_0;
}
