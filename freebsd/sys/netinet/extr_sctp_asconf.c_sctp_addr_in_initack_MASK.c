
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct mbuf {int dummy; } ;
struct in6_addr {int dummy; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct sockaddr_in6*,struct sockaddr_in6*,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct mbuf*,scalar_t__,int,int *) ;

__attribute__((used)) static uint32_t
FUNC_9(struct mbuf *VAR_2, uint32_t VAR_3, uint32_t VAR_4, struct sockaddr *VAR_5)
{
 struct sctp_paramhdr VAR_6, *VAR_7;
 uint16_t VAR_8, VAR_9;
 switch (VAR_5->sa_family) {
 default:
  return (0);
 }

 FUNC_1(VAR_1, "find_initack_addr: starting search for ");
 FUNC_2(VAR_1, VAR_5);

 VAR_4 += VAR_3;

 if ((VAR_3 + sizeof(struct sctp_paramhdr)) > VAR_4) {
  FUNC_1(VAR_0,
      "find_initack_addr: invalid offset?\n");
  return (0);
 }

 VAR_7 = (struct sctp_paramhdr *)FUNC_8(VAR_2, VAR_3,
     sizeof(struct sctp_paramhdr), (uint8_t *)&VAR_6);
 while (VAR_7 != ((void*)0)) {
  VAR_9 = FUNC_7(VAR_7->param_type);
  VAR_8 = FUNC_7(VAR_7->param_length);
  switch (VAR_9) {
  default:
   break;
  }

  VAR_3 += FUNC_3(VAR_8);
  if (VAR_3 + sizeof(struct sctp_paramhdr) > VAR_4) {
   return (0);
  }
  VAR_7 = (struct sctp_paramhdr *)
      FUNC_8(VAR_2, VAR_3, sizeof(struct sctp_paramhdr),
      (uint8_t *)&VAR_6);
 }

 return (0);
}
