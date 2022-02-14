
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct dm_target {struct crypt_config* private; } ;
struct TYPE_7__ {struct skcipher_request* req; struct aead_request* req_aead; } ;
struct TYPE_8__ {TYPE_3__ r; } ;
struct dm_crypt_io {int integrity_metadata_from_pool; struct bio* base_bio; TYPE_4__ ctx; int integrity_metadata; } ;
struct crypt_config {int start; int on_disk_tag_size; int sector_size; int sector_shift; int tag_pool_max_sectors; int tag_pool; int per_bio_data_size; TYPE_1__* dev; } ;
struct TYPE_6__ {int bi_sector; int bi_size; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
struct aead_request {int dummy; } ;
struct TYPE_5__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 scalar_t__ FUNC_4 (struct crypt_config*) ;
 int FUNC_5 (struct dm_crypt_io*,struct crypt_config*,struct bio*,int) ;
 int FUNC_6 (struct bio*,int) ;
 struct dm_crypt_io* FUNC_7 (struct bio*,int ) ;
 int FUNC_8 (struct dm_target*,int) ;
 scalar_t__ FUNC_9 (struct dm_crypt_io*,int ) ;
 int FUNC_10 (struct dm_crypt_io*) ;
 int FUNC_11 (struct dm_crypt_io*) ;
 int FUNC_12 (unsigned int,int) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct dm_target *VAR_16, struct bio *VAR_17)
{
 struct dm_crypt_io *VAR_18;
 struct crypt_config *VAR_19 = VAR_16->private;






 if (FUNC_14(VAR_17->bi_opf & VAR_10 ||
     FUNC_1(VAR_17) == VAR_9)) {
  FUNC_3(VAR_17, VAR_19->dev->bdev);
  if (FUNC_2(VAR_17))
   VAR_17->bi_iter.bi_sector = VAR_19->start +
    FUNC_8(VAR_16, VAR_17->bi_iter.bi_sector);
  return VAR_2;
 }




 if (FUNC_14(VAR_17->bi_iter.bi_size > (VAR_0 << VAR_7)) &&
     (FUNC_0(VAR_17) == VAR_12 || VAR_19->on_disk_tag_size))
  FUNC_6(VAR_17, ((VAR_0 << VAR_7) >> VAR_11));





 if (FUNC_14((VAR_17->bi_iter.bi_sector & ((VAR_19->sector_size >> VAR_11) - 1)) != 0))
  return VAR_1;

 if (FUNC_14(VAR_17->bi_iter.bi_size & (VAR_19->sector_size - 1)))
  return VAR_1;

 VAR_18 = FUNC_7(VAR_17, VAR_19->per_bio_data_size);
 FUNC_5(VAR_18, VAR_19, VAR_17, FUNC_8(VAR_16, VAR_17->bi_iter.bi_sector));

 if (VAR_19->on_disk_tag_size) {
  unsigned VAR_20 = VAR_19->on_disk_tag_size * (FUNC_2(VAR_17) >> VAR_19->sector_shift);

  if (FUNC_14(VAR_20 > VAR_6) ||
      FUNC_14(!(VAR_18->integrity_metadata = FUNC_12(VAR_20,
    VAR_4 | VAR_14 | VAR_13 | VAR_15)))) {
   if (FUNC_2(VAR_17) > VAR_19->tag_pool_max_sectors)
    FUNC_6(VAR_17, VAR_19->tag_pool_max_sectors);
   VAR_18->integrity_metadata = FUNC_13(&VAR_19->tag_pool, VAR_4);
   VAR_18->integrity_metadata_from_pool = 1;
  }
 }

 if (FUNC_4(VAR_19))
  VAR_18->ctx.r.req_aead = (struct aead_request *)(VAR_18 + 1);
 else
  VAR_18->ctx.r.req = (struct skcipher_request *)(VAR_18 + 1);

 if (FUNC_0(VAR_18->base_bio) == VAR_8) {
  if (FUNC_9(VAR_18, VAR_5))
   FUNC_11(VAR_18);
 } else
  FUNC_10(VAR_18);

 return VAR_3;
}
