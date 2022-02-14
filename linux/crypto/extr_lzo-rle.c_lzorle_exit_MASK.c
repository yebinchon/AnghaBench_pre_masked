
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzorle_ctx {int lzorle_comp_mem; } ;
struct crypto_tfm {int dummy; } ;


 struct lzorle_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct lzorle_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(((void*)0), VAR_1->lzorle_comp_mem);
}
