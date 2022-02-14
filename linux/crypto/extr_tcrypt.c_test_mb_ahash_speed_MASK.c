
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct test_mb_ahash_data {int * xbuf; int req; int result; scalar_t__ sg; int wait; } ;
struct hash_speed {unsigned int blen; unsigned int plen; scalar_t__ klen; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct crypto_ahash*) ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct crypto_ahash*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,scalar_t__,int ,unsigned int) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (struct crypto_ahash*,int ,scalar_t__) ;
 struct crypto_ahash* FUNC_8 (char const*,int ,int ) ;
 int FUNC_9 (struct crypto_ahash*) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int FUNC_11 (int ,struct crypto_ahash*) ;
 struct test_mb_ahash_data* FUNC_12 (unsigned int,int,int ) ;
 int FUNC_13 (struct test_mb_ahash_data*) ;
 int FUNC_14 (int ,int,unsigned int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (scalar_t__,unsigned int) ;
 int FUNC_18 (scalar_t__,int ,unsigned int) ;
 int FUNC_19 (struct test_mb_ahash_data*,int,unsigned int) ;
 int FUNC_20 (struct test_mb_ahash_data*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_23(const char *VAR_6, unsigned int VAR_7,
    struct hash_speed *VAR_8, u32 VAR_9)
{
 struct test_mb_ahash_data *VAR_10;
 struct crypto_ahash *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_10 = FUNC_12(VAR_9, sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  return;

 VAR_11 = FUNC_8(VAR_6, 0, 0);
 if (FUNC_0(VAR_11)) {
  FUNC_15("failed to load transform for %s: %ld\n",
   VAR_6, FUNC_1(VAR_11));
  goto free_data;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12) {
  if (FUNC_21(VAR_10[VAR_12].xbuf))
   goto out;

  FUNC_10(&VAR_10[VAR_12].wait);

  VAR_10[VAR_12].req = FUNC_2(VAR_11, VAR_0);
  if (!VAR_10[VAR_12].req) {
   FUNC_15("alg: hash: Failed to allocate request for %s\n",
          VAR_6);
   goto out;
  }

  FUNC_4(VAR_10[VAR_12].req, 0, VAR_4,
        &VAR_10[VAR_12].wait);

  FUNC_17(VAR_10[VAR_12].sg, VAR_2);
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   FUNC_18(VAR_10[VAR_12].sg + VAR_13, VAR_10[VAR_12].xbuf[VAR_13], VAR_1);
   FUNC_14(VAR_10[VAR_12].xbuf[VAR_13], 0xff, VAR_1);
  }
 }

 FUNC_16("\ntesting speed of multibuffer %s (%s)\n", VAR_6,
  FUNC_11(VAR_3, VAR_11));

 for (VAR_12 = 0; VAR_8[VAR_12].blen != 0; VAR_12++) {

  if (VAR_8[VAR_12].blen != VAR_8[VAR_12].plen)
   continue;

  if (VAR_8[VAR_12].blen > VAR_2 * VAR_1) {
   FUNC_15("template (%u) too big for tvmem (%lu)\n",
          VAR_8[VAR_12].blen, VAR_2 * VAR_1);
   goto out;
  }

  if (VAR_8[VAR_12].klen)
   FUNC_7(VAR_11, VAR_5[0], VAR_8[VAR_12].klen);

  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
   FUNC_5(VAR_10[VAR_14].req, VAR_10[VAR_14].sg,
      VAR_10[VAR_14].result, VAR_8[VAR_12].blen);

  FUNC_16("test%3u "
   "(%5u byte blocks,%5u bytes per update,%4u updates): ",
   VAR_12, VAR_8[VAR_12].blen, VAR_8[VAR_12].plen,
   VAR_8[VAR_12].blen / VAR_8[VAR_12].plen);

  if (VAR_7) {
   VAR_15 = FUNC_20(VAR_10, VAR_8[VAR_12].blen, VAR_7,
          VAR_9);
   FUNC_6();
  } else {
   VAR_15 = FUNC_19(VAR_10, VAR_8[VAR_12].blen, VAR_9);
  }


  if (VAR_15) {
   FUNC_15("At least one hashing failed ret=%d\n", VAR_15);
   break;
  }
 }

out:
 for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14)
  FUNC_3(VAR_10[VAR_14].req);

 for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14)
  FUNC_22(VAR_10[VAR_14].xbuf);

 FUNC_9(VAR_11);

free_data:
 FUNC_13(VAR_10);
}
