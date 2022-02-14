
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bvec_iter {int dummy; } ;
struct dm_verity_io {unsigned int n_blocks; struct bvec_iter iter; scalar_t__ block; struct dm_verity* v; } ;
struct dm_verity {int validated_blocks; int digest_size; } ;
struct crypto_wait {int dummy; } ;
struct ahash_request {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct dm_verity*,struct dm_verity_io*,struct bvec_iter*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct dm_verity*,struct dm_verity_io*,int ,scalar_t__,int *,struct bvec_iter*) ;
 int FUNC_7 (struct dm_verity*,struct dm_verity_io*,struct bvec_iter*,int ) ;
 int FUNC_8 (struct dm_verity*,struct dm_verity_io*,struct bvec_iter*,struct crypto_wait*) ;
 scalar_t__ FUNC_9 (struct dm_verity*,int ,scalar_t__) ;
 int FUNC_10 (struct dm_verity*,struct ahash_request*,int ,struct crypto_wait*) ;
 int FUNC_11 (struct dm_verity*,struct dm_verity_io*,scalar_t__,int ,int*) ;
 int FUNC_12 (struct dm_verity*,struct ahash_request*,struct crypto_wait*) ;
 struct ahash_request* FUNC_13 (struct dm_verity*,struct dm_verity_io*) ;
 int FUNC_14 (struct dm_verity*,struct dm_verity_io*) ;
 int FUNC_15 (struct dm_verity*,struct dm_verity_io*) ;

__attribute__((used)) static int FUNC_16(struct dm_verity_io *VAR_3)
{
 bool VAR_4;
 struct dm_verity *VAR_5 = VAR_3->v;
 struct bvec_iter VAR_6;
 unsigned VAR_7;
 struct crypto_wait VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3->n_blocks; VAR_7++) {
  int VAR_9;
  sector_t VAR_10 = VAR_3->block + VAR_7;
  struct ahash_request *VAR_11 = FUNC_13(VAR_5, VAR_3);

  if (VAR_5->validated_blocks &&
      FUNC_0(FUNC_3(VAR_10, VAR_5->validated_blocks))) {
   FUNC_5(VAR_5, VAR_3, &VAR_3->iter);
   continue;
  }

  VAR_9 = FUNC_11(VAR_5, VAR_3, VAR_10,
       FUNC_15(VAR_5, VAR_3),
       &VAR_4);
  if (FUNC_4(VAR_9 < 0))
   return VAR_9;

  if (VAR_4) {




   VAR_9 = FUNC_7(VAR_5, VAR_3, &VAR_3->iter,
      VAR_2);
   if (FUNC_4(VAR_9 < 0))
    return VAR_9;

   continue;
  }

  VAR_9 = FUNC_12(VAR_5, VAR_11, &VAR_8);
  if (FUNC_4(VAR_9 < 0))
   return VAR_9;

  VAR_6 = VAR_3->iter;
  VAR_9 = FUNC_8(VAR_5, VAR_3, &VAR_3->iter, &VAR_8);
  if (FUNC_4(VAR_9 < 0))
   return VAR_9;

  VAR_9 = FUNC_10(VAR_5, VAR_11, FUNC_14(VAR_5, VAR_3),
     &VAR_8);
  if (FUNC_4(VAR_9 < 0))
   return VAR_9;

  if (FUNC_0(FUNC_1(FUNC_14(VAR_5, VAR_3),
      FUNC_15(VAR_5, VAR_3), VAR_5->digest_size) == 0)) {
   if (VAR_5->validated_blocks)
    FUNC_2(VAR_10, VAR_5->validated_blocks);
   continue;
  }
  else if (FUNC_6(VAR_5, VAR_3, VAR_0,
        VAR_10, ((void*)0), &VAR_6) == 0)
   continue;
  else if (FUNC_9(VAR_5, VAR_0,
        VAR_10))
   return -VAR_1;
 }

 return 0;
}
