
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct socket {int dummy; } ;
struct TYPE_9__ {int state; scalar_t__ my_last_reported_rwnd; scalar_t__ refcnt; } ;
struct sctp_tcb {TYPE_3__ asoc; TYPE_1__* sctp_ep; scalar_t__ freed_by_sorcv_sincelast; struct socket* sctp_socket; } ;
struct TYPE_8__ {int sctp_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_tcb*) ;
 int FUNC_7 (struct sctp_tcb*) ;
 int VAR_9 ;
 int FUNC_8 (scalar_t__*,int) ;
 scalar_t__ FUNC_9 (struct sctp_tcb*,TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,struct sctp_tcb*,int ,int ) ;
 int FUNC_11 (struct sctp_tcb*,int ) ;
 int FUNC_12 (int ,TYPE_1__*,struct sctp_tcb*,int *,scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_13(struct sctp_tcb *VAR_11, uint32_t *VAR_12, int VAR_13,
    uint32_t VAR_14)
{

 int VAR_15 = 0;
 uint32_t VAR_16, VAR_17;
 struct socket *VAR_18 = ((void*)0);

 if (VAR_11 == ((void*)0))
  return;

 FUNC_8(&VAR_11->asoc.refcnt, 1);

 if ((FUNC_0(VAR_11) == VAR_7) ||
     (VAR_11->asoc.state & (VAR_6 | VAR_8))) {

  goto no_lock;
 }
 FUNC_2(VAR_11->sctp_ep);
 if ((VAR_11->sctp_ep->sctp_flags & VAR_4) ||
     (VAR_11->sctp_ep->sctp_flags & VAR_3)) {
  goto out;
 }
 VAR_18 = VAR_11->sctp_socket;
 if (VAR_18 == ((void*)0)) {
  goto out;
 }
 FUNC_8(&VAR_11->freed_by_sorcv_sincelast, *VAR_12);

 *VAR_12 = 0;



 VAR_17 = FUNC_9(VAR_11, &VAR_11->asoc);
 if (VAR_17 >= VAR_11->asoc.my_last_reported_rwnd) {
  VAR_16 = VAR_17 - VAR_11->asoc.my_last_reported_rwnd;
 } else {
  VAR_16 = 0;
 }
 if (VAR_16 >= VAR_14) {
  if (VAR_13) {
   FUNC_4(VAR_11->sctp_ep);
   VAR_15 = 1;
  }
  if (VAR_11->asoc.state & VAR_6) {





   goto out;
  }
  FUNC_6(VAR_11);
  if (VAR_11->asoc.state & VAR_6) {

   FUNC_7(VAR_11);
   goto out;
  }
  FUNC_5(VAR_10);
  FUNC_11(VAR_11, VAR_5);

  FUNC_10(VAR_11->sctp_ep, VAR_11,
      VAR_2, VAR_5);

  FUNC_12(VAR_9, VAR_11->sctp_ep, VAR_11, ((void*)0),
      VAR_0 + VAR_1);
  FUNC_7(VAR_11);
 } else {

  VAR_11->freed_by_sorcv_sincelast = VAR_16;
 }
out:
 if (VAR_18 && VAR_15 && VAR_13) {
  FUNC_3(VAR_11->sctp_ep);
 }

 FUNC_1(VAR_11->sctp_ep);
no_lock:
 FUNC_8(&VAR_11->asoc.refcnt, -1);
 return;
}
