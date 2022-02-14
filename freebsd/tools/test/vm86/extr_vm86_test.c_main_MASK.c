
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va ;
struct TYPE_2__ {int mc_ecx; int mc_eflags; uintptr_t mc_cs; uintptr_t mc_ds; uintptr_t mc_es; uintptr_t mc_ss; int mc_esp; } ;
struct vm86_init_args {int ss_size; char* ss_sp; int sa_flags; TYPE_1__ uc_mcontext; int sa_sigaction; } ;
typedef struct vm86_init_args ucontext_t ;
typedef int uc ;
struct sigaction {int ss_size; char* ss_sp; int sa_flags; TYPE_1__ uc_mcontext; int sa_sigaction; } ;
typedef struct vm86_init_args stack_t ;
typedef int ssa ;
typedef int sa ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*) ;
 int VAR_15 ;
 int FUNC_1 (int ,struct vm86_init_args*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct vm86_init_args*,int ,int) ;
 void* FUNC_4 (void*,int,int,int,int,int ) ;
 int FUNC_5 () ;
 int VAR_16 ;
 int FUNC_6 (int ,struct vm86_init_args*,int *) ;
 int FUNC_7 (struct vm86_init_args*,int *) ;
 int FUNC_8 (struct vm86_init_args*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

int
FUNC_9(void)
{
 ucontext_t VAR_19;
 struct sigaction VAR_20;
 struct vm86_init_args VAR_21;
 stack_t VAR_22;
 char *VAR_23;

 VAR_15 = FUNC_5();

 FUNC_3(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.ss_size = VAR_3 * 128;
 VAR_22.ss_sp = FUNC_4(((void*)0), VAR_22.ss_size, VAR_5 | VAR_6 |
     VAR_4, VAR_0, -1, 0);
 if (VAR_22.ss_sp == VAR_1)
  FUNC_0(1, "mmap sigstack");
 if (FUNC_7(&VAR_22, ((void*)0)) == -1)
  FUNC_0(1, "sigaltstack");

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.sa_sigaction = VAR_16;
 VAR_20.sa_flags = VAR_10 | VAR_9;
 if (FUNC_6(VAR_11, &VAR_20, ((void*)0)) == -1)
  FUNC_0(1, "sigaction SIGBUS");
 if (FUNC_6(VAR_13, &VAR_20, ((void*)0)) == -1)
  FUNC_0(1, "sigaction SIGSEGV");
 if (FUNC_6(VAR_12, &VAR_20, ((void*)0)) == -1)
  FUNC_0(1, "sigaction SIGILL");

 VAR_23 = FUNC_4((void *)0x10000, VAR_3, VAR_5 | VAR_6 |
     VAR_4, VAR_0 | VAR_2, -1, 0);
 if (VAR_23 == VAR_1)
  FUNC_0(1, "mmap");
 FUNC_2(VAR_23, VAR_18, VAR_17 - VAR_18);

 FUNC_3(&VAR_21, 0, sizeof(VAR_21));
 if (FUNC_1(VAR_14, &VAR_21) == -1)
  FUNC_0(1, "VM86_INIT");

 FUNC_3(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.uc_mcontext.mc_ecx = 0x2345;
 VAR_19.uc_mcontext.mc_eflags = VAR_8 | VAR_7;
 VAR_19.uc_mcontext.mc_cs = VAR_19.uc_mcontext.mc_ds = VAR_19.uc_mcontext.mc_es =
     VAR_19.uc_mcontext.mc_ss = (uintptr_t)VAR_23 >> 4;
 VAR_19.uc_mcontext.mc_esp = 0xfffe;
 FUNC_8(&VAR_19);
}
