
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct anubis_ctx {int R; int D; } ;


 int FUNC_0 (int ,int *,int const*,int ) ;
 struct anubis_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct anubis_ctx *VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_3->D, VAR_1, VAR_2, VAR_3->R);
}
