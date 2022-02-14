
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_table {int * table; } ;
struct dm_snapshot {struct dm_exception_table pending; struct dm_exception_table complete; } ;
struct dm_exception_table_lock {int * pending_slot; int * complete_slot; } ;
typedef int chunk_t ;


 size_t FUNC_0 (struct dm_exception_table*,int ) ;

__attribute__((used)) static void FUNC_1(struct dm_snapshot *VAR_0, chunk_t VAR_1,
      struct dm_exception_table_lock *VAR_2)
{
 struct dm_exception_table *VAR_3 = &VAR_0->complete;
 struct dm_exception_table *VAR_4 = &VAR_0->pending;

 VAR_2->complete_slot = &VAR_3->table[FUNC_0(VAR_3, VAR_1)];
 VAR_2->pending_slot = &VAR_4->table[FUNC_0(VAR_4, VAR_1)];
}
