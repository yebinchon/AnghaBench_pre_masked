
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct load_cache_entries_thread_data {int ieot_start; int ieot_blocks; TYPE_2__* ieot; int offset; int mmap; int ce_mem_pool; int istate; int consumed; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {scalar_t__ nr; int offset; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,int ,int ,int *) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0)
{
 struct load_cache_entries_thread_data *VAR_1 = VAR_0;
 int VAR_2;


 for (VAR_2 = VAR_1->ieot_start; VAR_2 < VAR_1->ieot_start + VAR_1->ieot_blocks; VAR_2++) {
  VAR_1->consumed += FUNC_0(VAR_1->istate, VAR_1->ce_mem_pool,
   VAR_1->offset, VAR_1->ieot->entries[VAR_2].nr, VAR_1->mmap, VAR_1->ieot->entries[VAR_2].offset, ((void*)0));
  VAR_1->offset += VAR_1->ieot->entries[VAR_2].nr;
 }
 return ((void*)0);
}
