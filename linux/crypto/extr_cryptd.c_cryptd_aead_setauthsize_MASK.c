
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cryptd_aead_ctx {struct crypto_aead* child; } ;


 struct cryptd_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_0,
       unsigned int VAR_1)
{
 struct cryptd_aead_ctx *VAR_2 = FUNC_0(VAR_0);
 struct crypto_aead *VAR_3 = VAR_2->child;

 return FUNC_1(VAR_3, VAR_1);
}
