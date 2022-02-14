
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sockaddr_in6 {int sin_len; int sin6_len; int sin6_addr; int sin_addr; int sin6_port; int sin6_family; int sin_port; int sin_family; } ;
struct sockaddr_in {int sin_len; int sin6_len; int sin6_addr; int sin_addr; int sin6_port; int sin6_family; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sctphdr {int src_port; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_nets {int dummy; } ;
struct sctp_ipv6addr_param {int addr; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct sctp_inpcb {int dummy; } ;
struct sctp_init_chunk {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int sin6 ;
typedef int sin4 ;
typedef int param_buf ;
typedef int ip6_param ;
typedef int ip4_param ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct sockaddr_in6*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sctp_tcb* FUNC_4 (struct sctp_inpcb**,struct sockaddr*,struct sctp_nets**,struct sockaddr*,int *) ;
 struct sctp_paramhdr* FUNC_5 (struct mbuf*,int,struct sctp_paramhdr*,int) ;

__attribute__((used)) static struct sctp_tcb *
FUNC_6(struct mbuf *VAR_4, int VAR_5,
    struct sctphdr *VAR_6, struct sctp_inpcb **VAR_7, struct sctp_nets **VAR_8,
    struct sockaddr *VAR_9)
{
 struct sctp_paramhdr *VAR_10, VAR_11;




 uint16_t VAR_12;
 VAR_5 += sizeof(struct sctp_init_chunk);

 VAR_10 = FUNC_5(VAR_4, VAR_5, &VAR_11, sizeof(VAR_11));
 while (VAR_10 != ((void*)0)) {




  VAR_12 = FUNC_3(VAR_10->param_length);
  if (VAR_12 == 0) {
   break;
  }
  VAR_5 += FUNC_0(VAR_12);
  VAR_10 = FUNC_5(VAR_4, VAR_5, &VAR_11,
      sizeof(VAR_11));
 }
 return (((void*)0));
}
