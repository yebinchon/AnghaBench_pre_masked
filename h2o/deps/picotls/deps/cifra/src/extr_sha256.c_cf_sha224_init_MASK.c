
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
  VAR_0->H[0] = 0xc1059ed8;
  VAR_0->H[1] = 0x367cd507;
  VAR_0->H[2] = 0x3070dd17;
  VAR_0->H[3] = 0xf70e5939;
  VAR_0->H[4] = 0xffc00b31;
  VAR_0->H[5] = 0x68581511;
  VAR_0->H[6] = 0x64f98fa7;
  VAR_0->H[7] = 0xbefa4fa4;
}
