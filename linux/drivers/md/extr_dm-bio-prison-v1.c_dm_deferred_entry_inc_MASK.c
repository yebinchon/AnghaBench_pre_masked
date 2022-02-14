
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_deferred_set {int current_entry; int lock; struct dm_deferred_entry* entries; } ;
struct dm_deferred_entry {int count; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct dm_deferred_entry *FUNC_2(struct dm_deferred_set *VAR_0)
{
 unsigned long VAR_1;
 struct dm_deferred_entry *VAR_2;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_2 = VAR_0->entries + VAR_0->current_entry;
 VAR_2->count++;
 FUNC_1(&VAR_0->lock, VAR_1);

 return VAR_2;
}
