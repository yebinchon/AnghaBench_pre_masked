
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct faultinfo {int dummy; } ;
typedef int siginfo_t ;


 int FUNC_0 (struct faultinfo,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

void __attribute__ ((__section__ (".__syscall_stub")))
FUNC_2(int VAR_1, siginfo_t *VAR_2, void *VAR_3)
{
 ucontext_t *VAR_4 = VAR_3;

 FUNC_0(*((struct faultinfo *) VAR_0),
         &VAR_4->uc_mcontext);
 FUNC_1();
}
