
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct camellia_sparc64_ctx {unsigned int key_len; int * decrypt_key; int * encrypt_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int *,unsigned int,int *) ;
 struct camellia_sparc64_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct camellia_sparc64_ctx *VAR_5 = FUNC_1(VAR_2);
 const u32 *VAR_6 = (const u32 *) VAR_3;
 u32 *VAR_7 = &VAR_2->crt_flags;

 if (VAR_4 != 16 && VAR_4 != 24 && VAR_4 != 32) {
  *VAR_7 |= VAR_0;
  return -VAR_1;
 }

 VAR_5->key_len = VAR_4;

 FUNC_0(VAR_6, &VAR_5->encrypt_key[0],
        VAR_4, &VAR_5->decrypt_key[0]);
 return 0;
}
