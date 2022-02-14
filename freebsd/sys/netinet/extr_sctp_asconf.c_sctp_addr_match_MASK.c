
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct sctp_paramhdr *VAR_2, struct sockaddr *VAR_3)
{






 switch (VAR_3->sa_family) {
 default:
  break;
 }
 return (0);
}
