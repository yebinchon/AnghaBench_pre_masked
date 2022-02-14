
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ctxr; } ;
struct safexcel_cipher_ctx {TYPE_2__ base; int key; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 struct safexcel_cipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_1)
{
 struct safexcel_cipher_ctx *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->key, sizeof(VAR_2->key));


 if (!VAR_2->base.ctxr)
  return -VAR_0;

 FUNC_1(VAR_2->base.ctxr->data, sizeof(VAR_2->base.ctxr->data));
 return 0;
}
