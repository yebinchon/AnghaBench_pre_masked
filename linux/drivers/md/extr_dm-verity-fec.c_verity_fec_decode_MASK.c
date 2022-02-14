
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct dm_verity_io {int dummy; } ;
struct dm_verity_fec_io {scalar_t__ level; scalar_t__ output_pos; int output; } ;
struct dm_verity {int data_dev_block_bits; TYPE_2__* fec; scalar_t__ data_blocks; TYPE_1__* data_dev; } ;
struct bvec_iter {int dummy; } ;
typedef int sector_t ;
typedef enum verity_block_type { ____Placeholder_verity_block_type } verity_block_type ;
struct TYPE_4__ {int rounds; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (struct dm_verity*,struct dm_verity_io*,struct dm_verity_fec_io*,int,int,int) ;
 struct dm_verity_fec_io* FUNC_3 (struct dm_verity_io*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct dm_verity*) ;
 int FUNC_6 (struct dm_verity*,struct dm_verity_io*,struct bvec_iter*,int ) ;

int FUNC_7(struct dm_verity *VAR_5, struct dm_verity_io *VAR_6,
        enum verity_block_type VAR_7, sector_t VAR_8, u8 *VAR_9,
        struct bvec_iter *VAR_10)
{
 int VAR_11;
 struct dm_verity_fec_io *VAR_12 = FUNC_3(VAR_6);
 u64 VAR_13, VAR_14, VAR_15;

 if (!FUNC_5(VAR_5))
  return -VAR_3;

 if (VAR_12->level >= VAR_1) {
  FUNC_0("%s: FEC: recursion too deep", VAR_5->data_dev->name);
  return -VAR_2;
 }

 VAR_12->level++;

 if (VAR_7 == VAR_0)
  VAR_8 += VAR_5->data_blocks;
 VAR_13 = VAR_8 << VAR_5->data_dev_block_bits;
 VAR_14 = FUNC_1(VAR_13, VAR_5->fec->rounds << VAR_5->data_dev_block_bits);





 VAR_15 = VAR_13 - VAR_14 * (VAR_5->fec->rounds << VAR_5->data_dev_block_bits);






 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_12, VAR_15, VAR_13, 0);
 if (VAR_11 < 0) {
  VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_12, VAR_15, VAR_13, 1);
  if (VAR_11 < 0)
   goto done;
 }

 if (VAR_9)
  FUNC_4(VAR_9, VAR_12->output, 1 << VAR_5->data_dev_block_bits);
 else if (VAR_10) {
  VAR_12->output_pos = 0;
  VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_10, VAR_4);
 }

done:
 VAR_12->level--;
 return VAR_11;
}
