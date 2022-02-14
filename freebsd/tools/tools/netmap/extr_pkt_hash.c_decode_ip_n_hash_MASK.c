
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct udphdr {int uh_sport; int uh_dport; } ;
struct tcphdr {int th_sport; int th_dport; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct ip {int ip_p; int ip_hl; TYPE_2__ ip_dst; TYPE_1__ ip_src; } ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct ip *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3 = 0;

 if (VAR_1 == 2) {
  VAR_3 = FUNC_3(FUNC_1(VAR_0->ip_src.s_addr),
   FUNC_1(VAR_0->ip_dst.s_addr),
   FUNC_2(0xFFFD) + VAR_2,
   FUNC_2(0xFFFE) + VAR_2);
 } else {
  struct tcphdr *VAR_4 = ((void*)0);
  struct udphdr *VAR_5 = ((void*)0);

  switch (VAR_0->ip_p) {
  case 129:
   VAR_4 = (struct tcphdr *)((uint8_t *)VAR_0 + (VAR_0->ip_hl<<2));
   VAR_3 = FUNC_3(FUNC_1(VAR_0->ip_src.s_addr),
      FUNC_1(VAR_0->ip_dst.s_addr),
      FUNC_2(VAR_4->th_sport) + VAR_2,
      FUNC_2(VAR_4->th_dport) + VAR_2);
   break;
  case 128:
   VAR_5 = (struct udphdr *)((uint8_t *)VAR_0 + (VAR_0->ip_hl<<2));
   VAR_3 = FUNC_3(FUNC_1(VAR_0->ip_src.s_addr),
      FUNC_1(VAR_0->ip_dst.s_addr),
      FUNC_2(VAR_5->uh_sport) + VAR_2,
      FUNC_2(VAR_5->uh_dport) + VAR_2);
   break;
  case 131:

   VAR_3 = FUNC_4((struct ip *)((uint8_t *)VAR_0 + (VAR_0->ip_hl<<2)),
           VAR_1, VAR_2);
   break;
  case 134:
   VAR_3 = FUNC_0((uint8_t *)VAR_0 + (VAR_0->ip_hl<<2),
     VAR_1, VAR_2);
   break;
  case 133:
  case 135:
  case 130:
  case 132:
  default:




   VAR_3 = FUNC_3(FUNC_1(VAR_0->ip_src.s_addr),
      FUNC_1(VAR_0->ip_dst.s_addr),
      FUNC_2(0xFFFD) + VAR_2,
      FUNC_2(0xFFFE) + VAR_2);
   break;
  }
 }
 return VAR_3;
}
