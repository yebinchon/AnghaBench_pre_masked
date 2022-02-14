
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int flush_on_suspend; int memory_map_size; int memory_map; int writeback_all; int writeback_wq; int writeback_work; int autocommit_timer; } ;
struct dm_target {struct dm_writecache* private; } ;


 scalar_t__ FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dm_writecache*) ;
 int FUNC_6 (struct dm_writecache*) ;
 int FUNC_7 (struct dm_writecache*) ;
 int FUNC_8 (struct dm_writecache*) ;
 scalar_t__ FUNC_9 (struct dm_writecache*) ;

__attribute__((used)) static void FUNC_10(struct dm_target *VAR_0)
{
 struct dm_writecache *VAR_1 = VAR_0->private;
 bool VAR_2;

 FUNC_1(&VAR_1->autocommit_timer);

 FUNC_5(VAR_1);
 FUNC_7(VAR_1);
 VAR_2 = VAR_1->flush_on_suspend;
 if (VAR_2) {
  VAR_1->flush_on_suspend = 0;
  VAR_1->writeback_all++;
  FUNC_4(VAR_1->writeback_wq, &VAR_1->writeback_work);
 }
 FUNC_6(VAR_1);

 FUNC_2(VAR_1->writeback_wq);

 FUNC_5(VAR_1);
 if (VAR_2)
  VAR_1->writeback_all--;
 while (FUNC_9(VAR_1));

 if (FUNC_0(VAR_1))
  FUNC_3(VAR_1->memory_map, VAR_1->memory_map_size);

 FUNC_8(VAR_1);

 FUNC_6(VAR_1);
}
