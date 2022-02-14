
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rc_dec {int range; int code; } ;


 int FUNC_0 (struct rc_dec*) ;

__attribute__((used)) static inline void FUNC_1(struct rc_dec *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 do {
  FUNC_0(VAR_0);
  VAR_0->range >>= 1;
  VAR_0->code -= VAR_0->range;
  VAR_3 = (uint32_t)0 - (VAR_0->code >> 31);
  VAR_0->code += VAR_0->range & VAR_3;
  *VAR_1 = (*VAR_1 << 1) + (VAR_3 + 1);
 } while (--VAR_2 > 0);
}
