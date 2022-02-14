
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_dh_ctx {unsigned int p_size; } ;
struct crypto_kpp {int dummy; } ;


 struct qat_dh_ctx* FUNC_0 (struct crypto_kpp*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_kpp *VAR_0)
{
 struct qat_dh_ctx *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->p_size;
}
