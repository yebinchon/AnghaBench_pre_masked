
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmz_metadata {TYPE_3__* dev; TYPE_1__* sb; } ;
struct dmz_mblock {int page; int state; scalar_t__ no; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {int bi_end_io; struct dmz_mblock* bi_private; TYPE_2__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {int bdev; } ;
struct TYPE_4__ {scalar_t__ block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bio*,int ,int ,int ) ;
 struct bio* FUNC_1 (int ,int) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static int FUNC_8(struct dmz_metadata *VAR_10, struct dmz_mblock *VAR_11,
       unsigned int VAR_12)
{
 sector_t VAR_13 = VAR_10->sb[VAR_12].block + VAR_11->no;
 struct bio *VAR_14;

 if (FUNC_4(VAR_10->dev))
  return -VAR_3;

 VAR_14 = FUNC_1(VAR_5, 1);
 if (!VAR_14) {
  FUNC_6(VAR_1, &VAR_11->state);
  return -VAR_4;
 }

 FUNC_6(VAR_2, &VAR_11->state);

 VAR_14->bi_iter.bi_sector = FUNC_5(VAR_13);
 FUNC_2(VAR_14, VAR_10->dev->bdev);
 VAR_14->bi_private = VAR_11;
 VAR_14->bi_end_io = VAR_9;
 FUNC_3(VAR_14, VAR_7, VAR_6 | VAR_8);
 FUNC_0(VAR_14, VAR_11->page, VAR_0, 0);
 FUNC_7(VAR_14);

 return 0;
}
