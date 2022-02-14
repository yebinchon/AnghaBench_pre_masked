
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {void* odd; void* evn; } ;
typedef TYPE_1__ cf_sha3_bi ;


 void* FUNC_0 (void*,int) ;

__attribute__((used)) static inline void FUNC_1(cf_sha3_bi *VAR_0, const cf_sha3_bi *VAR_1, uint8_t VAR_2)
{
  uint8_t VAR_3 = VAR_2 >> 1;


  if (VAR_2 & 1)
  {
    VAR_0->odd = FUNC_0(VAR_1->evn, VAR_3 + 1);
    VAR_0->evn = FUNC_0(VAR_1->odd, VAR_3);
  } else {
    VAR_0->evn = FUNC_0(VAR_1->evn, VAR_3);
    VAR_0->odd = FUNC_0(VAR_1->odd, VAR_3);
  }
}
