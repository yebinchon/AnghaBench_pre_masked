
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* H; } ;
typedef TYPE_1__ cf_sha256_context ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(cf_sha256_context *VAR_0)
{
  FUNC_0(VAR_0, 0, sizeof *VAR_0);
  VAR_0->H[0] = 0x6a09e667;
  VAR_0->H[1] = 0xbb67ae85;
  VAR_0->H[2] = 0x3c6ef372;
  VAR_0->H[3] = 0xa54ff53a;
  VAR_0->H[4] = 0x510e527f;
  VAR_0->H[5] = 0x9b05688c;
  VAR_0->H[6] = 0x1f83d9ab;
  VAR_0->H[7] = 0x5be0cd19;
}
