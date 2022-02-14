
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dm_snapshot {int kcopyd_client; TYPE_4__* store; TYPE_2__* cow; TYPE_1__* origin; } ;
struct TYPE_7__ {int new_chunk; int old_chunk; } ;
struct dm_snap_pending_exception {TYPE_3__ e; struct dm_snapshot* snap; } ;
struct dm_io_region {int count; void* sector; struct block_device* bdev; } ;
struct block_device {int dummy; } ;
typedef void* sector_t ;
struct TYPE_8__ {scalar_t__ chunk_size; } ;
struct TYPE_6__ {struct block_device* bdev; } ;
struct TYPE_5__ {struct block_device* bdev; } ;


 int FUNC_0 (struct dm_snapshot*) ;
 void* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct dm_io_region*,int,struct dm_io_region*,int ,int ,struct dm_snap_pending_exception*) ;
 void* FUNC_3 (struct block_device*) ;
 int FUNC_4 (void*,void*) ;

__attribute__((used)) static void FUNC_5(struct dm_snap_pending_exception *VAR_1)
{
 struct dm_snapshot *VAR_2 = VAR_1->snap;
 struct dm_io_region VAR_3, VAR_4;
 struct block_device *VAR_5 = VAR_2->origin->bdev;
 sector_t VAR_6;

 VAR_6 = FUNC_3(VAR_5);

 VAR_3.bdev = VAR_5;
 VAR_3.sector = FUNC_1(VAR_2->store, VAR_1->e.old_chunk);
 VAR_3.count = FUNC_4((sector_t)VAR_2->store->chunk_size, VAR_6 - VAR_3.sector);

 VAR_4.bdev = VAR_2->cow->bdev;
 VAR_4.sector = FUNC_1(VAR_2->store, VAR_1->e.new_chunk);
 VAR_4.count = VAR_3.count;


 FUNC_0(VAR_2);
 FUNC_2(VAR_2->kcopyd_client, &VAR_3, 1, &VAR_4, 0, VAR_0, VAR_1);
}
