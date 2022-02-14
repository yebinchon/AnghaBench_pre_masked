
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct loop_device {struct crypto_sync_skcipher* key_data; } ;
struct crypto_sync_skcipher {int dummy; } ;
typedef int sector_t ;
typedef int (* encdec_cbc_t ) (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*,struct page*,int const,unsigned int) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ,struct scatterlist*,struct scatterlist*,int const,int *) ;
 int FUNC_9 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct loop_device *VAR_4, int VAR_5,
      struct page *VAR_6, unsigned VAR_7,
      struct page *VAR_8, unsigned VAR_9,
      int VAR_10, sector_t VAR_11)
{
 struct crypto_sync_skcipher *VAR_12 = VAR_4->key_data;
 FUNC_0(VAR_3, VAR_12);
 struct scatterlist VAR_13;
 struct scatterlist VAR_14;

 encdec_cbc_t VAR_15;
 struct page *VAR_16, *VAR_17;
 unsigned VAR_18, VAR_19;
 int VAR_20;

 FUNC_9(VAR_3, VAR_12);
 FUNC_7(VAR_3, VAR_0,
          ((void*)0), ((void*)0));

 FUNC_5(&VAR_13, 1);
 FUNC_5(&VAR_14, 1);

 if (VAR_5 == VAR_2) {
  VAR_16 = VAR_6;
  VAR_18 = VAR_7;
  VAR_17 = VAR_8;
  VAR_19 = VAR_9;
  VAR_15 = FUNC_2;
 } else {
  VAR_16 = VAR_8;
  VAR_18 = VAR_9;
  VAR_17 = VAR_6;
  VAR_19 = VAR_7;
  VAR_15 = FUNC_3;
 }

 while (VAR_10 > 0) {
  const int VAR_21 = FUNC_4(VAR_10, VAR_1);
  u32 VAR_22[4] = { 0, };
  VAR_22[0] = FUNC_1(VAR_11 & 0xffffffff);

  FUNC_6(&VAR_14, VAR_16, VAR_21, VAR_18);
  FUNC_6(&VAR_13, VAR_17, VAR_21, VAR_19);

  FUNC_8(VAR_3, &VAR_14, &VAR_13, VAR_21, VAR_22);
  VAR_20 = VAR_15(VAR_3);
  if (VAR_20)
   goto out;

  VAR_11++;
  VAR_10 -= VAR_21;
  VAR_18 += VAR_21;
  VAR_19 += VAR_21;
 }

 VAR_20 = 0;

out:
 FUNC_10(VAR_3);
 return VAR_20;
}
