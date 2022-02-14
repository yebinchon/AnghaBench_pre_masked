
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct testvec_config {int req_flags; scalar_t__ finalization_type; int name; int nosimd; } ;
struct test_sglist {unsigned int nents; struct scatterlist* sgl; } ;
struct test_sg_division {scalar_t__ flush_type; int nosimd; } ;
struct scatterlist {scalar_t__ length; } ;
struct hash_testvec {int setkey_error; int digest_error; unsigned int psize; int ksize; int key; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int * __ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ahash_request*,int const,int ,int *) ;
 int FUNC_2 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_3 (struct test_sglist*,struct hash_testvec const*,struct testvec_config const*,unsigned int const,struct test_sg_division const**) ;
 int FUNC_4 (char*,int *,unsigned int const,struct hash_testvec const*,char const*,char const*,struct testvec_config const*) ;
 int FUNC_5 (char*,int,int *,unsigned int const,char const*,char const*,struct testvec_config const*) ;
 unsigned int FUNC_6 (struct crypto_ahash*) ;
 int VAR_10 ;
 unsigned int FUNC_7 (struct crypto_ahash*) ;
 int FUNC_8 (struct ahash_request*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (struct crypto_ahash*) ;
 int FUNC_10 (struct ahash_request*,int *) ;
 int VAR_13 ;
 int FUNC_11 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_12 (struct ahash_request*) ;
 int FUNC_13 (struct crypto_ahash*,int ,int ) ;
 unsigned int FUNC_14 (struct crypto_ahash*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int ,struct ahash_request*,int *,int ) ;
 int FUNC_16 (char*,char const*,...) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_19(const char *VAR_17,
         const struct hash_testvec *VAR_18,
         const char *VAR_19,
         const struct testvec_config *VAR_20,
         struct ahash_request *VAR_21,
         struct test_sglist *VAR_22,
         u8 *VAR_23)
{
 struct crypto_ahash *VAR_24 = FUNC_12(VAR_21);
 const unsigned int VAR_25 = FUNC_6(VAR_24);
 const unsigned int VAR_26 = FUNC_7(VAR_24);
 const unsigned int VAR_27 = FUNC_14(VAR_24);
 const u32 VAR_28 = VAR_0 | VAR_20->req_flags;
 const struct test_sg_division *VAR_29[VAR_9];
 FUNC_0(VAR_16);
 unsigned int VAR_30;
 struct scatterlist *VAR_31;
 unsigned int VAR_32;
 u8 VAR_33[VAR_7 + VAR_8];
 int VAR_34;


 if (VAR_18->ksize) {
  VAR_34 = FUNC_13(VAR_24, VAR_18->key, VAR_18->ksize);
  if (VAR_34) {
   if (VAR_34 == VAR_18->setkey_error)
    return 0;
   FUNC_16("alg: ahash: %s setkey failed on test vector %s; expected_error=%d, actual_error=%d, flags=%#x\n",
          VAR_17, VAR_19, VAR_18->setkey_error, VAR_34,
          FUNC_9(VAR_24));
   return VAR_34;
  }
  if (VAR_18->setkey_error) {
   FUNC_16("alg: ahash: %s setkey unexpectedly succeeded on test vector %s; expected_error=%d\n",
          VAR_17, VAR_19, VAR_18->setkey_error);
   return -VAR_1;
  }
 }


 VAR_34 = FUNC_3(VAR_22, VAR_18, VAR_20, VAR_25, VAR_29);
 if (VAR_34) {
  FUNC_16("alg: ahash: %s: error preparing scatterlist for test vector %s, cfg=\"%s\"\n",
         VAR_17, VAR_19, VAR_20->name);
  return VAR_34;
 }



 FUNC_18(VAR_21->__ctx, FUNC_11(VAR_24));
 FUNC_18(VAR_33, VAR_26 + VAR_8);

 if (VAR_20->finalization_type == VAR_3 ||
     VAR_18->digest_error) {

  FUNC_1(VAR_21, VAR_28, VAR_15,
        &VAR_16);
  FUNC_2(VAR_21, VAR_22->sgl, VAR_33, VAR_18->psize);
  VAR_34 = FUNC_15(VAR_10, VAR_21, &VAR_16, VAR_20->nosimd);
  if (VAR_34) {
   if (VAR_34 == VAR_18->digest_error)
    return 0;
   FUNC_16("alg: ahash: %s digest() failed on test vector %s; expected_error=%d, actual_error=%d, cfg=\"%s\"\n",
          VAR_17, VAR_19, VAR_18->digest_error, VAR_34,
          VAR_20->name);
   return VAR_34;
  }
  if (VAR_18->digest_error) {
   FUNC_16("alg: ahash: %s digest() unexpectedly succeeded on test vector %s; expected_error=%d, cfg=\"%s\"\n",
          VAR_17, VAR_19, VAR_18->digest_error, VAR_20->name);
   return -VAR_1;
  }
  goto result_ready;
 }



 FUNC_1(VAR_21, VAR_28, VAR_15, &VAR_16);
 FUNC_2(VAR_21, ((void*)0), VAR_33, 0);
 VAR_34 = FUNC_15(VAR_13, VAR_21, &VAR_16, VAR_20->nosimd);
 VAR_34 = FUNC_5("init", VAR_34, VAR_33, VAR_26,
          VAR_17, VAR_19, VAR_20);
 if (VAR_34)
  return VAR_34;

 VAR_31 = ((void*)0);
 VAR_32 = 0;
 for (VAR_30 = 0; VAR_30 < VAR_22->nents; VAR_30++) {
  if (VAR_29[VAR_30]->flush_type != VAR_5 &&
      VAR_31 != ((void*)0)) {

   FUNC_1(VAR_21, VAR_28,
         VAR_15, &VAR_16);
   FUNC_2(VAR_21, VAR_31, VAR_33,
      VAR_32);
   VAR_34 = FUNC_15(VAR_14, VAR_21, &VAR_16,
       VAR_29[VAR_30]->nosimd);
   VAR_34 = FUNC_5("update", VAR_34,
            VAR_33, VAR_26,
            VAR_17, VAR_19, VAR_20);
   if (VAR_34)
    return VAR_34;
   VAR_31 = ((void*)0);
   VAR_32 = 0;
  }
  if (VAR_29[VAR_30]->flush_type == VAR_6) {

   FUNC_18(VAR_23 + VAR_27,
           VAR_8);
   VAR_34 = FUNC_8(VAR_21, VAR_23);
   VAR_34 = FUNC_5("export", VAR_34,
            VAR_33, VAR_26,
            VAR_17, VAR_19, VAR_20);
   if (VAR_34)
    return VAR_34;
   if (!FUNC_17(VAR_23 + VAR_27,
            VAR_8)) {
    FUNC_16("alg: ahash: %s export() overran state buffer on test vector %s, cfg=\"%s\"\n",
           VAR_17, VAR_19, VAR_20->name);
    return -VAR_2;
   }

   FUNC_18(VAR_21->__ctx, FUNC_11(VAR_24));
   VAR_34 = FUNC_10(VAR_21, VAR_23);
   VAR_34 = FUNC_5("import", VAR_34,
            VAR_33, VAR_26,
            VAR_17, VAR_19, VAR_20);
   if (VAR_34)
    return VAR_34;
  }
  if (VAR_31 == ((void*)0))
   VAR_31 = &VAR_22->sgl[VAR_30];
  VAR_32 += VAR_22->sgl[VAR_30].length;
 }

 FUNC_1(VAR_21, VAR_28, VAR_15, &VAR_16);
 FUNC_2(VAR_21, VAR_31, VAR_33, VAR_32);
 if (VAR_20->finalization_type == VAR_4) {

  VAR_34 = FUNC_15(VAR_14, VAR_21, &VAR_16, VAR_20->nosimd);
  VAR_34 = FUNC_5("update", VAR_34, VAR_33, VAR_26,
           VAR_17, VAR_19, VAR_20);
  if (VAR_34)
   return VAR_34;
  VAR_34 = FUNC_15(VAR_11, VAR_21, &VAR_16, VAR_20->nosimd);
  if (VAR_34) {
   FUNC_16("alg: ahash: %s final() failed with err %d on test vector %s, cfg=\"%s\"\n",
          VAR_17, VAR_34, VAR_19, VAR_20->name);
   return VAR_34;
  }
 } else {

  VAR_34 = FUNC_15(VAR_12, VAR_21, &VAR_16, VAR_20->nosimd);
  if (VAR_34) {
   FUNC_16("alg: ahash: %s finup() failed with err %d on test vector %s, cfg=\"%s\"\n",
          VAR_17, VAR_34, VAR_19, VAR_20->name);
   return VAR_34;
  }
 }

result_ready:
 return FUNC_4("ahash", VAR_33, VAR_26, VAR_18, VAR_19,
     VAR_17, VAR_20);
}
