
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzo_ctx {int lzo_comp_mem; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct lzo_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct lzo_ctx *VAR_2 = FUNC_1(VAR_1);

 VAR_2->lzo_comp_mem = FUNC_2(((void*)0));
 if (FUNC_0(VAR_2->lzo_comp_mem))
  return -VAR_0;

 return 0;
}
