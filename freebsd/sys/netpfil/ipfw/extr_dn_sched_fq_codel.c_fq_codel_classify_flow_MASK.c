
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct udphdr {int uh_dport; int uh_sport; } ;
struct tcphdr {int th_dport; int th_sport; } ;
struct mbuf {int dummy; } ;
struct TYPE_7__ {int s6_addr; } ;
struct TYPE_6__ {int s6_addr; } ;
struct ip6_hdr {int ip6_nxt; TYPE_2__ ip6_dst; TYPE_1__ ip6_src; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct ip {int ip_v; int ip_p; TYPE_4__ ip_dst; TYPE_3__ ip_src; } ;
struct fq_codel_si {int perturbation; } ;
struct TYPE_10__ {int iphdr_off; } ;


 int VAR_0 ;


 TYPE_5__* FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int*,int ,int) ;
 scalar_t__ FUNC_4 (struct mbuf*,int ) ;

__attribute__((used)) static inline int
FUNC_5(struct mbuf *VAR_1, uint16_t VAR_2, struct fq_codel_si *VAR_3)
{
 struct ip *VAR_4;
 struct tcphdr *VAR_5;
 struct udphdr *VAR_6;
 uint8_t VAR_7[41];
 uint16_t VAR_8=0;

 VAR_4 = (struct ip *)FUNC_4(VAR_1, FUNC_0(VAR_1)->iphdr_off);

 struct ip6_hdr *VAR_9;
 int VAR_10;
 VAR_10 = (VAR_4->ip_v == 6);

 if(VAR_10) {
  VAR_9 = (struct ip6_hdr *)VAR_4;
  *((uint8_t *) &VAR_7[0]) = VAR_9->ip6_nxt;
  *((uint32_t *) &VAR_7[1]) = VAR_3->perturbation;
  FUNC_2(&VAR_7[5], VAR_9->ip6_src.s6_addr, 16);
  FUNC_2(&VAR_7[21], VAR_9->ip6_dst.s6_addr, 16);

  switch (VAR_9->ip6_nxt) {
  case 129:
   VAR_5 = (struct tcphdr *)(VAR_9 + 1);
   *((uint16_t *) &VAR_7[37]) = VAR_5->th_dport;
   *((uint16_t *) &VAR_7[39]) = VAR_5->th_sport;
   break;

  case 128:
   VAR_6 = (struct udphdr *)(VAR_9 + 1);
   *((uint16_t *) &VAR_7[37]) = VAR_6->uh_dport;
   *((uint16_t *) &VAR_7[39]) = VAR_6->uh_sport;
   break;
  default:
   FUNC_3(&VAR_7[37], 0, 4);

  }

  VAR_8 = FUNC_1(VAR_7, 41, VAR_0) % VAR_2;
  return VAR_8;
 }



 *((uint8_t *) &VAR_7[0]) = VAR_4->ip_p;
 *((uint32_t *) &VAR_7[1]) = VAR_3->perturbation;
 *((uint32_t *) &VAR_7[5]) = VAR_4->ip_src.s_addr;
 *((uint32_t *) &VAR_7[9]) = VAR_4->ip_dst.s_addr;

 switch (VAR_4->ip_p) {
  case 129:
   VAR_5 = (struct tcphdr *)(VAR_4 + 1);
   *((uint16_t *) &VAR_7[13]) = VAR_5->th_dport;
   *((uint16_t *) &VAR_7[15]) = VAR_5->th_sport;
   break;

  case 128:
   VAR_6 = (struct udphdr *)(VAR_4 + 1);
   *((uint16_t *) &VAR_7[13]) = VAR_6->uh_dport;
   *((uint16_t *) &VAR_7[15]) = VAR_6->uh_sport;
   break;
  default:
   FUNC_3(&VAR_7[13], 0, 4);

 }
 VAR_8 = FUNC_1(VAR_7, 17, VAR_0) % VAR_2;

 return VAR_8;
}
