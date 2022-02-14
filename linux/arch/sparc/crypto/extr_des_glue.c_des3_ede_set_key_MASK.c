
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct des3_ede_sparc64_ctx {int * decrypt_expkey; int * encrypt_expkey; } ;
struct crypto_tfm {int dummy; } ;
typedef int k3 ;
typedef int k2 ;
typedef int k1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_tfm*,int const*) ;
 struct des3_ede_sparc64_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct des3_ede_sparc64_ctx *VAR_5 = FUNC_1(VAR_2);
 u64 VAR_6[VAR_0 / 2];
 u64 VAR_7[VAR_0 / 2];
 u64 VAR_8[VAR_0 / 2];
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_2((const u32 *)VAR_3, VAR_6);
 VAR_3 += VAR_1;
 FUNC_2((const u32 *)VAR_3, VAR_7);
 VAR_3 += VAR_1;
 FUNC_2((const u32 *)VAR_3, VAR_8);

 FUNC_4(&VAR_5->encrypt_expkey[0], &VAR_6[0], sizeof(VAR_6));
 FUNC_3(&VAR_5->encrypt_expkey[VAR_0 / 2], &VAR_7[0]);
 FUNC_4(&VAR_5->encrypt_expkey[(VAR_0 / 2) * 2],
        &VAR_8[0], sizeof(VAR_8));

 FUNC_3(&VAR_5->decrypt_expkey[0], &VAR_8[0]);
 FUNC_4(&VAR_5->decrypt_expkey[VAR_0 / 2],
        &VAR_7[0], sizeof(VAR_7));
 FUNC_3(&VAR_5->decrypt_expkey[(VAR_0 / 2) * 2],
      &VAR_6[0]);

 return 0;
}
