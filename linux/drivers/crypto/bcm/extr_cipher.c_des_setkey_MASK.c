
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iproc_ctx_s {int cipher_type; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 struct iproc_ctx_s* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_2(struct crypto_ablkcipher *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3)
{
 struct iproc_ctx_s *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4->cipher_type = VAR_0;
 return 0;
}
