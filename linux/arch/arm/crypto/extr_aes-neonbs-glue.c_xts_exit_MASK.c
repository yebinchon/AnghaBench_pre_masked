
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct aesbs_xts_ctx {int cts_tfm; int tweak_tfm; } ;


 int FUNC_0 (int ) ;
 struct aesbs_xts_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct aesbs_xts_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->tweak_tfm);
 FUNC_0(VAR_1->cts_tfm);
}
