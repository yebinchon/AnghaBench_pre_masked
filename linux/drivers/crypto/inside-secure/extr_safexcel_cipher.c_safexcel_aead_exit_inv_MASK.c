
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct safexcel_inv_result {int dummy; } ;
struct safexcel_cipher_req {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_7__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (struct crypto_tfm*) ;
 int VAR_2 ;
 struct safexcel_cipher_req* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,struct safexcel_inv_result*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (struct crypto_tfm*,int *,struct safexcel_cipher_req*,struct safexcel_inv_result*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_5)
{
 FUNC_0(VAR_3, VAR_2, VAR_1);
 struct safexcel_cipher_req *VAR_6 = FUNC_2(VAR_3);
 struct safexcel_inv_result VAR_7 = {};

 FUNC_5(VAR_3, 0, sizeof(struct aead_request));

 FUNC_3(VAR_3, VAR_0,
      VAR_4, &VAR_7);
 FUNC_4(VAR_3, FUNC_1(VAR_5));

 return FUNC_6(VAR_5, &VAR_3->base, VAR_6, &VAR_7);
}
