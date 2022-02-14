
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_verity {int dummy; } ;
struct crypto_wait {int dummy; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dm_verity*,struct ahash_request*,int *,struct crypto_wait*) ;
 int FUNC_2 (struct dm_verity*,struct ahash_request*,struct crypto_wait*) ;
 int FUNC_3 (struct dm_verity*,struct ahash_request*,int const*,size_t,struct crypto_wait*) ;

int FUNC_4(struct dm_verity *VAR_0, struct ahash_request *VAR_1,
  const u8 *VAR_2, size_t VAR_3, u8 *VAR_4)
{
 int VAR_5;
 struct crypto_wait VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_6);
 if (FUNC_0(VAR_5 < 0))
  goto out;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6);
 if (FUNC_0(VAR_5 < 0))
  goto out;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4, &VAR_6);

out:
 return VAR_5;
}
