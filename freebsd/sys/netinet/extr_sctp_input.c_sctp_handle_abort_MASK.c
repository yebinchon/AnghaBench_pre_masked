
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct socket {int dummy; } ;
struct TYPE_4__ {int refcnt; } ;
struct sctp_tcb {int sctp_ep; TYPE_2__ asoc; } ;
struct sctp_nets {int dummy; } ;
struct sctp_error_cause {int code; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_3__ {int chunk_flags; int chunk_length; } ;
struct sctp_abort_chunk {TYPE_1__ ch; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sctp_tcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct sctp_tcb*) ;
 struct socket* FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sctp_tcb*) ;
 int FUNC_9 (struct sctp_tcb*) ;
 int VAR_11 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sctp_tcb*,int,int,struct sctp_abort_chunk*,int ) ;
 int FUNC_14 (int ,struct sctp_tcb*,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (struct sctp_tcb*) ;
 scalar_t__ FUNC_16 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_17 (struct sctp_tcb*) ;
 int FUNC_18 (int ,int ,struct sctp_tcb*,struct sctp_nets*,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_19(struct sctp_abort_chunk *VAR_14,
    struct sctp_tcb *VAR_15, struct sctp_nets *VAR_16)
{



 uint16_t VAR_17;
 uint16_t VAR_18;

 FUNC_0(VAR_2, "sctp_handle_abort: handling ABORT\n");
 if (VAR_15 == ((void*)0))
  return (0);

 VAR_17 = FUNC_12(VAR_14->ch.chunk_length);
 if (VAR_17 >= sizeof(struct sctp_chunkhdr) + sizeof(struct sctp_error_cause)) {




  struct sctp_error_cause *VAR_19;

  VAR_19 = (struct sctp_error_cause *)(VAR_14 + 1);
  VAR_18 = FUNC_12(VAR_19->code);
  if (VAR_18 == VAR_0) {
   FUNC_0(VAR_2, "Received Colliding state abort flags:%x\n",
       VAR_14->ch.chunk_flags);
   if (FUNC_15(VAR_15)) {
    return (0);
   }
  } else if (VAR_18 == VAR_1) {
   FUNC_0(VAR_2, "Received missing state abort flags:%x\n",
       VAR_14->ch.chunk_flags);
   if (FUNC_16(VAR_15, VAR_16)) {
    return (0);
   }
  }
 } else {
  VAR_18 = 0;
 }

 FUNC_18(VAR_11, VAR_15->sctp_ep, VAR_15, VAR_16,
     VAR_3 + VAR_4);

 FUNC_13(VAR_15, 1, VAR_18, VAR_14, VAR_7);

 FUNC_7(VAR_12);
 if ((FUNC_2(VAR_15) == VAR_8) ||
     (FUNC_2(VAR_15) == VAR_9)) {
  FUNC_6(VAR_13);
 }
 FUNC_1(VAR_15, VAR_10);
 (void)FUNC_14(VAR_15->sctp_ep, VAR_15, VAR_6,
     VAR_3 + VAR_5);



 FUNC_0(VAR_2, "sctp_handle_abort: finished\n");
 return (1);
}
