
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_crypto_priv {int dummy; } ;
struct safexcel_cipher_req {int needs_inv; } ;
struct crypto_async_request {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; int dst; int src; } ;


 struct aead_request* FUNC_0 (struct crypto_async_request*) ;
 struct safexcel_cipher_req* FUNC_1 (struct aead_request*) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,struct safexcel_cipher_req*,int*,int*) ;
 int FUNC_5 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,int ,int ,scalar_t__,struct safexcel_cipher_req*,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct safexcel_crypto_priv *VAR_0,
           int VAR_1,
           struct crypto_async_request *VAR_2,
           bool *VAR_3, int *VAR_4)
{
 struct aead_request *VAR_5 = FUNC_0(VAR_2);
 struct crypto_aead *VAR_6 = FUNC_3(VAR_5);
 struct safexcel_cipher_req *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;

 if (VAR_7->needs_inv) {
  VAR_7->needs_inv = 0;
  VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_7,
       VAR_3, VAR_4);
 } else {
  VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_5->src,
       VAR_5->dst,
       VAR_5->cryptlen + FUNC_2(VAR_6),
       VAR_7, VAR_3, VAR_4);
 }

 return VAR_8;
}
