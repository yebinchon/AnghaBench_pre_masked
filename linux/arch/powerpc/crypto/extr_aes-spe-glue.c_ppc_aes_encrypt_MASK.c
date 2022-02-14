
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ppc_aes_ctx {int rounds; int key_enc; } ;
struct crypto_tfm {int dummy; } ;


 struct ppc_aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *,int const*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct ppc_aes_ctx *VAR_3 = FUNC_0(VAR_0);

 FUNC_2();
 FUNC_1(VAR_1, VAR_2, VAR_3->key_enc, VAR_3->rounds);
 FUNC_3();
}
