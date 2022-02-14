
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct csum_state {int val; } ;



void
FUNC_0(uint8_t *VAR_0, uint32_t VAR_1, struct csum_state *VAR_2)
{
 for ( ; VAR_1 > 0; VAR_1 --) {
  VAR_2->val += *VAR_0++;
 }
}
