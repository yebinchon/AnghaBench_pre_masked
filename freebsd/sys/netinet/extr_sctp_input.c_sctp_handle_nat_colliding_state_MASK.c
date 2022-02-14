
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct sctpasochead {int dummy; } ;
struct TYPE_4__ {void* my_vtag; int refcnt; } ;
struct sctp_tcb {TYPE_2__* sctp_ep; TYPE_1__ asoc; int rport; } ;
struct TYPE_5__ {int sctp_lport; } ;


 int FUNC_0 (struct sctpasochead*,struct sctp_tcb*,int ) ;
 int FUNC_1 (struct sctp_tcb*,int ) ;
 struct sctpasochead* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sctp_tcb*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 size_t FUNC_6 (void*,struct sctpasochead*) ;
 int FUNC_7 (struct sctp_tcb*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (struct sctp_tcb*) ;
 int FUNC_9 (struct sctp_tcb*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_12 (TYPE_2__*,int ,int ,int) ;
 int FUNC_13 (TYPE_2__*,struct sctp_tcb*,int ) ;
 int FUNC_14 (struct sctp_tcb*) ;
 int FUNC_15 (struct sctp_tcb*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_16(struct sctp_tcb *VAR_6)
{




 uint32_t VAR_7;
 struct sctpasochead *VAR_8;

 if ((FUNC_3(VAR_6) == VAR_2) ||
     (FUNC_3(VAR_6) == VAR_1)) {
  VAR_7 = FUNC_12(VAR_6->sctp_ep, VAR_6->sctp_ep->sctp_lport, VAR_6->rport, 1);
  FUNC_10(&VAR_6->asoc.refcnt, 1);
  FUNC_9(VAR_6);
  FUNC_4();
  FUNC_8(VAR_6);
  FUNC_11(&VAR_6->asoc.refcnt, 1);
 } else {
  return (0);
 }
 if (FUNC_3(VAR_6) == VAR_2) {

  FUNC_1(VAR_6, VAR_5);
  VAR_6->asoc.my_vtag = VAR_7;
  VAR_8 = &FUNC_2(VAR_4)[FUNC_6(VAR_6->asoc.my_vtag, FUNC_2(VAR_3))];




  FUNC_0(VAR_8, VAR_6, VAR_5);
  FUNC_5();
  FUNC_13(VAR_6->sctp_ep, VAR_6, VAR_0);
  return (1);
 } else {





  FUNC_1(VAR_6, VAR_5);
  FUNC_7(VAR_6, VAR_2);
  FUNC_14(VAR_6);
  FUNC_15(VAR_6, &VAR_6->asoc);
  VAR_6->asoc.my_vtag = VAR_7;
  VAR_8 = &FUNC_2(VAR_4)[FUNC_6(VAR_6->asoc.my_vtag, FUNC_2(VAR_3))];




  FUNC_0(VAR_8, VAR_6, VAR_5);
  FUNC_5();
  FUNC_13(VAR_6->sctp_ep, VAR_6, VAR_0);
  return (1);
 }
 return (0);
}
