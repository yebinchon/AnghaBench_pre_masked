
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {int queue; struct dm_target* immutable_target; } ;
struct dm_target {int dummy; } ;
struct dm_table {int dummy; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int blk_qc_t ;
struct TYPE_4__ {scalar_t__ bio_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mapped_device*,struct dm_table*,struct bio*,struct dm_target*) ;
 int FUNC_1 (struct mapped_device*,struct dm_table*,struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,struct bio**) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*,struct dm_target*,struct bio**) ;
 struct dm_target* FUNC_6 (struct dm_table*,int ) ;
 int FUNC_7 (struct bio*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static blk_qc_t FUNC_9(struct mapped_device *VAR_3,
          struct dm_table *VAR_4, struct bio *VAR_5)
{
 blk_qc_t VAR_6 = VAR_0;
 struct dm_target *VAR_7 = VAR_3->immutable_target;

 if (FUNC_8(!VAR_4)) {
  FUNC_2(VAR_5);
  return VAR_6;
 }

 if (!VAR_7) {
  VAR_7 = FUNC_6(VAR_4, VAR_5->bi_iter.bi_sector);
  if (FUNC_8(!VAR_7)) {
   FUNC_2(VAR_5);
   return VAR_6;
  }
 }






 if (VAR_2->bio_list) {
  FUNC_3(VAR_3->queue, &VAR_5);
  if (!FUNC_7(VAR_5))
   FUNC_5(VAR_3, VAR_7, &VAR_5);
 }

 if (FUNC_4(VAR_3) == VAR_1)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
 else
  return FUNC_1(VAR_3, VAR_4, VAR_5);
}
