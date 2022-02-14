
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des_sparc64_ctx {int * encrypt_expkey; int * decrypt_expkey; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (struct crypto_tfm*,int const*) ;
 struct des_sparc64_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0, const u8 *VAR_1,
         unsigned int VAR_2)
{
 struct des_sparc64_ctx *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;





 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_2((const u32 *) VAR_1, &VAR_3->encrypt_expkey[0]);
 FUNC_3(&VAR_3->decrypt_expkey[0], &VAR_3->encrypt_expkey[0]);

 return 0;
}
