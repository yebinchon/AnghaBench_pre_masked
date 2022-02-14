
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ncounter; scalar_t__ nblock; scalar_t__ nonce; int constant; scalar_t__ key1; scalar_t__ key0; } ;
typedef TYPE_1__ cf_salsa20_ctx ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int const*,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(cf_salsa20_ctx *VAR_2, const uint8_t *VAR_3, size_t VAR_4, const uint8_t VAR_5[8])
{
  switch (VAR_4)
  {
    case 16:
      FUNC_1(VAR_2->key0, VAR_3, 16);
      FUNC_1(VAR_2->key1, VAR_3, 16);
      VAR_2->constant = VAR_1;
      break;
    case 32:
      FUNC_1(VAR_2->key0, VAR_3, 16);
      FUNC_1(VAR_2->key1, VAR_3 + 16, 16);
      VAR_2->constant = VAR_0;
      break;
    default:
      FUNC_0();
  }

  FUNC_2(VAR_2->nonce, 0, sizeof VAR_2->nonce);
  FUNC_1(VAR_2->nonce + 8, VAR_5, 8);
  VAR_2->nblock = 0;
  VAR_2->ncounter = 8;
}
