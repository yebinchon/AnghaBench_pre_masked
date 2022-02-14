
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sec_alg_tfm_ctx {int lock; scalar_t__ key; int pkey; TYPE_2__* queue; } ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
typedef enum sec_cipher_alg { ____Placeholder_sec_cipher_alg } sec_cipher_alg ;
struct TYPE_4__ {TYPE_1__* dev_info; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sec_alg_tfm_ctx* FUNC_0 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct crypto_skcipher*,int const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_3,
       const u8 *VAR_4, unsigned int VAR_5,
       enum sec_cipher_alg VAR_6)
{
 struct sec_alg_tfm_ctx *VAR_7 = FUNC_0(VAR_3);
 struct device *VAR_8 = VAR_7->queue->dev_info->dev;

 FUNC_3(&VAR_7->lock);
 if (VAR_7->key) {

  FUNC_2(VAR_7->key, 0, VAR_2);
 } else {

  VAR_7->key = FUNC_1(VAR_8, VAR_2,
           &VAR_7->pkey, VAR_1);
  if (!VAR_7->key) {
   FUNC_4(&VAR_7->lock);
   return -VAR_0;
  }
 }
 FUNC_4(&VAR_7->lock);
 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

 return 0;
}
