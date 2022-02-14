
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* hash; scalar_t__ cnt; scalar_t__ len; } ;
typedef TYPE_1__ ppc_SHA_CTX ;



int FUNC_0(ppc_SHA_CTX *VAR_0)
{
 VAR_0->hash[0] = 0x67452301;
 VAR_0->hash[1] = 0xEFCDAB89;
 VAR_0->hash[2] = 0x98BADCFE;
 VAR_0->hash[3] = 0x10325476;
 VAR_0->hash[4] = 0xC3D2E1F0;
 VAR_0->len = 0;
 VAR_0->cnt = 0;
 return 0;
}
