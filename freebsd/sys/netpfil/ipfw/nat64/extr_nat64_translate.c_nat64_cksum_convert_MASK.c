
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ip6_hdr {int ip6_src; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct ip {TYPE_1__ ip_dst; TYPE_2__ ip_src; } ;



__attribute__((used)) static uint16_t
FUNC_0(struct ip6_hdr *VAR_0, struct ip *VAR_1)
{
 uint32_t VAR_2;
 uint16_t *VAR_3;

 VAR_2 = ~VAR_1->ip_src.s_addr >> 16;
 VAR_2 += ~VAR_1->ip_src.s_addr & 0xffff;
 VAR_2 += ~VAR_1->ip_dst.s_addr >> 16;
 VAR_2 += ~VAR_1->ip_dst.s_addr & 0xffff;

 for (VAR_3 = (uint16_t *)&VAR_0->ip6_src;
     VAR_3 < (uint16_t *)(&VAR_0->ip6_src + 2); VAR_3++)
  VAR_2 += *VAR_3;

 while (VAR_2 >> 16)
  VAR_2 = (VAR_2 & 0xffff) + (VAR_2 >> 16);
 return (VAR_2);
}
