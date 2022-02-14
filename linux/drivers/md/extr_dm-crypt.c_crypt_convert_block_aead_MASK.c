
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
struct dm_crypt_request {int iv_sector; int * sg_out; int * sg_in; struct convert_context* ctx; } ;
struct crypt_config {scalar_t__ integrity_iv_size; scalar_t__ iv_size; int sector_size; int sector_shift; int iv_offset; int integrity_tag_size; scalar_t__ on_disk_tag_size; TYPE_1__* iv_gen_ops; int cipher_flags; } ;
struct convert_context {int cc_sector; int iter_out; int bio_out; int iter_in; int bio_in; } ;
struct bio_vec {int bv_len; int bv_offset; int bv_page; } ;
struct aead_request {int dummy; } ;
typedef int __le64 ;
struct TYPE_2__ {int (* generator ) (struct crypt_config*,int *,struct dm_crypt_request*) ;int (* post ) (struct crypt_config*,int *,struct dm_crypt_request*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct aead_request*,int) ;
 int FUNC_3 (struct aead_request*,int *,int *,int,int *) ;
 int FUNC_4 (int ,int *,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 struct bio_vec FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct aead_request*) ;
 int FUNC_10 (struct aead_request*) ;
 struct dm_crypt_request* FUNC_11 (struct crypt_config*,struct aead_request*) ;
 int * FUNC_12 (struct crypt_config*,struct dm_crypt_request*) ;
 int * FUNC_13 (struct crypt_config*,struct dm_crypt_request*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,int *,int) ;
 int FUNC_16 (int *,int ,int) ;
 int * FUNC_17 (struct crypt_config*,struct dm_crypt_request*) ;
 int * FUNC_18 (struct crypt_config*,struct dm_crypt_request*) ;
 unsigned int* FUNC_19 (struct crypt_config*,struct dm_crypt_request*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int *,int) ;
 int FUNC_22 (int *,int ,int,int ) ;
 int FUNC_23 (struct crypt_config*,int *,struct dm_crypt_request*) ;
 int FUNC_24 (struct crypt_config*,int *,struct dm_crypt_request*) ;
 int * FUNC_25 (struct crypt_config*,struct dm_crypt_request*) ;
 scalar_t__ FUNC_26 (int ,int *) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static int FUNC_28(struct crypt_config *VAR_5,
         struct convert_context *VAR_6,
         struct aead_request *VAR_7,
         unsigned int VAR_8)
{
 struct bio_vec VAR_9 = FUNC_7(VAR_6->bio_in, VAR_6->iter_in);
 struct bio_vec VAR_10 = FUNC_7(VAR_6->bio_out, VAR_6->iter_out);
 struct dm_crypt_request *VAR_11;
 u8 *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 __le64 *VAR_16;
 int VAR_17 = 0;

 FUNC_0(VAR_5->integrity_iv_size && VAR_5->integrity_iv_size != VAR_5->iv_size);


 if (FUNC_27(VAR_9.bv_len & (VAR_5->sector_size - 1)))
  return -VAR_3;

 VAR_11 = FUNC_11(VAR_5, VAR_7);
 VAR_11->iv_sector = VAR_6->cc_sector;
 if (FUNC_26(VAR_1, &VAR_5->cipher_flags))
  VAR_11->iv_sector >>= VAR_5->sector_shift;
 VAR_11->ctx = VAR_6;

 *FUNC_19(VAR_5, VAR_11) = VAR_8;

 VAR_16 = FUNC_18(VAR_5, VAR_11);
 *VAR_16 = FUNC_8(VAR_6->cc_sector - VAR_5->iv_offset);

 VAR_12 = FUNC_12(VAR_5, VAR_11);
 VAR_13 = FUNC_17(VAR_5, VAR_11);
 VAR_15 = FUNC_25(VAR_5, VAR_11);
 VAR_14 = FUNC_13(VAR_5, VAR_11);






 FUNC_20(VAR_11->sg_in, 4);
 FUNC_21(&VAR_11->sg_in[0], VAR_16, sizeof(uint64_t));
 FUNC_21(&VAR_11->sg_in[1], VAR_13, VAR_5->iv_size);
 FUNC_22(&VAR_11->sg_in[2], VAR_9.bv_page, VAR_5->sector_size, VAR_9.bv_offset);
 FUNC_21(&VAR_11->sg_in[3], VAR_15, VAR_5->integrity_tag_size);

 FUNC_20(VAR_11->sg_out, 4);
 FUNC_21(&VAR_11->sg_out[0], VAR_16, sizeof(uint64_t));
 FUNC_21(&VAR_11->sg_out[1], VAR_13, VAR_5->iv_size);
 FUNC_22(&VAR_11->sg_out[2], VAR_10.bv_page, VAR_5->sector_size, VAR_10.bv_offset);
 FUNC_21(&VAR_11->sg_out[3], VAR_15, VAR_5->integrity_tag_size);

 if (VAR_5->iv_gen_ops) {

  if (VAR_5->integrity_iv_size && FUNC_5(VAR_6->bio_in) != VAR_4) {
   FUNC_15(VAR_13, VAR_14, VAR_5->iv_size);
  } else {
   VAR_17 = VAR_5->iv_gen_ops->generator(VAR_5, VAR_13, VAR_11);
   if (VAR_17 < 0)
    return VAR_17;

   if (VAR_5->integrity_iv_size)
    FUNC_15(VAR_14, VAR_13, VAR_5->iv_size);
  }

  FUNC_15(VAR_12, VAR_13, VAR_5->iv_size);
 }

 FUNC_2(VAR_7, sizeof(uint64_t) + VAR_5->iv_size);
 if (FUNC_5(VAR_6->bio_in) == VAR_4) {
  FUNC_3(VAR_7, VAR_11->sg_in, VAR_11->sg_out,
           VAR_5->sector_size, VAR_12);
  VAR_17 = FUNC_10(VAR_7);
  if (VAR_5->integrity_tag_size + VAR_5->integrity_iv_size != VAR_5->on_disk_tag_size)
   FUNC_16(VAR_15 + VAR_5->integrity_tag_size + VAR_5->integrity_iv_size, 0,
          VAR_5->on_disk_tag_size - (VAR_5->integrity_tag_size + VAR_5->integrity_iv_size));
 } else {
  FUNC_3(VAR_7, VAR_11->sg_in, VAR_11->sg_out,
           VAR_5->sector_size + VAR_5->integrity_tag_size, VAR_12);
  VAR_17 = FUNC_9(VAR_7);
 }

 if (VAR_17 == -VAR_2) {
  char VAR_18[VAR_0];
  FUNC_1("%s: INTEGRITY AEAD ERROR, sector %llu", FUNC_6(VAR_6->bio_in, VAR_18),
       (unsigned long long)FUNC_14(*VAR_16));
 }

 if (!VAR_17 && VAR_5->iv_gen_ops && VAR_5->iv_gen_ops->post)
  VAR_17 = VAR_5->iv_gen_ops->post(VAR_5, VAR_13, VAR_11);

 FUNC_4(VAR_6->bio_in, &VAR_6->iter_in, VAR_5->sector_size);
 FUNC_4(VAR_6->bio_out, &VAR_6->iter_out, VAR_5->sector_size);

 return VAR_17;
}
