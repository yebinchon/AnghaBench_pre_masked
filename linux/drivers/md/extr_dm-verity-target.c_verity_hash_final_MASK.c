
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_verity {scalar_t__ salt_size; int salt; int version; } ;
struct crypto_wait {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ahash_request*,int *,int *,int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (int ,struct crypto_wait*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct dm_verity*,struct ahash_request*,int ,scalar_t__,struct crypto_wait*) ;

__attribute__((used)) static int FUNC_6(struct dm_verity *VAR_0, struct ahash_request *VAR_1,
        u8 *VAR_2, struct crypto_wait *VAR_3)
{
 int VAR_4;

 if (FUNC_4(VAR_0->salt_size && (!VAR_0->version))) {
  VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_0->salt, VAR_0->salt_size, VAR_3);

  if (VAR_4 < 0) {
   FUNC_0("verity_hash_final failed updating salt: %d", VAR_4);
   goto out;
  }
 }

 FUNC_1(VAR_1, ((void*)0), VAR_2, 0);
 VAR_4 = FUNC_3(FUNC_2(VAR_1), VAR_3);
out:
 return VAR_4;
}
