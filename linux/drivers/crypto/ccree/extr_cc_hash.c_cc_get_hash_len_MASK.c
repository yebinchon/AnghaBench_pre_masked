
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct cc_hash_ctx {scalar_t__ hash_mode; int drvdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct cc_hash_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2)
{
 struct cc_hash_ctx *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->hash_mode == VAR_1)
  return VAR_0;
 else
  return FUNC_0(VAR_3->drvdata);
}
