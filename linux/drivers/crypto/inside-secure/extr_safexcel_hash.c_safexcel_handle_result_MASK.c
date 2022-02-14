
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_crypto_priv {int flags; } ;
struct safexcel_ahash_req {int needs_inv; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 struct safexcel_ahash_req* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,int*,int*) ;
 int FUNC_4 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct safexcel_crypto_priv *VAR_1, int VAR_2,
      struct crypto_async_request *VAR_3,
      bool *VAR_4, int *VAR_5)
{
 struct ahash_request *VAR_6 = FUNC_1(VAR_3);
 struct safexcel_ahash_req *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 FUNC_0(!(VAR_1->flags & VAR_0) && VAR_7->needs_inv);

 if (VAR_7->needs_inv) {
  VAR_7->needs_inv = 0;
  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5);
 } else {
  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5);
 }

 return VAR_8;
}
