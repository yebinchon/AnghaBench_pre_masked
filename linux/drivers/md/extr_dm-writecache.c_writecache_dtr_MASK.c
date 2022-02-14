
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {scalar_t__ dirty_bitmap; scalar_t__ dm_io; scalar_t__ dm_kcopyd; scalar_t__ memory_map; scalar_t__ entries; scalar_t__ ssd_dev; scalar_t__ dev; scalar_t__ writeback_wq; int copy_pool; int bio_set; scalar_t__ flush_thread; scalar_t__ endio_thread; } ;
struct dm_target {struct dm_writecache* private; } ;


 scalar_t__ FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct dm_target*,scalar_t__) ;
 int FUNC_6 (struct dm_writecache*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dm_writecache*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct dm_target *VAR_0)
{
 struct dm_writecache *VAR_1 = VAR_0->private;

 if (!VAR_1)
  return;

 if (VAR_1->endio_thread)
  FUNC_7(VAR_1->endio_thread);

 if (VAR_1->flush_thread)
  FUNC_7(VAR_1->flush_thread);

 FUNC_1(&VAR_1->bio_set);

 FUNC_8(&VAR_1->copy_pool);

 if (VAR_1->writeback_wq)
  FUNC_2(VAR_1->writeback_wq);

 if (VAR_1->dev)
  FUNC_5(VAR_0, VAR_1->dev);

 if (VAR_1->ssd_dev)
  FUNC_5(VAR_0, VAR_1->ssd_dev);

 if (VAR_1->entries)
  FUNC_10(VAR_1->entries);

 if (VAR_1->memory_map) {
  if (FUNC_0(VAR_1))
   FUNC_9(VAR_1);
  else
   FUNC_10(VAR_1->memory_map);
 }

 if (VAR_1->dm_kcopyd)
  FUNC_4(VAR_1->dm_kcopyd);

 if (VAR_1->dm_io)
  FUNC_3(VAR_1->dm_io);

 if (VAR_1->dirty_bitmap)
  FUNC_10(VAR_1->dirty_bitmap);

 FUNC_6(VAR_1);
}
