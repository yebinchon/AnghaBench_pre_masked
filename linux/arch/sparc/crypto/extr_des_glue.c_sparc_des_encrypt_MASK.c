
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct des_sparc64_ctx {int * encrypt_expkey; } ;
struct crypto_tfm {int dummy; } ;


 struct des_sparc64_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int const*,int const*,int *) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct des_sparc64_ctx *VAR_3 = FUNC_0(VAR_0);
 const u64 *VAR_4 = VAR_3->encrypt_expkey;

 FUNC_1(VAR_4, (const u64 *) VAR_2, (u64 *) VAR_1);
}
