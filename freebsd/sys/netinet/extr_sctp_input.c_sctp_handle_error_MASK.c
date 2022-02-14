
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct socket {int dummy; } ;
struct sctp_association {int cookie_preserve_req; int refcnt; int max_init_times; int stale_cookie_count; } ;
struct sctp_tcb {int sctp_ep; struct sctp_association asoc; } ;
struct sctp_paramhdr {int param_type; } ;
struct sctp_nets {int dummy; } ;
struct TYPE_2__ {int chunk_type; } ;
struct sctp_error_unrecognized_chunk {TYPE_1__ ch; } ;
struct sctp_error_stale_cookie {int stale_time; } ;
struct sctp_error_cause {int length; int code; } ;
struct sctp_chunkhdr {int chunk_flags; int chunk_length; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sctp_tcb*) ;
 struct socket* FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sctp_tcb*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct sctp_tcb*) ;
 int FUNC_8 (struct sctp_tcb*) ;
 int VAR_9 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sctp_tcb*,int ,int ,int *,int ) ;
 int FUNC_14 (int ,struct sctp_tcb*,int ,scalar_t__) ;
 int FUNC_15 (struct sctp_tcb*) ;
 int FUNC_16 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_17 (struct sctp_tcb*,int ,struct sctp_nets*) ;
 int FUNC_18 (struct sctp_tcb*,int) ;
 int FUNC_19 (int ,struct sctp_tcb*,int ) ;
 int FUNC_20 (struct sctp_tcb*) ;
 int FUNC_21 (struct sctp_tcb*,struct sctp_association*) ;
 int FUNC_22 (int ,struct sctp_tcb*,int,struct sctp_chunkhdr*,int ) ;

__attribute__((used)) static int
FUNC_23(struct sctp_chunkhdr *VAR_10,
    struct sctp_tcb *VAR_11, struct sctp_nets *VAR_12, uint32_t VAR_13)
{
 struct sctp_error_cause *VAR_14;
 struct sctp_association *VAR_15;
 uint32_t VAR_16, VAR_17;
 uint16_t VAR_18, VAR_19, VAR_20;





 VAR_15 = &VAR_11->asoc;
 VAR_14 = (struct sctp_error_cause *)((caddr_t)VAR_10 +
     sizeof(struct sctp_chunkhdr));
 VAR_16 = FUNC_12(VAR_10->chunk_length);
 if (VAR_16 > VAR_13) {
  VAR_16 = VAR_13;
 }
 if (VAR_16 >= sizeof(struct sctp_chunkhdr)) {
  VAR_16 -= sizeof(struct sctp_chunkhdr);
 } else {
  VAR_16 = 0;
 }
 VAR_18 = 0;
 while (VAR_16 >= sizeof(struct sctp_error_cause)) {

  VAR_19 = FUNC_12(VAR_14->code);
  VAR_20 = FUNC_12(VAR_14->length);
  if ((VAR_20 > VAR_16) || (VAR_20 == 0)) {

   FUNC_0(VAR_0, "Bogus length in cause - bytes left: %u cause length: %u\n",
       VAR_16, VAR_20);
   return (0);
  }
  if (VAR_18 == 0) {

   VAR_18 = VAR_19;
  }
  switch (VAR_19) {
  case 138:
  case 137:
  case 139:
  case 134:
   FUNC_0(VAR_0, "Software error we got a %u back? We have a bug :/ (or do they?)\n",
       VAR_19);
   break;
  case 136:
   FUNC_0(VAR_1, "Received Colliding state abort flags: %x\n",
       VAR_10->chunk_flags);
   if (FUNC_15(VAR_11)) {
    return (0);
   }
   break;
  case 135:
   FUNC_0(VAR_1, "Received missing state abort flags: %x\n",
       VAR_10->chunk_flags);
   if (FUNC_16(VAR_11, VAR_12)) {
    return (0);
   }
   break;
  case 131:




   if ((VAR_20 >= sizeof(struct sctp_error_stale_cookie)) &&
       (FUNC_1(VAR_11) == VAR_7)) {
    struct sctp_error_stale_cookie *VAR_21;

    VAR_21 = (struct sctp_error_stale_cookie *)VAR_14;
    VAR_15->cookie_preserve_req = FUNC_11(VAR_21->stale_time);

    if (VAR_15->cookie_preserve_req <= VAR_9 / 2) {
     VAR_15->cookie_preserve_req *= 2;
    } else {
     VAR_15->cookie_preserve_req = VAR_9;
    }
    VAR_15->stale_cookie_count++;
    if (VAR_15->stale_cookie_count >
        VAR_15->max_init_times) {
     FUNC_13(VAR_11, 0, 0, ((void*)0), VAR_6);
     (void)FUNC_14(VAR_11->sctp_ep, VAR_11, VAR_4,
         VAR_2 + VAR_3);



     return (-1);
    }

    FUNC_21(VAR_11, &VAR_11->asoc);
    FUNC_3(VAR_11, VAR_8);
    FUNC_20(VAR_11);
    FUNC_19(VAR_11->sctp_ep, VAR_11, VAR_6);
   }
   break;
  case 128:
   break;
  case 130:
   if (VAR_20 >= sizeof(struct sctp_error_unrecognized_chunk)) {
    struct sctp_error_unrecognized_chunk *VAR_22;

    VAR_22 = (struct sctp_error_unrecognized_chunk *)VAR_14;
    FUNC_17(VAR_11, VAR_22->ch.chunk_type, VAR_12);
   }
   break;
  case 129:

   if (VAR_20 >= sizeof(struct sctp_error_cause) + sizeof(struct sctp_paramhdr)) {
    struct sctp_paramhdr *VAR_23;

    VAR_23 = (struct sctp_paramhdr *)(VAR_14 + 1);
    FUNC_18(VAR_11, FUNC_12(VAR_23->param_type));
   }
   break;
  case 142:






   break;
  case 141:
  case 132:
  case 140:




   FUNC_0(VAR_1, "Peer sends ASCONF errors in a error cause with code %u.\n",
       VAR_19);
   break;
  case 133:







   break;
  default:
   FUNC_0(VAR_0, "sctp_handle_error: unknown code 0x%x\n",
       VAR_19);
   break;
  }
  VAR_17 = FUNC_4(VAR_20);
  if (VAR_16 >= VAR_17) {
   VAR_16 -= VAR_17;
  } else {
   VAR_16 = 0;
  }
  VAR_14 = (struct sctp_error_cause *)((caddr_t)VAR_14 + VAR_17);
 }
 FUNC_22(VAR_5, VAR_11, VAR_18, VAR_10, VAR_6);
 return (0);
}
