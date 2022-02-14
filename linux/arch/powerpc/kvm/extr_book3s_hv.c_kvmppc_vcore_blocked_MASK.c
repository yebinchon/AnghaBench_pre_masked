
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kvmppc_vcore {scalar_t__ halt_poll_ns; TYPE_2__* runner; void* vcore_state; int lock; int wq; } ;
typedef int ktime_t ;
struct TYPE_3__ {int halt_poll_success_ns; int halt_poll_fail_ns; int halt_wait_ns; int halt_successful_wait; int halt_successful_poll; int halt_attempted_poll; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct kvmppc_vcore*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct kvmppc_vcore*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct kvmppc_vcore*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct kvmppc_vcore*,int) ;
 int FUNC_15 (int,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_16(struct kvmppc_vcore *VAR_6)
{
 ktime_t VAR_7, VAR_8, VAR_9;
 int VAR_10 = 1;
 u64 VAR_11;
 FUNC_0(VAR_5);


 VAR_7 = VAR_8 = FUNC_5();
 if (VAR_6->halt_poll_ns) {
  ktime_t VAR_12 = FUNC_3(VAR_8, VAR_6->halt_poll_ns);
  ++VAR_6->runner->stat.halt_attempted_poll;

  VAR_6->vcore_state = VAR_2;
  FUNC_13(&VAR_6->lock);

  do {
   if (FUNC_7(VAR_6)) {
    VAR_10 = 0;
    break;
   }
   VAR_7 = FUNC_5();
  } while (FUNC_11() && FUNC_4(VAR_7, VAR_12));

  FUNC_12(&VAR_6->lock);
  VAR_6->vcore_state = VAR_1;

  if (!VAR_10) {
   ++VAR_6->runner->stat.halt_successful_poll;
   goto out;
  }
 }

 FUNC_8(&VAR_6->wq, &VAR_5, VAR_0);

 if (FUNC_7(VAR_6)) {
  FUNC_1(&VAR_6->wq, &VAR_5);
  VAR_10 = 0;

  if (VAR_6->halt_poll_ns)
   ++VAR_6->runner->stat.halt_successful_poll;
  goto out;
 }

 VAR_9 = FUNC_5();

 VAR_6->vcore_state = VAR_3;
 FUNC_14(VAR_6, 0);
 FUNC_13(&VAR_6->lock);
 FUNC_9();
 FUNC_1(&VAR_6->wq, &VAR_5);
 FUNC_12(&VAR_6->lock);
 VAR_6->vcore_state = VAR_1;
 FUNC_14(VAR_6, 1);
 ++VAR_6->runner->stat.halt_successful_wait;

 VAR_7 = FUNC_5();

out:
 VAR_11 = FUNC_6(VAR_7) - FUNC_6(VAR_8);


 if (VAR_10) {
  VAR_6->runner->stat.halt_wait_ns +=
   FUNC_6(VAR_7) - FUNC_6(VAR_9);

  if (VAR_6->halt_poll_ns)
   VAR_6->runner->stat.halt_poll_fail_ns +=
    FUNC_6(VAR_9) -
    FUNC_6(VAR_8);
 } else {

  if (VAR_6->halt_poll_ns)
   VAR_6->runner->stat.halt_poll_success_ns +=
    FUNC_6(VAR_7) -
    FUNC_6(VAR_8);
 }


 if (VAR_4) {
  if (VAR_11 <= VAR_6->halt_poll_ns)
   ;

  else if (VAR_6->halt_poll_ns && VAR_11 > VAR_4)
   FUNC_10(VAR_6);

  else if (VAR_6->halt_poll_ns < VAR_4 &&
    VAR_11 < VAR_4)
   FUNC_2(VAR_6);
  if (VAR_6->halt_poll_ns > VAR_4)
   VAR_6->halt_poll_ns = VAR_4;
 } else
  VAR_6->halt_poll_ns = 0;

 FUNC_15(VAR_10, VAR_11);
}
