
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct csum_state {int val; } ;



void
FUNC_0(uint8_t *VAR_0, uint32_t VAR_1, struct csum_state *VAR_2)
{
 uint32_t VAR_3;

 for ( ; VAR_1 > 3; VAR_1 -= 4, VAR_0 += 4 ) {
  VAR_3 = VAR_0[0] + (VAR_0[1] << 8) + (VAR_0[2] << 16) + (VAR_0[3] << 24);
  VAR_2->val ^= VAR_3;
 }
}
