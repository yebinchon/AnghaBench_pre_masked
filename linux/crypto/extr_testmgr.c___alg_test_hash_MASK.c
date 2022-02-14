
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_sglist {int dummy; } ;
typedef struct test_sglist u8 ;
typedef int u32 ;
typedef struct test_sglist shash_desc ;
struct hash_testvec {int dummy; } ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 unsigned int VAR_2 ;
 struct ahash_request* FUNC_2 (struct crypto_ahash*,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (char const*,int ,int ,struct crypto_shash**,struct test_sglist**) ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_7 (char const*,int ,int ) ;
 int FUNC_8 (struct crypto_ahash*) ;
 int FUNC_9 (struct crypto_shash*) ;
 int FUNC_10 (struct crypto_shash*) ;
 int FUNC_11 (struct test_sglist*) ;
 scalar_t__ FUNC_12 (struct test_sglist*) ;
 int FUNC_13 (struct test_sglist*) ;
 struct test_sglist* FUNC_14 (unsigned int,int ) ;
 unsigned int FUNC_15 (unsigned int,int ) ;
 int FUNC_16 (char*,char const*,...) ;
 int FUNC_17 (char const*,struct hash_testvec const*,unsigned int,struct ahash_request*,struct test_sglist*,struct test_sglist*,struct test_sglist*) ;
 int FUNC_18 (char const*,char const*,unsigned int,struct ahash_request*,struct test_sglist*,struct test_sglist*,struct test_sglist*) ;

__attribute__((used)) static int FUNC_19(const struct hash_testvec *VAR_3,
      unsigned int VAR_4, const char *VAR_5,
      u32 VAR_6, u32 VAR_7,
      const char *VAR_8, unsigned int VAR_9)
{
 struct crypto_ahash *VAR_10 = ((void*)0);
 struct ahash_request *VAR_11 = ((void*)0);
 struct crypto_shash *VAR_12 = ((void*)0);
 struct shash_desc *VAR_13 = ((void*)0);
 struct test_sglist *VAR_14 = ((void*)0);
 u8 *VAR_15 = ((void*)0);
 unsigned int VAR_16;
 unsigned int VAR_17;
 int VAR_18;






 VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_7);
 if (FUNC_0(VAR_10)) {
  FUNC_16("alg: hash: failed to allocate transform for %s: %ld\n",
         VAR_5, FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (!VAR_11) {
  FUNC_16("alg: hash: failed to allocate request for %s\n",
         VAR_5);
  VAR_18 = -VAR_0;
  goto out;
 }





 VAR_18 = FUNC_4(VAR_5, VAR_6, VAR_7, &VAR_12, &VAR_13);
 if (VAR_18)
  goto out;

 VAR_14 = FUNC_14(sizeof(*VAR_14), VAR_1);
 if (!VAR_14 || FUNC_12(VAR_14) != 0) {
  FUNC_16("alg: hash: failed to allocate test buffers for %s\n",
         VAR_5);
  FUNC_13(VAR_14);
  VAR_14 = ((void*)0);
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_6(VAR_10);
 if (VAR_12)
  VAR_16 = FUNC_15(VAR_16, FUNC_10(VAR_12));
 VAR_15 = FUNC_14(VAR_16 + VAR_2, VAR_1);
 if (!VAR_15) {
  FUNC_16("alg: hash: failed to allocate hash state buffer for %s\n",
         VAR_5);
  VAR_18 = -VAR_0;
  goto out;
 }

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
  VAR_18 = FUNC_17(VAR_5, &VAR_3[VAR_17], VAR_17, VAR_11, VAR_13, VAR_14,
        VAR_15);
  if (VAR_18)
   goto out;
  FUNC_5();
 }
 VAR_18 = FUNC_18(VAR_5, VAR_8, VAR_9, VAR_11,
     VAR_13, VAR_14, VAR_15);
out:
 FUNC_13(VAR_15);
 if (VAR_14) {
  FUNC_11(VAR_14);
  FUNC_13(VAR_14);
 }
 FUNC_13(VAR_13);
 FUNC_9(VAR_12);
 FUNC_3(VAR_11);
 FUNC_8(VAR_10);
 return VAR_18;
}
