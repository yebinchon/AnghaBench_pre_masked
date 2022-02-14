
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cryptd_aead_ctx {struct crypto_aead* child; } ;
struct cryptd_aead {int base; } ;


 struct cryptd_aead_ctx* FUNC_0 (int *) ;

struct crypto_aead *FUNC_1(struct cryptd_aead *VAR_0)
{
 struct cryptd_aead_ctx *VAR_1;
 VAR_1 = FUNC_0(&VAR_0->base);
 return VAR_1->child;
}
