
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_snapshot {int kcopyd_client; TYPE_1__* store; TYPE_2__* cow; } ;
struct dm_io_region {int count; int sector; int bdev; } ;
struct dm_exception {int dummy; } ;
struct TYPE_6__ {int bi_sector; } ;
struct bio {struct dm_snapshot* bi_private; TYPE_3__ bi_iter; } ;
typedef int chunk_t ;
struct TYPE_5__ {int bdev; } ;
struct TYPE_4__ {int chunk_size; } ;


 int FUNC_0 (struct dm_snapshot*) ;
 int FUNC_1 (struct dm_snapshot*) ;
 int FUNC_2 (int ,int,struct dm_io_region*,int ,int ,struct bio*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct dm_snapshot *VAR_1, struct dm_exception *VAR_2,
      struct bio *VAR_3, chunk_t VAR_4)
{
 struct dm_io_region VAR_5;

 VAR_5.bdev = VAR_1->cow->bdev;
 VAR_5.sector = VAR_3->bi_iter.bi_sector;
 VAR_5.count = VAR_1->store->chunk_size;

 FUNC_1(VAR_1);
 FUNC_0(VAR_3->bi_private);
 VAR_3->bi_private = VAR_1;
 FUNC_2(VAR_1->kcopyd_client, 1, &VAR_5, 0, VAR_0, VAR_3);
}
