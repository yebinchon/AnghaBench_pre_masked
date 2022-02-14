
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int odd; int evn; } ;
typedef TYPE_1__ cf_sha3_bi ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(cf_sha3_bi *VAR_0, const uint8_t VAR_1[8])
{
  uint32_t VAR_2 = FUNC_0(VAR_1 + 0),
           VAR_3 = FUNC_0(VAR_1 + 4);

  VAR_2 = FUNC_1(VAR_2);
  VAR_3 = FUNC_1(VAR_3);

  VAR_0->odd = (VAR_2 & 0x0000ffff) | (VAR_3 << 16);
  VAR_0->evn = (VAR_2 >> 16) | (VAR_3 & 0xffff0000);
}
