
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct switch_ctx {TYPE_3__* path_list; } ;
struct dm_target {struct switch_ctx* private; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {scalar_t__ start; TYPE_2__* dmdev; } ;
struct TYPE_5__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 scalar_t__ FUNC_1 (struct dm_target*,scalar_t__) ;
 unsigned int FUNC_2 (struct switch_ctx*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, struct bio *VAR_2)
{
 struct switch_ctx *VAR_3 = VAR_1->private;
 sector_t VAR_4 = FUNC_1(VAR_1, VAR_2->bi_iter.bi_sector);
 unsigned VAR_5 = FUNC_2(VAR_3, VAR_4);

 FUNC_0(VAR_2, VAR_3->path_list[VAR_5].dmdev->bdev);
 VAR_2->bi_iter.bi_sector = VAR_3->path_list[VAR_5].start + VAR_4;

 return VAR_0;
}
