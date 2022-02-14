
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_crc_ctx {int poly; int key; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_crc_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_2)
{
 struct stm32_crc_ctx *VAR_3 = FUNC_0(VAR_2);

 VAR_3->key = VAR_1;
 VAR_3->poly = VAR_0;
 return 0;
}
