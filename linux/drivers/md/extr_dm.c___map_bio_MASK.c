
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mapped_device {int type; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {TYPE_3__* bi_disk; TYPE_1__ bi_iter; int bi_end_io; } ;
struct dm_target_io {struct dm_target* ti; struct dm_io* io; struct bio clone; } ;
struct dm_target {TYPE_2__* type; } ;
struct dm_io {int orig_bio; int io_count; struct mapped_device* md; } ;
typedef int sector_t ;
typedef int blk_qc_t ;
struct TYPE_6__ {int queue; } ;
struct TYPE_5__ {int (* map ) (struct dm_target*,struct bio*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;




 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct dm_io*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct dm_target_io*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct dm_target*,struct bio*) ;
 int FUNC_9 (int ,struct bio*,int ,int ) ;

__attribute__((used)) static blk_qc_t FUNC_10(struct dm_target_io *VAR_5)
{
 int VAR_6;
 sector_t VAR_7;
 struct bio *VAR_8 = &VAR_5->clone;
 struct dm_io *VAR_9 = VAR_5->io;
 struct mapped_device *VAR_10 = VAR_9->md;
 struct dm_target *VAR_11 = VAR_5->ti;
 blk_qc_t VAR_12 = VAR_0;

 VAR_8->bi_end_io = VAR_4;






 FUNC_2(&VAR_9->io_count);
 VAR_7 = VAR_8->bi_iter.bi_sector;

 VAR_6 = VAR_11->type->map(VAR_11, VAR_8);
 switch (VAR_6) {
 case 128:
  break;
 case 130:

  FUNC_9(VAR_8->bi_disk->queue, VAR_8,
          FUNC_3(VAR_9->orig_bio), VAR_7);
  if (VAR_10->type == VAR_3)
   VAR_12 = FUNC_5(VAR_8);
  else
   VAR_12 = FUNC_7(VAR_8);
  break;
 case 131:
  FUNC_6(VAR_5);
  FUNC_4(VAR_9, VAR_2);
  break;
 case 129:
  FUNC_6(VAR_5);
  FUNC_4(VAR_9, VAR_1);
  break;
 default:
  FUNC_1("unimplemented target map return value: %d", VAR_6);
  FUNC_0();
 }

 return VAR_12;
}
