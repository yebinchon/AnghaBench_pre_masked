
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ MD5_CTX ;



void FUNC_0(MD5_CTX *VAR_0)

{
  VAR_0->count[0] = VAR_0->count[1] = 0;

  VAR_0->state[0] = 0x67452301;
  VAR_0->state[1] = 0xefcdab89;
  VAR_0->state[2] = 0x98badcfe;
  VAR_0->state[3] = 0x10325476;
}
