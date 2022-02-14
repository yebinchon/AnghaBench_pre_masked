
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
  VAR_0->H[0] = FUNC_0(0x6a09e667f3bcc908);
  VAR_0->H[1] = FUNC_0(0xbb67ae8584caa73b);
  VAR_0->H[2] = FUNC_0(0x3c6ef372fe94f82b);
  VAR_0->H[3] = FUNC_0(0xa54ff53a5f1d36f1);
  VAR_0->H[4] = FUNC_0(0x510e527fade682d1);
  VAR_0->H[5] = FUNC_0(0x9b05688c2b3e6c1f);
  VAR_0->H[6] = FUNC_0(0x1f83d9abfb41bd6b);
  VAR_0->H[7] = FUNC_0(0x5be0cd19137e2179);
}
