
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct testvec_config {int name; scalar_t__ finalization_type; scalar_t__ nosimd; } ;
struct test_sglist {int nents; TYPE_1__* sgl; } ;
struct test_sg_division {scalar_t__ flush_type; scalar_t__ nosimd; } ;
struct shash_desc {int * __ctx; struct crypto_shash* tfm; } ;
struct hash_testvec {int setkey_error; int digest_error; int ksize; int key; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct test_sglist*,struct hash_testvec const*,struct testvec_config const*,unsigned int const,struct test_sg_division const**) ;
 int FUNC_1 (char*,int *,unsigned int const,struct hash_testvec const*,char const*,char const*,struct testvec_config const*) ;
 int FUNC_2 (char*,int,char const*,char const*,struct testvec_config const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (struct crypto_shash*) ;
 int FUNC_6 (struct crypto_shash*) ;
 int FUNC_7 (struct shash_desc*,int ,int ,int *) ;
 unsigned int FUNC_8 (struct crypto_shash*) ;
 int FUNC_9 (struct shash_desc*,int *) ;
 int FUNC_10 (struct shash_desc*,int *) ;
 int FUNC_11 (struct shash_desc*,int ,int ,int *) ;
 int FUNC_12 (struct crypto_shash*) ;
 int FUNC_13 (struct shash_desc*,int *) ;
 int FUNC_14 (struct shash_desc*) ;
 int FUNC_15 (struct crypto_shash*,int ,int ) ;
 unsigned int FUNC_16 (struct crypto_shash*) ;
 int FUNC_17 (struct shash_desc*,int ,int ) ;
 int FUNC_18 (char*,char const*,char const*,int,...) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;

__attribute__((used)) static int FUNC_22(const char *VAR_8,
         const struct hash_testvec *VAR_9,
         const char *VAR_10,
         const struct testvec_config *VAR_11,
         struct shash_desc *VAR_12,
         struct test_sglist *VAR_13,
         u8 *VAR_14)
{
 struct crypto_shash *VAR_15 = VAR_12->tfm;
 const unsigned int VAR_16 = FUNC_5(VAR_15);
 const unsigned int VAR_17 = FUNC_8(VAR_15);
 const unsigned int VAR_18 = FUNC_16(VAR_15);
 const struct test_sg_division *VAR_19[VAR_7];
 unsigned int VAR_20;
 u8 VAR_21[VAR_5 + VAR_6];
 int VAR_22;


 if (VAR_9->ksize) {
  VAR_22 = FUNC_15(VAR_15, VAR_9->key, VAR_9->ksize);
  if (VAR_22) {
   if (VAR_22 == VAR_9->setkey_error)
    return 0;
   FUNC_18("alg: shash: %s setkey failed on test vector %s; expected_error=%d, actual_error=%d, flags=%#x\n",
          VAR_8, VAR_10, VAR_9->setkey_error, VAR_22,
          FUNC_12(VAR_15));
   return VAR_22;
  }
  if (VAR_9->setkey_error) {
   FUNC_18("alg: shash: %s setkey unexpectedly succeeded on test vector %s; expected_error=%d\n",
          VAR_8, VAR_10, VAR_9->setkey_error);
   return -VAR_0;
  }
 }


 VAR_22 = FUNC_0(VAR_13, VAR_9, VAR_11, VAR_16, VAR_19);
 if (VAR_22) {
  FUNC_18("alg: shash: %s: error preparing scatterlist for test vector %s, cfg=\"%s\"\n",
         VAR_8, VAR_10, VAR_11->name);
  return VAR_22;
 }



 FUNC_21(VAR_12->__ctx, FUNC_6(VAR_15));
 FUNC_21(VAR_21, VAR_17 + VAR_6);

 if (VAR_11->finalization_type == VAR_2 ||
     VAR_9->digest_error) {

  if (VAR_13->nents != 1)
   return 0;
  if (VAR_11->nosimd)
   FUNC_3();
  VAR_22 = FUNC_7(VAR_12, FUNC_19(&VAR_13->sgl[0]),
       VAR_13->sgl[0].length, VAR_21);
  if (VAR_11->nosimd)
   FUNC_4();
  if (VAR_22) {
   if (VAR_22 == VAR_9->digest_error)
    return 0;
   FUNC_18("alg: shash: %s digest() failed on test vector %s; expected_error=%d, actual_error=%d, cfg=\"%s\"\n",
          VAR_8, VAR_10, VAR_9->digest_error, VAR_22,
          VAR_11->name);
   return VAR_22;
  }
  if (VAR_9->digest_error) {
   FUNC_18("alg: shash: %s digest() unexpectedly succeeded on test vector %s; expected_error=%d, cfg=\"%s\"\n",
          VAR_8, VAR_10, VAR_9->digest_error, VAR_11->name);
   return -VAR_0;
  }
  goto result_ready;
 }



 if (VAR_11->nosimd)
  FUNC_3();
 VAR_22 = FUNC_14(VAR_12);
 if (VAR_11->nosimd)
  FUNC_4();
 VAR_22 = FUNC_2("init", VAR_22, VAR_8, VAR_10, VAR_11);
 if (VAR_22)
  return VAR_22;

 for (VAR_20 = 0; VAR_20 < VAR_13->nents; VAR_20++) {
  if (VAR_20 + 1 == VAR_13->nents &&
      VAR_11->finalization_type == VAR_3) {
   if (VAR_19[VAR_20]->nosimd)
    FUNC_3();
   VAR_22 = FUNC_11(VAR_12, FUNC_19(&VAR_13->sgl[VAR_20]),
       VAR_13->sgl[VAR_20].length, VAR_21);
   if (VAR_19[VAR_20]->nosimd)
    FUNC_4();
   VAR_22 = FUNC_2("finup", VAR_22, VAR_8, VAR_10,
          VAR_11);
   if (VAR_22)
    return VAR_22;
   goto result_ready;
  }
  if (VAR_19[VAR_20]->nosimd)
   FUNC_3();
  VAR_22 = FUNC_17(VAR_12, FUNC_19(&VAR_13->sgl[VAR_20]),
       VAR_13->sgl[VAR_20].length);
  if (VAR_19[VAR_20]->nosimd)
   FUNC_4();
  VAR_22 = FUNC_2("update", VAR_22, VAR_8, VAR_10, VAR_11);
  if (VAR_22)
   return VAR_22;
  if (VAR_19[VAR_20]->flush_type == VAR_4) {

   FUNC_21(VAR_14 + VAR_18,
           VAR_6);
   VAR_22 = FUNC_9(VAR_12, VAR_14);
   VAR_22 = FUNC_2("export", VAR_22, VAR_8, VAR_10,
          VAR_11);
   if (VAR_22)
    return VAR_22;
   if (!FUNC_20(VAR_14 + VAR_18,
            VAR_6)) {
    FUNC_18("alg: shash: %s export() overran state buffer on test vector %s, cfg=\"%s\"\n",
           VAR_8, VAR_10, VAR_11->name);
    return -VAR_1;
   }
   FUNC_21(VAR_12->__ctx, FUNC_6(VAR_15));
   VAR_22 = FUNC_13(VAR_12, VAR_14);
   VAR_22 = FUNC_2("import", VAR_22, VAR_8, VAR_10,
          VAR_11);
   if (VAR_22)
    return VAR_22;
  }
 }

 if (VAR_11->nosimd)
  FUNC_3();
 VAR_22 = FUNC_10(VAR_12, VAR_21);
 if (VAR_11->nosimd)
  FUNC_4();
 VAR_22 = FUNC_2("final", VAR_22, VAR_8, VAR_10, VAR_11);
 if (VAR_22)
  return VAR_22;
result_ready:
 return FUNC_1("shash", VAR_21, VAR_17, VAR_9, VAR_10,
     VAR_8, VAR_11);
}
