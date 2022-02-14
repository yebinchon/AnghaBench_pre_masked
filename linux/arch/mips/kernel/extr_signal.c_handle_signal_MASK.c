
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pt_regs {int* regs; int cp0_epc; } ;
struct mips_abi {int (* setup_rt_frame ) (void*,struct ksignal*,struct pt_regs*,int *) ;int (* setup_frame ) (void*,struct ksignal*,struct pt_regs*,int *) ;TYPE_5__* vdso; } ;
struct TYPE_11__ {int sa_flags; } ;
struct TYPE_13__ {TYPE_4__ sa; } ;
struct ksignal {TYPE_6__ ka; } ;
typedef int sigset_t ;
struct TYPE_8__ {struct mips_abi* abi; } ;
struct TYPE_14__ {TYPE_3__* mm; TYPE_1__ thread; } ;
struct TYPE_12__ {int off_rt_sigreturn; int off_sigreturn; } ;
struct TYPE_9__ {void* vdso; } ;
struct TYPE_10__ {TYPE_2__ context; } ;


 void* VAR_0 ;




 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct ksignal*,struct pt_regs*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,struct mips_abi*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int,struct ksignal*,int ) ;
 int FUNC_5 (void*,struct ksignal*,struct pt_regs*,int *) ;
 int FUNC_6 (void*,struct ksignal*,struct pt_regs*,int *) ;

__attribute__((used)) static void FUNC_7(struct ksignal *VAR_3, struct pt_regs *VAR_4)
{
 sigset_t *VAR_5 = FUNC_3();
 int VAR_6;
 struct mips_abi *VAR_7 = VAR_2->thread.abi;
 void *VAR_8 = VAR_2->mm->context.vdso;







 FUNC_0(VAR_4);

 if (VAR_4->regs[0]) {
  switch(VAR_4->regs[2]) {
  case 128:
  case 131:
   VAR_4->regs[2] = VAR_0;
   break;
  case 129:
   if (!(VAR_3->ka.sa.sa_flags & VAR_1)) {
    VAR_4->regs[2] = VAR_0;
    break;
   }

  case 130:
   VAR_4->regs[7] = VAR_4->regs[26];
   VAR_4->regs[2] = VAR_4->regs[0];
   VAR_4->cp0_epc -= 4;
  }

  VAR_4->regs[0] = 0;
 }

 FUNC_1(VAR_3, VAR_4);

 if (FUNC_2(&VAR_3->ka, VAR_7))
  VAR_6 = VAR_7->setup_rt_frame(VAR_8 + VAR_7->vdso->off_rt_sigreturn,
       VAR_3, VAR_4, VAR_5);
 else
  VAR_6 = VAR_7->setup_frame(VAR_8 + VAR_7->vdso->off_sigreturn,
           VAR_3, VAR_4, VAR_5);

 FUNC_4(VAR_6, VAR_3, 0);
}
