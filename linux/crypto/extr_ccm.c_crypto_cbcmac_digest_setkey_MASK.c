
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct cbcmac_tfm_ctx {int child; } ;


 int FUNC_0 (int ,int const*,unsigned int) ;
 struct cbcmac_tfm_ctx* FUNC_1 (struct crypto_shash*) ;

__attribute__((used)) static int FUNC_2(struct crypto_shash *VAR_0,
         const u8 *VAR_1, unsigned int VAR_2)
{
 struct cbcmac_tfm_ctx *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->child, VAR_1, VAR_2);
}
