
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct chksum_ctx {int key; } ;


 struct chksum_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_0)
{
 struct chksum_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->key = ~0;
 return 0;
}
