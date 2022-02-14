
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_skcipher_req {int dummy; } ;
struct mv_cesa_ctx {int * ops; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int) ;
 struct mv_cesa_ctx* FUNC_2 (struct crypto_tfm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct mv_cesa_ctx *VAR_2 = FUNC_2(VAR_1);

 VAR_2->ops = &VAR_0;

 FUNC_1(FUNC_0(VAR_1),
        sizeof(struct mv_cesa_skcipher_req));

 return 0;
}
