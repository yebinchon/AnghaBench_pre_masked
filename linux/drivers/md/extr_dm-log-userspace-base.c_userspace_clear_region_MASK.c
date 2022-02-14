
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int flush_lock; int clear_list; int flush_entry_pool; } ;
struct dm_dirty_log_flush_entry {int list; int region; int type; } ;
struct dm_dirty_log {struct log_c* context; } ;
typedef int region_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct dm_dirty_log_flush_entry* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dm_dirty_log *VAR_2, region_t VAR_3)
{
 unsigned long VAR_4;
 struct log_c *VAR_5 = VAR_2->context;
 struct dm_dirty_log_flush_entry *VAR_6;







 VAR_6 = FUNC_2(&VAR_5->flush_entry_pool, VAR_1);
 if (!VAR_6) {
  FUNC_0("Failed to allocate memory to clear region.");
  return;
 }

 FUNC_3(&VAR_5->flush_lock, VAR_4);
 VAR_6->type = VAR_0;
 VAR_6->region = VAR_3;
 FUNC_1(&VAR_6->list, &VAR_5->clear_list);
 FUNC_4(&VAR_5->flush_lock, VAR_4);

 return;
}
