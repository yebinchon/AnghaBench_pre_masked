
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in6 {int sin_len; int sin6_len; int sin6_addr; int sin6_port; int sin6_family; TYPE_2__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
union sctp_sockstore {struct sockaddr_in6 sin6; struct sockaddr_in6 sin; struct sockaddr sa; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_in {int sin_len; int sin6_len; int sin6_addr; int sin6_port; int sin6_family; TYPE_2__ sin_addr; int sin_port; int sin_family; } ;
struct sctp_tcb {int rport; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct TYPE_3__ {int param_length; } ;
struct sctp_asconf_paramhdr {int correlation_id; TYPE_1__ ph; } ;
struct mbuf {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct sockaddr*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct sockaddr_in6*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sctp_tcb*,struct sockaddr*) ;
 struct mbuf* FUNC_8 (int ,int ,int *,int) ;
 struct mbuf* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sockaddr*,struct sockaddr*) ;
 int FUNC_11 (struct sctp_tcb*,struct sockaddr*) ;
 int VAR_10 ;
 int FUNC_12 (int ,struct sctp_tcb*,int ,struct sockaddr*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_13(struct sockaddr *VAR_11,
    struct sctp_asconf_paramhdr *VAR_12,
    struct sctp_tcb *VAR_13, int VAR_14)
{
 struct mbuf *VAR_15 = ((void*)0);
 union sctp_sockstore VAR_16;
 struct sctp_paramhdr *VAR_17;
 uint16_t VAR_18, VAR_19;



 struct sockaddr *VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 VAR_19 = FUNC_6(VAR_12->ph.param_length);
 if (VAR_19 < sizeof(struct sctp_asconf_paramhdr) + sizeof(struct sctp_paramhdr)) {
  return (((void*)0));
 }
 VAR_17 = (struct sctp_paramhdr *)(VAR_12 + 1);
 VAR_18 = FUNC_6(VAR_17->param_type);






 VAR_20 = &VAR_16.sa;
 switch (VAR_18) {
 default:
  VAR_15 = FUNC_8(VAR_12->correlation_id,
      VAR_6, (uint8_t *)VAR_12,
      VAR_19);
  return (VAR_15);
 }


 if (FUNC_10(VAR_20, VAR_11)) {

  FUNC_1(VAR_7, "process_asconf_delete_ip: tried to delete source addr\n");
  VAR_15 = FUNC_8(VAR_12->correlation_id,
      VAR_4, (uint8_t *)VAR_12,
      VAR_19);
  return (VAR_15);
 }


 if (VAR_21 && FUNC_3(VAR_10)) {
  VAR_22 = FUNC_7(VAR_13, VAR_11);

  if (VAR_22) {

   FUNC_1(VAR_7, "process_asconf_delete_ip: src addr does not exist?\n");

   VAR_15 =
       FUNC_8(VAR_12->correlation_id,
       VAR_5, (uint8_t *)VAR_12,
       VAR_19);
  } else if (VAR_14) {
   VAR_15 =
       FUNC_9(VAR_12->correlation_id);
  }
  return (VAR_15);
 }


 VAR_22 = FUNC_11(VAR_13, VAR_20);





 if (VAR_22 == -1) {

  FUNC_1(VAR_7, "process_asconf_delete_ip: tried to delete last IP addr!\n");
  VAR_15 = FUNC_8(VAR_12->correlation_id,
      VAR_3, (uint8_t *)VAR_12,
      VAR_19);
 } else {
  if (VAR_14) {
   VAR_15 = FUNC_9(VAR_12->correlation_id);
  }

  FUNC_12(VAR_8, VAR_13, 0, VAR_20, VAR_9);
 }
 return (VAR_15);
}
