
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in6 {int sin_len; int sin6_len; int sin6_addr; int sin6_family; TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
union sctp_sockstore {struct sockaddr_in6 sin6; struct sockaddr_in6 sin; struct sockaddr sa; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_in {int sin_len; int sin6_len; int sin6_addr; int sin6_family; TYPE_2__ sin_addr; int sin_family; } ;
struct TYPE_7__ {int deleted_primary; TYPE_4__* primary_destination; int * alternate; } ;
struct sctp_tcb {TYPE_3__ asoc; int sctp_ep; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct TYPE_5__ {int param_length; } ;
struct sctp_asconf_paramhdr {int correlation_id; TYPE_1__ ph; } ;
struct mbuf {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int caddr_t ;
struct TYPE_8__ {int dest_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct sockaddr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;


 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct sockaddr_in6*,int ,int) ;
 int FUNC_6 (int ) ;
 struct mbuf* FUNC_7 (int ,int ,int *,int) ;
 struct mbuf* FUNC_8 (int ) ;
 int FUNC_9 (struct sctp_tcb*,TYPE_4__*) ;
 int FUNC_10 (int ,struct sctp_tcb*,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct sctp_tcb*,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (struct sctp_tcb*,struct sockaddr*,int *) ;
 int FUNC_15 (int ,int ,struct sctp_tcb*,int *,scalar_t__) ;
 int FUNC_16 (int ,struct sctp_tcb*,int ,struct sockaddr*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_17(struct sockaddr *VAR_17,
    struct sctp_asconf_paramhdr *VAR_18,
    struct sctp_tcb *VAR_19, int VAR_20)
{
 struct mbuf *VAR_21 = ((void*)0);
 union sctp_sockstore VAR_22;
 struct sctp_paramhdr *VAR_23;
 uint16_t VAR_24, VAR_25;



 struct sockaddr *VAR_26;
 int VAR_27 = 0;
 VAR_25 = FUNC_6(VAR_18->ph.param_length);
 if (VAR_25 < sizeof(struct sctp_asconf_paramhdr) + sizeof(struct sctp_paramhdr)) {
  return (((void*)0));
 }
 VAR_23 = (struct sctp_paramhdr *)(VAR_18 + 1);
 VAR_24 = FUNC_6(VAR_23->param_type);






 VAR_26 = &VAR_22.sa;
 switch (VAR_24) {
 default:
  VAR_21 = FUNC_7(VAR_18->correlation_id,
      VAR_6, (uint8_t *)VAR_18,
      VAR_25);
  return (VAR_21);
 }


 if (VAR_27 && FUNC_3(VAR_16)) {
  VAR_26 = VAR_17;
  FUNC_1(VAR_7,
      "process_asconf_set_primary: using source addr ");
  FUNC_2(VAR_7, VAR_17);
 }

 if (FUNC_14(VAR_19, VAR_26, ((void*)0)) == 0) {
  FUNC_1(VAR_7,
      "process_asconf_set_primary: primary address set\n");

  FUNC_16(VAR_13, VAR_19, 0, VAR_26, VAR_14);
  if ((VAR_19->asoc.primary_destination->dest_state & VAR_4) &&
      (!(VAR_19->asoc.primary_destination->dest_state & VAR_3)) &&
      (VAR_19->asoc.alternate)) {
   FUNC_11(VAR_19->asoc.alternate);
   VAR_19->asoc.alternate = ((void*)0);
  }
  if (VAR_20) {
   VAR_21 = FUNC_8(VAR_18->correlation_id);
  }
  if ((FUNC_12(VAR_19->sctp_ep,
      VAR_10) ||
      FUNC_12(VAR_19->sctp_ep,
      VAR_11)) &&
      FUNC_12(VAR_19->sctp_ep,
      VAR_12) &&
      (VAR_19->asoc.primary_destination->dest_state &
      VAR_5) == 0) {

   FUNC_15(VAR_15,
       VAR_19->sctp_ep, VAR_19, ((void*)0),
       VAR_8 + VAR_9);
   if (FUNC_12(VAR_19->sctp_ep,
       VAR_11)) {
    FUNC_9(VAR_19,
        VAR_19->asoc.primary_destination);
   }
   if (FUNC_12(VAR_19->sctp_ep,
       VAR_10)) {
    FUNC_13(VAR_19,
        VAR_19->asoc.deleted_primary);
   }
   FUNC_10(VAR_19->sctp_ep, VAR_19,
       VAR_19->asoc.deleted_primary);
  }
 } else {

  FUNC_1(VAR_7,
      "process_asconf_set_primary: set primary failed!\n");

  VAR_21 = FUNC_7(VAR_18->correlation_id,
      VAR_6, (uint8_t *)VAR_18,
      VAR_25);
 }

 return (VAR_21);
}
