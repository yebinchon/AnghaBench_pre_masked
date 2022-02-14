
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uh ;
typedef int u_int16_t ;
struct udphdr {int uh_sport; int uh_dport; } ;
struct udpcb {int u_tun_ctx; int (* u_icmp_func ) (int,struct sockaddr const*,void*,int ) ;} ;
struct sockaddr_in6 {int dummy; } ;
typedef struct sockaddr {scalar_t__ sa_family; int sa_len; } const sockaddr ;
struct TYPE_2__ {int len; int rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ip6ctlparam {int ip6c_off; struct sockaddr_in6* ip6c_src; void* ip6c_cmdarg; struct ip6_hdr* ip6c_ip6; struct mbuf* ip6c_m; } ;
struct ip6_hdr {int ip6_src; int ip6_dst; } ;
struct inpcbinfo {int dummy; } ;
struct inpcb {int dummy; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int VAR_4 ;
 int FUNC_2 (struct udphdr*,int) ;
 struct inpcb* FUNC_3 (struct inpcbinfo*,int *,int ,int *,int ,int,int ,struct mbuf*) ;
 int FUNC_4 (struct inpcbinfo*,struct sockaddr const*,int ,struct sockaddr const*,int ,int,void*,struct inpcb* (*) (struct inpcb*,int)) ;
 struct inpcb* FUNC_5 (struct inpcb*,int) ;
 scalar_t__* VAR_5 ;
 struct udpcb* FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct mbuf*,int,int,int ) ;
 struct sockaddr_in6 VAR_6 ;
 int FUNC_8 (int,struct sockaddr const*,void*,int ) ;
 struct inpcb* FUNC_9 (struct inpcb*,int) ;

__attribute__((used)) static void
FUNC_10(int VAR_7, struct sockaddr *VAR_8, void *VAR_9,
    struct inpcbinfo *VAR_10)
{
 struct udphdr VAR_11;
 struct ip6_hdr *VAR_12;
 struct mbuf *VAR_13;
 int VAR_14 = 0;
 struct ip6ctlparam *VAR_15 = ((void*)0);
 const struct sockaddr_in6 *VAR_16 = ((void*)0);
 void *VAR_17;
 struct inpcb *(*VAR_18)(struct inpcb *, int) = FUNC_9;
 struct udp_portonly {
  u_int16_t uh_sport;
  u_int16_t uh_dport;
 } *VAR_19;

 if (VAR_8->sa_family != VAR_0 ||
     VAR_8->sa_len != sizeof(struct sockaddr_in6))
  return;

 if ((unsigned)VAR_7 >= VAR_4)
  return;
 if (FUNC_1(VAR_7))
  VAR_18 = FUNC_5, VAR_9 = ((void*)0);
 else if (VAR_7 == VAR_3)
  VAR_9 = ((void*)0);
 else if (VAR_5[VAR_7] == 0)
  return;


 if (VAR_9 != ((void*)0)) {
  VAR_15 = (struct ip6ctlparam *)VAR_9;
  VAR_13 = VAR_15->ip6c_m;
  VAR_12 = VAR_15->ip6c_ip6;
  VAR_14 = VAR_15->ip6c_off;
  VAR_17 = VAR_15->ip6c_cmdarg;
  VAR_16 = VAR_15->ip6c_src;
 } else {
  VAR_13 = ((void*)0);
  VAR_12 = ((void*)0);
  VAR_17 = ((void*)0);
  VAR_16 = &VAR_6;
 }

 if (VAR_12) {






  if (VAR_13->m_pkthdr.len < VAR_14 + sizeof(*VAR_19))
   return;

  FUNC_2(&VAR_11, sizeof(VAR_11));
  FUNC_7(VAR_13, VAR_14, sizeof(*VAR_19), (caddr_t)&VAR_11);

  if (!FUNC_1(VAR_7)) {

   struct inpcb *VAR_20;
   VAR_20 = FUNC_3(VAR_10, &VAR_12->ip6_dst,
       VAR_11.uh_dport, &VAR_12->ip6_src, VAR_11.uh_sport,
       VAR_2 | VAR_1,
       VAR_13->m_pkthdr.rcvif, VAR_13);
   if (VAR_20 != ((void*)0)) {
    struct udpcb *VAR_21;

    VAR_21 = FUNC_6(VAR_20);
    if (VAR_21->u_icmp_func) {

     FUNC_0(VAR_20);
     (*VAR_21->u_icmp_func)(VAR_7, (struct sockaddr *)VAR_15->ip6c_src,
           VAR_9, VAR_21->u_tun_ctx);
     return;
    } else {

     FUNC_0(VAR_20);
    }
   }
  }
  (void)FUNC_4(VAR_10, VAR_8, VAR_11.uh_dport,
      (struct sockaddr *)VAR_15->ip6c_src, VAR_11.uh_sport, VAR_7,
      VAR_17, VAR_18);
 } else
  (void)FUNC_4(VAR_10, VAR_8, 0,
      (const struct sockaddr *)VAR_16, 0, VAR_7, VAR_17, VAR_18);
}
