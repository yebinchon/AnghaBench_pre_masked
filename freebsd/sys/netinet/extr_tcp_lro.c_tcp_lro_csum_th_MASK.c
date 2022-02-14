
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct tcphdr {int th_sum; scalar_t__ th_off; } ;



__attribute__((used)) static uint16_t
FUNC_0(struct tcphdr *VAR_0)
{
 uint32_t VAR_1;
 uint16_t *VAR_2, VAR_3;

 VAR_1 = VAR_0->th_sum = 0x0000;
 VAR_3 = VAR_0->th_off;
 VAR_2 = (uint16_t *)VAR_0;
 while (VAR_3 > 0) {
  VAR_1 += *VAR_2;
  VAR_2++;
  VAR_1 += *VAR_2;
  VAR_2++;
  VAR_3--;
 }
 while (VAR_1 > 0xffff)
  VAR_1 = (VAR_1 >> 16) + (VAR_1 & 0xffff);

 return (VAR_1 & 0xffff);
}
