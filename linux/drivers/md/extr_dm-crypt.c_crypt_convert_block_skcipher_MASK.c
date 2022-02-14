
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct dm_crypt_request {int iv_sector; struct scatterlist* sg_out; struct scatterlist* sg_in; struct convert_context* ctx; } ;
struct crypt_config {int sector_size; int sector_shift; int iv_offset; TYPE_1__* iv_gen_ops; int iv_size; int integrity_iv_size; int cipher_flags; } ;
struct convert_context {int cc_sector; int iter_out; int bio_out; int iter_in; int bio_in; } ;
struct bio_vec {int bv_len; int bv_offset; int bv_page; } ;
typedef int __le64 ;
struct TYPE_2__ {int (* generator ) (struct crypt_config*,int *,struct dm_crypt_request*) ;int (* post ) (struct crypt_config*,int *,struct dm_crypt_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct bio_vec FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_request*) ;
 struct dm_crypt_request* FUNC_6 (struct crypt_config*,struct skcipher_request*) ;
 int * FUNC_7 (struct crypt_config*,struct dm_crypt_request*) ;
 int * FUNC_8 (struct crypt_config*,struct dm_crypt_request*) ;
 int FUNC_9 (int *,int *,int ) ;
 int * FUNC_10 (struct crypt_config*,struct dm_crypt_request*) ;
 int * FUNC_11 (struct crypt_config*,struct dm_crypt_request*) ;
 unsigned int* FUNC_12 (struct crypt_config*,struct dm_crypt_request*) ;
 int FUNC_13 (struct scatterlist*,int) ;
 int FUNC_14 (struct scatterlist*,int ,int,int ) ;
 int FUNC_15 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int *) ;
 int FUNC_16 (struct crypt_config*,int *,struct dm_crypt_request*) ;
 int FUNC_17 (struct crypt_config*,int *,struct dm_crypt_request*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct crypt_config *VAR_3,
     struct convert_context *VAR_4,
     struct skcipher_request *VAR_5,
     unsigned int VAR_6)
{
 struct bio_vec VAR_7 = FUNC_2(VAR_4->bio_in, VAR_4->iter_in);
 struct bio_vec VAR_8 = FUNC_2(VAR_4->bio_out, VAR_4->iter_out);
 struct scatterlist *VAR_9, *VAR_10;
 struct dm_crypt_request *VAR_11;
 u8 *VAR_12, *VAR_13, *VAR_14;
 __le64 *VAR_15;
 int VAR_16 = 0;


 if (FUNC_19(VAR_7.bv_len & (VAR_3->sector_size - 1)))
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_3, VAR_5);
 VAR_11->iv_sector = VAR_4->cc_sector;
 if (FUNC_18(VAR_0, &VAR_3->cipher_flags))
  VAR_11->iv_sector >>= VAR_3->sector_shift;
 VAR_11->ctx = VAR_4;

 *FUNC_12(VAR_3, VAR_11) = VAR_6;

 VAR_12 = FUNC_7(VAR_3, VAR_11);
 VAR_13 = FUNC_10(VAR_3, VAR_11);
 VAR_14 = FUNC_8(VAR_3, VAR_11);

 VAR_15 = FUNC_11(VAR_3, VAR_11);
 *VAR_15 = FUNC_3(VAR_4->cc_sector - VAR_3->iv_offset);


 VAR_9 = &VAR_11->sg_in[0];
 VAR_10 = &VAR_11->sg_out[0];

 FUNC_13(VAR_9, 1);
 FUNC_14(VAR_9, VAR_7.bv_page, VAR_3->sector_size, VAR_7.bv_offset);

 FUNC_13(VAR_10, 1);
 FUNC_14(VAR_10, VAR_8.bv_page, VAR_3->sector_size, VAR_8.bv_offset);

 if (VAR_3->iv_gen_ops) {

  if (VAR_3->integrity_iv_size && FUNC_1(VAR_4->bio_in) != VAR_2) {
   FUNC_9(VAR_13, VAR_14, VAR_3->integrity_iv_size);
  } else {
   VAR_16 = VAR_3->iv_gen_ops->generator(VAR_3, VAR_13, VAR_11);
   if (VAR_16 < 0)
    return VAR_16;

   if (VAR_3->integrity_iv_size)
    FUNC_9(VAR_14, VAR_13, VAR_3->integrity_iv_size);
  }

  FUNC_9(VAR_12, VAR_13, VAR_3->iv_size);
 }

 FUNC_15(VAR_5, VAR_9, VAR_10, VAR_3->sector_size, VAR_12);

 if (FUNC_1(VAR_4->bio_in) == VAR_2)
  VAR_16 = FUNC_5(VAR_5);
 else
  VAR_16 = FUNC_4(VAR_5);

 if (!VAR_16 && VAR_3->iv_gen_ops && VAR_3->iv_gen_ops->post)
  VAR_16 = VAR_3->iv_gen_ops->post(VAR_3, VAR_13, VAR_11);

 FUNC_0(VAR_4->bio_in, &VAR_4->iter_in, VAR_3->sector_size);
 FUNC_0(VAR_4->bio_out, &VAR_4->iter_out, VAR_3->sector_size);

 return VAR_16;
}
