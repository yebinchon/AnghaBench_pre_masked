
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct cc_hash_ctx {int drvdata; } ;


 int FUNC_0 (struct cc_hash_ctx*) ;
 struct cc_hash_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct device*,char*) ;
 struct device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0)
{
 struct cc_hash_ctx *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = FUNC_3(VAR_1->drvdata);

 FUNC_2(VAR_2, "cc_cra_exit");
 FUNC_0(VAR_1);
}
