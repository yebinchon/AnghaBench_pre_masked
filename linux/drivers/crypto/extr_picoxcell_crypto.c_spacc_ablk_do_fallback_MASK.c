
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spacc_ablk_ctx {int sw_cipher; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ablkcipher_request {int info; int nbytes; int dst; int src; TYPE_1__ base; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*) ;
 struct crypto_tfm* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct spacc_ablk_ctx* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_10(struct ablkcipher_request *VAR_1,
      unsigned VAR_2, bool VAR_3)
{
 struct crypto_tfm *VAR_4 =
     FUNC_2(FUNC_1(VAR_1));
 struct spacc_ablk_ctx *VAR_5 = FUNC_5(VAR_4);
 FUNC_0(VAR_0, VAR_5->sw_cipher);
 int VAR_6;






 FUNC_8(VAR_0, VAR_5->sw_cipher);
 FUNC_6(VAR_0, VAR_1->base.flags, ((void*)0), ((void*)0));
 FUNC_7(VAR_0, VAR_1->src, VAR_1->dst,
       VAR_1->nbytes, VAR_1->info);
 VAR_6 = VAR_3 ? FUNC_4(VAR_0) :
      FUNC_3(VAR_0);
 FUNC_9(VAR_0);

 return VAR_6;
}
