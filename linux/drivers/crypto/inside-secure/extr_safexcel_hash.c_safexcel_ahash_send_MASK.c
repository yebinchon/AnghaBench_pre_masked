
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ahash_req {scalar_t__ needs_inv; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct safexcel_ahash_req* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct crypto_async_request*,int,int*,int*) ;
 int FUNC_3 (struct crypto_async_request*,int,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct crypto_async_request *VAR_0,
          int VAR_1, int *VAR_2, int *VAR_3)
{
 struct ahash_request *VAR_4 = FUNC_0(VAR_0);
 struct safexcel_ahash_req *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (VAR_5->needs_inv)
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_6;
}
