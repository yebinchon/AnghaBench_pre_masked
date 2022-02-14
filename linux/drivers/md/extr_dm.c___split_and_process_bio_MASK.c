
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mapped_device {TYPE_2__* queue; } ;
struct dm_table {int dummy; } ;
struct clone_info {TYPE_4__* io; scalar_t__ sector_count; struct bio* bio; } ;
struct TYPE_6__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
typedef int blk_qc_t ;
struct TYPE_10__ {scalar_t__ bio_list; } ;
struct TYPE_9__ {struct bio* orig_bio; } ;
struct TYPE_8__ {int part0; } ;
struct TYPE_7__ {int bio_split; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (struct clone_info*) ;
 int FUNC_2 (struct clone_info*) ;
 int FUNC_3 (struct bio*,struct bio*) ;
 int FUNC_4 (struct bio*,int *,int ) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (struct bio*) ;
 struct bio* FUNC_7 (struct bio*,scalar_t__,int ,int *) ;
 TYPE_5__* VAR_6 ;
 int FUNC_8 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_9 (struct mapped_device*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct bio*) ;
 int FUNC_12 (struct clone_info*,struct mapped_device*,struct dm_table*,struct bio*) ;
 size_t FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int * VAR_7 ;
 int FUNC_16 (TYPE_2__*,struct bio*,int ) ;

__attribute__((used)) static blk_qc_t FUNC_17(struct mapped_device *VAR_8,
     struct dm_table *VAR_9, struct bio *VAR_10)
{
 struct clone_info VAR_11;
 blk_qc_t VAR_12 = VAR_0;
 int VAR_13 = 0;

 FUNC_12(&VAR_11, VAR_8, VAR_9, VAR_10);

 if (VAR_10->bi_opf & VAR_4) {
  struct bio VAR_14;






  FUNC_4(&VAR_14, ((void*)0), 0);
  VAR_14.bi_opf = VAR_2 | VAR_4 | VAR_5;
  VAR_11.bio = &VAR_14;
  VAR_11.sector_count = 0;
  VAR_13 = FUNC_1(&VAR_11);

 } else if (FUNC_5(VAR_10) == VAR_3) {
  VAR_11.bio = VAR_10;
  VAR_11.sector_count = 0;
  VAR_13 = FUNC_2(&VAR_11);
 } else {
  VAR_11.bio = VAR_10;
  VAR_11.sector_count = FUNC_6(VAR_10);
  while (VAR_11.sector_count && !VAR_13) {
   VAR_13 = FUNC_2(&VAR_11);
   if (VAR_6->bio_list && VAR_11.sector_count && !VAR_13) {
    struct bio *VAR_15 = FUNC_7(VAR_10, FUNC_6(VAR_10) - VAR_11.sector_count,
         VAR_1, &VAR_8->queue->bio_split);
    VAR_11.io->orig_bio = VAR_15;
    FUNC_14();
    FUNC_0(&FUNC_9(VAR_8)->part0,
         VAR_7[FUNC_13(FUNC_5(VAR_10))], VAR_11.sector_count);
    FUNC_15();

    FUNC_3(VAR_15, VAR_10);
    FUNC_16(VAR_8->queue, VAR_15, VAR_10->bi_iter.bi_sector);
    VAR_12 = FUNC_11(VAR_10);
    break;
   }
  }
 }


 FUNC_8(VAR_11.io, FUNC_10(VAR_13));
 return VAR_12;
}
