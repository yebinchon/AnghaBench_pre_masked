
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int ncounter; scalar_t__ nblock; scalar_t__ nonce; } ;
typedef TYPE_1__ cf_chacha20_ctx ;


 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (TYPE_1__*,int const*,size_t) ;

void FUNC_3(cf_chacha20_ctx *VAR_0, const uint8_t *VAR_1, size_t VAR_2, const uint8_t VAR_3[8])
{
  FUNC_2(VAR_0, VAR_1, VAR_2);
  FUNC_1(VAR_0->nonce, 0, sizeof VAR_0->nonce);
  FUNC_0(VAR_0->nonce + 8, VAR_3, 8);
  VAR_0->nblock = 0;
  VAR_0->ncounter = 8;
}
