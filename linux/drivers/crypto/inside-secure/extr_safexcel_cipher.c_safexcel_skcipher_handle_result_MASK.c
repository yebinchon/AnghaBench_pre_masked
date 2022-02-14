
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int cryptlen; int dst; int src; } ;
struct safexcel_crypto_priv {int dummy; } ;
struct safexcel_cipher_req {int needs_inv; } ;
struct crypto_async_request {int dummy; } ;


 int FUNC_0 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,struct safexcel_cipher_req*,int*,int*) ;
 int FUNC_1 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,int ,int ,int ,struct safexcel_cipher_req*,int*,int*) ;
 struct skcipher_request* FUNC_2 (struct crypto_async_request*) ;
 struct safexcel_cipher_req* FUNC_3 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_4(struct safexcel_crypto_priv *VAR_0,
        int VAR_1,
        struct crypto_async_request *VAR_2,
        bool *VAR_3, int *VAR_4)
{
 struct skcipher_request *VAR_5 = FUNC_2(VAR_2);
 struct safexcel_cipher_req *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 if (VAR_6->needs_inv) {
  VAR_6->needs_inv = 0;
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6,
       VAR_3, VAR_4);
 } else {
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5->src,
       VAR_5->dst, VAR_5->cryptlen, VAR_6,
       VAR_3, VAR_4);
 }

 return VAR_7;
}
