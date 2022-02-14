
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sec_alg_tfm_ctx {TYPE_2__* queue; int pkey; scalar_t__ key; } ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev_info; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 struct sec_alg_tfm_ctx* FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct crypto_skcipher *VAR_1)
{
 struct sec_alg_tfm_ctx *VAR_2 = FUNC_0(VAR_1);
 struct device *VAR_3 = VAR_2->queue->dev_info->dev;

 if (VAR_2->key) {
  FUNC_2(VAR_2->key, VAR_0);
  FUNC_1(VAR_3, VAR_0, VAR_2->key,
      VAR_2->pkey);
 }
 FUNC_3(VAR_2->queue);
}
