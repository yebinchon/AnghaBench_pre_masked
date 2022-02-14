
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct udphdr {int uh_sport; int uh_dport; } ;
struct tcphdr {int th_sport; int th_dport; } ;
struct TYPE_7__ {int ip6_un1_nxt; } ;
struct TYPE_8__ {TYPE_3__ ip6_un1; } ;
struct TYPE_6__ {int* s6_addr; } ;
struct TYPE_5__ {int* s6_addr; } ;
struct ip6_hdr {TYPE_4__ ip6_ctlun; TYPE_2__ ip6_dst; TYPE_1__ ip6_src; } ;
struct ip {int dummy; } ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct ip*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_5(struct ip6_hdr *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3, VAR_4;
 uint32_t VAR_5 = 0;


 VAR_3 = VAR_0->ip6_src.s6_addr[0] |
  (VAR_0->ip6_src.s6_addr[1] << 8) |
  (VAR_0->ip6_src.s6_addr[2] << 16) |
  (VAR_0->ip6_src.s6_addr[3] << 24);
 VAR_4 = VAR_0->ip6_dst.s6_addr[0] |
  (VAR_0->ip6_dst.s6_addr[1] << 8) |
  (VAR_0->ip6_dst.s6_addr[2] << 16) |
  (VAR_0->ip6_dst.s6_addr[3] << 24);

 if (VAR_1 == 2) {
  VAR_5 = FUNC_4(FUNC_2(VAR_3),
     FUNC_2(VAR_4),
     FUNC_3(0xFFFD) + VAR_2,
     FUNC_3(0xFFFE) + VAR_2);
 } else {
  struct tcphdr *VAR_6 = ((void*)0);
  struct udphdr *VAR_7 = ((void*)0);

  switch(FUNC_3(VAR_0->ip6_ctlun.ip6_un1.ip6_un1_nxt)) {
  case 129:
   VAR_6 = (struct tcphdr *)(VAR_0 + 1);
   VAR_5 = FUNC_4(FUNC_2(VAR_3),
      FUNC_2(VAR_4),
      FUNC_3(VAR_6->th_sport) + VAR_2,
      FUNC_3(VAR_6->th_dport) + VAR_2);
   break;
  case 128:
   VAR_7 = (struct udphdr *)(VAR_0 + 1);
   VAR_5 = FUNC_4(FUNC_2(VAR_3),
      FUNC_2(VAR_4),
      FUNC_3(VAR_7->uh_sport) + VAR_2,
      FUNC_3(VAR_7->uh_dport) + VAR_2);
   break;
  case 132:

   VAR_5 = FUNC_1((struct ip *)(VAR_0 + 1),
           VAR_1, VAR_2);
   break;
  case 131:

   VAR_5 = FUNC_5((struct ip6_hdr *)(VAR_0 + 1),
      VAR_1, VAR_2);
   break;
  case 135:
   VAR_5 = FUNC_0((uint8_t *)(VAR_0 + 1), VAR_1, VAR_2);
   break;
  case 134:
  case 136:
  case 130:
  case 133:
  default:




   VAR_5 = FUNC_4(FUNC_2(VAR_3),
      FUNC_2(VAR_4),
      FUNC_3(0xFFFD) + VAR_2,
      FUNC_3(0xFFFE) + VAR_2);
  }
 }
 return VAR_5;
}
