
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity {int version; scalar_t__ salt_size; int salt; int tfm; } ;
struct crypto_wait {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ahash_request*,int,int ,void*) ;
 int FUNC_2 (struct ahash_request*,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct crypto_wait*) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct crypto_wait*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct dm_verity*,struct ahash_request*,int ,scalar_t__,struct crypto_wait*) ;

__attribute__((used)) static int FUNC_9(struct dm_verity *VAR_3, struct ahash_request *VAR_4,
    struct crypto_wait *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_4, VAR_3->tfm);
 FUNC_1(VAR_4, VAR_1 |
     VAR_0,
     VAR_2, (void *)VAR_5);
 FUNC_4(VAR_5);

 VAR_6 = FUNC_5(FUNC_3(VAR_4), VAR_5);

 if (FUNC_7(VAR_6 < 0)) {
  FUNC_0("crypto_ahash_init failed: %d", VAR_6);
  return VAR_6;
 }

 if (FUNC_6(VAR_3->salt_size && (VAR_3->version >= 1)))
  VAR_6 = FUNC_8(VAR_3, VAR_4, VAR_3->salt, VAR_3->salt_size, VAR_5);

 return VAR_6;
}
