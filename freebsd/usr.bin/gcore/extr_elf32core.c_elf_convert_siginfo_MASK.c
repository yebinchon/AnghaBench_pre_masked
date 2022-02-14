
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {uintptr_t sival_ptr; scalar_t__ sival_int; } ;
struct siginfo32 {uintptr_t si_addr; int si_overrun; int si_timerid; TYPE_1__ si_value; int si_status; int si_uid; int si_pid; int si_code; int si_errno; int si_signo; } ;
struct TYPE_6__ {scalar_t__ sival_int; scalar_t__ sival_ptr; } ;
struct TYPE_7__ {int si_overrun; int si_timerid; TYPE_2__ si_value; scalar_t__ si_addr; int si_status; int si_uid; int si_pid; int si_code; int si_errno; int si_signo; } ;
typedef TYPE_3__ siginfo_t ;


 int FUNC_0 (struct siginfo32*,int) ;

__attribute__((used)) static void
FUNC_1(struct siginfo32 *VAR_0, siginfo_t *VAR_1)
{

 FUNC_0(VAR_0, sizeof(*VAR_0));
 VAR_0->si_signo = VAR_1->si_signo;
 VAR_0->si_errno = VAR_1->si_errno;
 VAR_0->si_code = VAR_1->si_code;
 VAR_0->si_pid = VAR_1->si_pid;
 VAR_0->si_uid = VAR_1->si_uid;
 VAR_0->si_status = VAR_1->si_status;
 VAR_0->si_addr = (uintptr_t)VAR_1->si_addr;

 if (VAR_1->si_value.sival_int == 0)
  VAR_0->si_value.sival_ptr = (uintptr_t)VAR_1->si_value.sival_ptr;
 else

  VAR_0->si_value.sival_int = VAR_1->si_value.sival_int;
 VAR_0->si_timerid = VAR_1->si_timerid;
 VAR_0->si_overrun = VAR_1->si_overrun;
}
