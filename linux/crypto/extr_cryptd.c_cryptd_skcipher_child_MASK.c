
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_skcipher {int dummy; } ;
struct cryptd_skcipher_ctx {TYPE_1__* child; } ;
struct cryptd_skcipher {int base; } ;
struct TYPE_2__ {struct crypto_skcipher base; } ;


 struct cryptd_skcipher_ctx* FUNC_0 (int *) ;

struct crypto_skcipher *FUNC_1(struct cryptd_skcipher *VAR_0)
{
 struct cryptd_skcipher_ctx *VAR_1 = FUNC_0(&VAR_0->base);

 return &VAR_1->child->base;
}
