
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct safexcel_inv_result {int dummy; } ;
struct safexcel_cipher_req {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_7__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct crypto_tfm*,int *,struct safexcel_cipher_req*,struct safexcel_inv_result*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct safexcel_cipher_req* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,struct safexcel_inv_result*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_5)
{
 FUNC_0(VAR_2, VAR_4, VAR_1);
 struct safexcel_cipher_req *VAR_6 = FUNC_4(VAR_2);
 struct safexcel_inv_result VAR_7 = {};

 FUNC_2(VAR_2, 0, sizeof(struct skcipher_request));

 FUNC_5(VAR_2, VAR_0,
          VAR_3, &VAR_7);
 FUNC_6(VAR_2, FUNC_1(VAR_5));

 return FUNC_3(VAR_5, &VAR_2->base, VAR_6, &VAR_7);
}
