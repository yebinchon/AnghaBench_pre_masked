
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity_io {int dummy; } ;
struct dm_verity {int data_dev_block_bits; TYPE_1__* ti; } ;
struct bvec_iter {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int per_io_data_size; } ;


 int FUNC_0 (struct bio*,struct bvec_iter*,int) ;
 struct bio* FUNC_1 (struct dm_verity_io*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct dm_verity *VAR_0,
     struct dm_verity_io *VAR_1,
     struct bvec_iter *VAR_2)
{
 struct bio *VAR_3 = FUNC_1(VAR_1, VAR_0->ti->per_io_data_size);

 FUNC_0(VAR_3, VAR_2, 1 << VAR_0->data_dev_block_bits);
}
