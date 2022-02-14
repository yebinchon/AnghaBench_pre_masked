
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in6 {int sin_len; int sin6_len; int sin6_addr; int sin6_port; int sin6_family; TYPE_2__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
union sctp_sockstore {struct sockaddr_in6 sin6; struct sockaddr_in6 sin; struct sockaddr sa; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_in {int sin_len; int sin6_len; int sin6_addr; int sin6_port; int sin6_family; TYPE_2__ sin_addr; int sin_port; int sin_family; } ;
struct TYPE_6__ {int port; } ;
struct sctp_tcb {int sctp_ep; TYPE_3__ asoc; int rport; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_nets {int dummy; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct TYPE_4__ {int param_length; } ;
struct sctp_asconf_paramhdr {int correlation_id; TYPE_1__ ph; } ;
struct mbuf {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct sockaddr*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sockaddr_in6*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sctp_tcb*,struct sockaddr*,struct sctp_nets**,int ,int ,int ) ;
 struct mbuf* FUNC_11 (int ,int ,int *,int) ;
 struct mbuf* FUNC_12 (int ) ;
 int VAR_13 ;
 int FUNC_13 (struct sctp_tcb*,struct sctp_nets*,int ) ;
 int FUNC_14 (int ,int ,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_15 (int ,struct sctp_tcb*,int ,struct sockaddr*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_16(struct sockaddr *VAR_14, struct sctp_asconf_paramhdr *VAR_15,
    struct sctp_tcb *VAR_16, int VAR_17, int VAR_18)
{
 struct sctp_nets *VAR_19;
 struct mbuf *VAR_20 = ((void*)0);
 union sctp_sockstore VAR_21;
 struct sctp_paramhdr *VAR_22;
 uint16_t VAR_23, VAR_24;



 struct sockaddr *VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 VAR_24 = FUNC_9(VAR_15->ph.param_length);
 if (VAR_24 < sizeof(struct sctp_asconf_paramhdr) + sizeof(struct sctp_paramhdr)) {
  return (((void*)0));
 }
 VAR_22 = (struct sctp_paramhdr *)(VAR_15 + 1);
 VAR_23 = FUNC_9(VAR_22->param_type);






 VAR_25 = &VAR_21.sa;
 switch (VAR_23) {
 default:
  VAR_20 = FUNC_11(VAR_15->correlation_id,
      VAR_5, (uint8_t *)VAR_15,
      VAR_24);
  return (VAR_20);
 }


 if (VAR_26 && FUNC_5(VAR_13)) {
  VAR_25 = VAR_14;
  FUNC_3(VAR_7,
      "process_asconf_add_ip: using source addr ");
  FUNC_4(VAR_7, VAR_14);
 }
 VAR_19 = ((void*)0);

 if (VAR_27) {
  VAR_20 = FUNC_11(VAR_15->correlation_id,
      VAR_5, (uint8_t *)VAR_15,
      VAR_24);
 } else if (FUNC_10(VAR_16, VAR_25, &VAR_19, VAR_16->asoc.port,
      VAR_8,
     VAR_4) != 0) {
  FUNC_3(VAR_7,
      "process_asconf_add_ip: error adding address\n");
  VAR_20 = FUNC_11(VAR_15->correlation_id,
      VAR_6, (uint8_t *)VAR_15,
      VAR_24);
 } else {
  if (VAR_18) {
   VAR_20 =
       FUNC_12(VAR_15->correlation_id);
  }
  if (VAR_19 != ((void*)0)) {

   FUNC_15(VAR_9, VAR_16, 0, VAR_25, VAR_10);
   FUNC_14(VAR_12, VAR_16->sctp_ep, VAR_16, VAR_19);
   FUNC_14(VAR_11, VAR_16->sctp_ep,
       VAR_16, VAR_19);
   if (VAR_17) {
    FUNC_13(VAR_16, VAR_19, VAR_10);
   }
  }
 }
 return (VAR_20);
}
