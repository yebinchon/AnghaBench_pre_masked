
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int uc_sigmask; int uc_stack; int uc_link; int uc_flags; } ;
struct rt_sigframe {TYPE_3__ uc; int info; scalar_t__ retcode; } ;
struct pt_regs {unsigned long* areg; int depc; unsigned long threadptr; unsigned long ps; int pc; } ;
struct TYPE_5__ {int sa_flags; scalar_t__ sa_handler; scalar_t__ sa_restorer; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
struct ksignal {int sig; TYPE_2__ ka; int info; } ;
typedef int sigset_t ;
struct TYPE_8__ {unsigned long sas_ss_sp; unsigned long sas_ss_size; int pid; int comm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct rt_sigframe*,int) ;
 int FUNC_4 (int *,int *) ;
 TYPE_4__* VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ,int,struct rt_sigframe*,int ) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int FUNC_9 (struct rt_sigframe*,struct pt_regs*) ;
 int FUNC_10 (struct pt_regs*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct ksignal *VAR_9, sigset_t *VAR_10,
         struct pt_regs *VAR_11)
{
 struct rt_sigframe *VAR_12;
 int VAR_13 = 0, VAR_14 = VAR_9->sig;
 unsigned long VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;

 VAR_15 = VAR_11->areg[1];

 if ((VAR_9->ka.sa.sa_flags & VAR_5) != 0 && FUNC_8(VAR_15) == 0) {
  VAR_15 = VAR_8->sas_ss_sp + VAR_8->sas_ss_size;
 }

 VAR_12 = (void *)((VAR_15 - sizeof(*VAR_12)) & -16ul);

 if (VAR_11->depc > 64)
  FUNC_6 ("Double exception sys_sigreturn\n");

 if (!FUNC_3(VAR_12, sizeof(*VAR_12))) {
  return -VAR_0;
 }

 if (VAR_9->ka.sa.sa_flags & VAR_7) {
  VAR_13 |= FUNC_4(&VAR_12->info, &VAR_9->info);
 }



 VAR_13 |= FUNC_1(0, &VAR_12->uc.uc_flags);
 VAR_13 |= FUNC_1(0, &VAR_12->uc.uc_link);
 VAR_13 |= FUNC_2(&VAR_12->uc.uc_stack, VAR_11->areg[1]);
 VAR_13 |= FUNC_9(VAR_12, VAR_11);
 VAR_13 |= FUNC_0(&VAR_12->uc.uc_sigmask, VAR_10, sizeof(*VAR_10));

 if (VAR_9->ka.sa.sa_flags & VAR_6) {
  VAR_16 = (unsigned long)VAR_9->ka.sa.sa_restorer;
 } else {



  VAR_13 |= FUNC_5(VAR_12->retcode);

  if (VAR_13) {
   return -VAR_0;
  }
  VAR_16 = (unsigned long) VAR_12->retcode;
 }







 VAR_17 = VAR_11->threadptr;
 VAR_18 = VAR_11->ps;
 FUNC_10(VAR_11, (unsigned long) VAR_9->ka.sa.sa_handler,
       (unsigned long) VAR_12);


 if (VAR_18 & VAR_4) {
  VAR_19 = 4;
  VAR_11->areg[VAR_19] =
   (((unsigned long) VAR_16) & 0x3fffffff) | 0x40000000;
  VAR_18 = (VAR_18 & ~(VAR_1 | VAR_3)) |
   (1 << VAR_2);
 } else {
  VAR_19 = 0;
  VAR_11->areg[VAR_19] = (unsigned long) VAR_16;
 }
 VAR_11->areg[VAR_19 + 2] = (unsigned long) VAR_14;
 VAR_11->areg[VAR_19 + 3] = (unsigned long) &VAR_12->info;
 VAR_11->areg[VAR_19 + 4] = (unsigned long) &VAR_12->uc;
 VAR_11->threadptr = VAR_17;
 VAR_11->ps = VAR_18;

 FUNC_7("SIG rt deliver (%s:%d): signal=%d sp=%p pc=%08lx\n",
   VAR_8->comm, VAR_8->pid, VAR_14, VAR_12, VAR_11->pc);

 return 0;
}
