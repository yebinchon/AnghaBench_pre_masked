
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t ncounter; scalar_t__ nblock; int nonce; } ;
typedef TYPE_1__ cf_chacha20_ctx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int const*,size_t) ;

void FUNC_3(cf_chacha20_ctx *VAR_0, const uint8_t *VAR_1, size_t VAR_2,
                             const uint8_t VAR_3[16], size_t VAR_4)
{
  FUNC_0(VAR_4 > 0);
  FUNC_2(VAR_0, VAR_1, VAR_2);
  FUNC_1(VAR_0->nonce, VAR_3, sizeof VAR_0->nonce);
  VAR_0->nblock = 0;
  VAR_0->ncounter = VAR_4;
}
