
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int odd; int evn; } ;
typedef TYPE_1__ cf_sha3_bi ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline void FUNC_2(const cf_sha3_bi *VAR_0, uint8_t VAR_1[8])
{
  uint32_t VAR_2 = (VAR_0->odd & 0x0000ffff) | (VAR_0->evn << 16),
           VAR_3 = (VAR_0->odd >> 16) | (VAR_0->evn & 0xffff0000);

  VAR_2 = FUNC_0(VAR_2);
  VAR_3 = FUNC_0(VAR_3);

  FUNC_1(VAR_2, VAR_1 + 0);
  FUNC_1(VAR_3, VAR_1 + 4);
}
