
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct camellia_sparc64_ctx {int key_len; int * encrypt_key; } ;


 int FUNC_0 (int *,int const*,int *,int ) ;
 struct camellia_sparc64_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct camellia_sparc64_ctx *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_3->encrypt_key[0],
          (const u32 *) VAR_2,
          (u32 *) VAR_1, VAR_3->key_len);
}
