
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ncounter; int nonce; int constant; int key1; int key0; } ;
typedef TYPE_1__ cf_chacha20_ctx ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t *VAR_1)
{
  cf_chacha20_ctx *VAR_2 = VAR_0;
  FUNC_0(VAR_2->key0,
                   VAR_2->key1,
                   VAR_2->nonce,
                   VAR_2->constant,
                   VAR_1);
  FUNC_1(VAR_2->nonce, VAR_2->ncounter);
}
