
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_tfm {TYPE_2__* __crt_alg; } ;
struct crypto_async_request {struct crypto_tfm* tfm; } ;
struct chcr_context {int dev; } ;
struct TYPE_3__ {int complete; } ;
struct adapter {TYPE_1__ chcr_stats; } ;
struct TYPE_4__ {int cra_flags; } ;





 int VAR_0 ;
 int FUNC_0 (struct crypto_async_request*) ;
 int FUNC_1 (struct crypto_async_request*) ;
 int FUNC_2 (struct crypto_async_request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 struct chcr_context* FUNC_7 (struct crypto_tfm*) ;
 struct adapter* FUNC_8 (int ) ;

int FUNC_9(struct crypto_async_request *VAR_1, unsigned char *VAR_2,
    int VAR_3)
{
 struct crypto_tfm *VAR_4 = VAR_1->tfm;
 struct chcr_context *VAR_5 = FUNC_7(VAR_4);
 struct adapter *VAR_6 = FUNC_8(VAR_5->dev);

 switch (VAR_4->__crt_alg->cra_flags & VAR_0) {
 case 129:
  VAR_3 = FUNC_4(FUNC_1(VAR_1), VAR_2, VAR_3);
  break;

 case 130:
   FUNC_6(FUNC_0(VAR_1),
            VAR_2, VAR_3);
  break;
 case 128:
  FUNC_5(FUNC_2(VAR_1), VAR_2, VAR_3);
  }
 FUNC_3(&VAR_6->chcr_stats.complete);
 return VAR_3;
}
