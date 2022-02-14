
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_dh_ctx {int g2; struct qat_crypto_instance* inst; scalar_t__ p_size; } ;
struct qat_crypto_instance {int dummy; } ;
struct crypto_kpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct qat_dh_ctx* FUNC_1 (struct crypto_kpp*) ;
 struct qat_crypto_instance* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_kpp *VAR_1)
{
 struct qat_dh_ctx *VAR_2 = FUNC_1(VAR_1);
 struct qat_crypto_instance *VAR_3 =
   FUNC_2(FUNC_0());

 if (!VAR_3)
  return -VAR_0;

 VAR_2->p_size = 0;
 VAR_2->g2 = 0;
 VAR_2->inst = VAR_3;
 return 0;
}
