
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_hmac_ctx {int hkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*,unsigned int) ;
 struct atmel_sha_hmac_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_ahash *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4)
{
 struct atmel_sha_hmac_ctx *VAR_5 = FUNC_1(VAR_2);

 if (FUNC_0(&VAR_5->hkey, VAR_3, VAR_4)) {
  FUNC_2(VAR_2, VAR_0);
  return -VAR_1;
 }

 return 0;
}
