
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct dm_verity_io {int dummy; } ;
struct dm_verity {int data_dev_block_bits; TYPE_1__* ti; } ;
struct crypto_wait {int dummy; } ;
struct bvec_iter {int dummy; } ;
struct bio_vec {unsigned int bv_len; int bv_offset; int bv_page; } ;
struct bio {int dummy; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {int per_io_data_size; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_2 (struct bio*,struct bvec_iter*,unsigned int) ;
 struct bio_vec FUNC_3 (struct bio*,struct bvec_iter) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (int ,struct crypto_wait*) ;
 struct bio* FUNC_6 (struct dm_verity_io*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct scatterlist*,int) ;
 int FUNC_9 (struct scatterlist*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_10 (int) ;
 struct ahash_request* FUNC_11 (struct dm_verity*,struct dm_verity_io*) ;

__attribute__((used)) static int FUNC_12(struct dm_verity *VAR_0, struct dm_verity_io *VAR_1,
          struct bvec_iter *VAR_2, struct crypto_wait *VAR_3)
{
 unsigned int VAR_4 = 1 << VAR_0->data_dev_block_bits;
 struct bio *VAR_5 = FUNC_6(VAR_1, VAR_0->ti->per_io_data_size);
 struct scatterlist VAR_6;
 struct ahash_request *VAR_7 = FUNC_11(VAR_0, VAR_1);

 do {
  int VAR_8;
  unsigned int VAR_9;
  struct bio_vec VAR_10 = FUNC_3(VAR_5, *VAR_2);

  FUNC_8(&VAR_6, 1);

  VAR_9 = VAR_10.bv_len;

  if (FUNC_7(VAR_9 >= VAR_4))
   VAR_9 = VAR_4;





  FUNC_9(&VAR_6, VAR_10.bv_page, VAR_9, VAR_10.bv_offset);
  FUNC_1(VAR_7, &VAR_6, ((void*)0), VAR_9);
  VAR_8 = FUNC_5(FUNC_4(VAR_7), VAR_3);

  if (FUNC_10(VAR_8 < 0)) {
   FUNC_0("verity_for_io_block crypto op failed: %d", VAR_8);
   return VAR_8;
  }

  FUNC_2(VAR_5, VAR_2, VAR_9);
  VAR_4 -= VAR_9;
 } while (VAR_4);

 return 0;
}
