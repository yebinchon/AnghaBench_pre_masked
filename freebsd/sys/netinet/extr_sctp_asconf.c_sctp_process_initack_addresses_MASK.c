
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {int sin_len; TYPE_2__ sin_addr; int sin_port; int sin_family; } ;
struct TYPE_5__ {int sin6_len; int sin6_addr; int sin6_port; int sin6_family; } ;
union sctp_sockstore {int sa; TYPE_3__ sin; TYPE_1__ sin6; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct TYPE_8__ {int primary_destination; scalar_t__ asconf_supported; int vrf_id; } ;
struct sctp_tcb {TYPE_4__ asoc; int sctp_ep; int rport; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct sctp_ifa {int dummy; } ;
struct mbuf {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sctp_tcb*) ;


 int VAR_4 ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (union sctp_sockstore*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sctp_tcb*,int *) ;
 struct sctp_ifa* FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct mbuf*,unsigned int,int,int *) ;
 int FUNC_11 (struct sctp_tcb*,int *,int ) ;
 int FUNC_12 (int ,int ,struct sctp_tcb*,int ) ;

__attribute__((used)) static void
FUNC_13(struct sctp_tcb *VAR_7, struct mbuf *VAR_8,
    unsigned int VAR_9, unsigned int VAR_10)
{
 struct sctp_paramhdr VAR_11, *VAR_12;
 uint16_t VAR_13, VAR_14;
 struct sctp_ifa *VAR_15;
 union sctp_sockstore VAR_16;







 FUNC_0(VAR_3, "processing init-ack addresses\n");
 if (VAR_7 == ((void*)0))
  return;


 VAR_10 += VAR_9;

 if ((VAR_9 + sizeof(struct sctp_paramhdr)) > VAR_10) {
  return;
 }

 VAR_12 = (struct sctp_paramhdr *)
     FUNC_10(VAR_8, VAR_9, sizeof(struct sctp_paramhdr),
     (uint8_t *)&VAR_11);
 while (VAR_12 != ((void*)0)) {
  VAR_14 = FUNC_6(VAR_12->param_type);
  VAR_13 = FUNC_6(VAR_12->param_length);
  switch (VAR_14) {
  default:
   goto next_addr;
  }


  VAR_15 = FUNC_8(&VAR_16.sa, VAR_7->asoc.vrf_id,
      VAR_2);
  if (VAR_15 == ((void*)0)) {

   int VAR_17;


   if ((FUNC_9(VAR_7->sctp_ep,
       VAR_4)) &&
       VAR_7->asoc.asconf_supported) {

    VAR_17 = FUNC_7(VAR_7, &VAR_16.sa);




    if (VAR_17 == 0 &&
        FUNC_1(VAR_7) == VAR_5) {





     FUNC_11(VAR_7, ((void*)0), VAR_2);

    }
   }
  }

next_addr:




  if (FUNC_3(VAR_13) == 0) {
   FUNC_2("process_initack_addrs: bad len (%d) type=%xh\n",
       VAR_13, VAR_14);
   return;
  }

  VAR_9 += FUNC_3(VAR_13);
  if ((VAR_9 + sizeof(struct sctp_paramhdr)) > VAR_10)
   return;
  VAR_12 = (struct sctp_paramhdr *)FUNC_10(VAR_8, VAR_9,
      sizeof(struct sctp_paramhdr), (uint8_t *)&VAR_11);
 }
}
