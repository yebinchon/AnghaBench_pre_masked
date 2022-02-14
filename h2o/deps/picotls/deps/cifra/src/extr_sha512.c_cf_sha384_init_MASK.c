
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** H; } ;
typedef TYPE_1__ cf_sha512_context ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(cf_sha512_context *VAR_0)
{
  FUNC_1(VAR_0, 0, sizeof *VAR_0);
  VAR_0->H[0] = FUNC_0(0xcbbb9d5dc1059ed8);
  VAR_0->H[1] = FUNC_0(0x629a292a367cd507);
  VAR_0->H[2] = FUNC_0(0x9159015a3070dd17);
  VAR_0->H[3] = FUNC_0(0x152fecd8f70e5939);
  VAR_0->H[4] = FUNC_0(0x67332667ffc00b31);
  VAR_0->H[5] = FUNC_0(0x8eb44a8768581511);
  VAR_0->H[6] = FUNC_0(0xdb0c2e0d64f98fa7);
  VAR_0->H[7] = FUNC_0(0x47b5481dbefa4fa4);
}
