
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_target_io {int dummy; } ;
struct dm_target {int dummy; } ;
struct dm_table {int dummy; } ;
struct clone_info {int io; scalar_t__ sector_count; struct bio* bio; } ;
struct bio {int bi_opf; } ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clone_info*,struct dm_target_io*,int *) ;
 scalar_t__ FUNC_1 (struct clone_info*,struct dm_target*,int*) ;
 int FUNC_2 (struct clone_info*) ;
 struct dm_target_io* FUNC_3 (struct clone_info*,struct dm_target*,int ,int ) ;
 int FUNC_4 (struct bio*,int *,int ) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct clone_info*,struct mapped_device*,struct dm_table*,struct bio*) ;

__attribute__((used)) static blk_qc_t FUNC_9(struct mapped_device *VAR_5, struct dm_table *VAR_6,
         struct bio *VAR_7, struct dm_target *VAR_8)
{
 struct clone_info VAR_9;
 blk_qc_t VAR_10 = VAR_0;
 int VAR_11 = 0;

 FUNC_8(&VAR_9, VAR_5, VAR_6, VAR_7);

 if (VAR_7->bi_opf & VAR_3) {
  struct bio VAR_12;






  FUNC_4(&VAR_12, ((void*)0), 0);
  VAR_12.bi_opf = VAR_2 | VAR_3 | VAR_4;
  VAR_9.bio = &VAR_12;
  VAR_9.sector_count = 0;
  VAR_11 = FUNC_2(&VAR_9);

 } else {
  struct dm_target_io *VAR_13;

  VAR_9.bio = VAR_7;
  VAR_9.sector_count = FUNC_5(VAR_7);
  if (FUNC_1(&VAR_9, VAR_8, &VAR_11))
   goto out;

  VAR_13 = FUNC_3(&VAR_9, VAR_8, 0, VAR_1);
  VAR_10 = FUNC_0(&VAR_9, VAR_13, ((void*)0));
 }
out:

 FUNC_6(VAR_9.io, FUNC_7(VAR_11));
 return VAR_10;
}
