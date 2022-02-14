
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct load_cache_entries_thread_data {int offset; char const* mmap; int ieot_start; int ieot_blocks; scalar_t__ consumed; int ce_mem_pool; int pthread; struct index_entry_offset_table* ieot; struct index_state* istate; } ;
struct index_state {int version; int ce_mem_pool; scalar_t__ name_hash_initialized; } ;
struct index_entry_offset_table {int nr; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ nr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct load_cache_entries_thread_data*) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int ,struct load_cache_entries_thread_data*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int) ;
 struct load_cache_entries_thread_data* FUNC_12 (int,int) ;

__attribute__((used)) static unsigned long FUNC_13(struct index_state *VAR_1, const char *VAR_2, size_t VAR_3,
       int VAR_4, struct index_entry_offset_table *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct load_cache_entries_thread_data *VAR_11;
 unsigned long VAR_12 = 0;


 if (VAR_1->name_hash_initialized)
  FUNC_0("the name hash isn't thread safe");

 FUNC_8(&VAR_1->ce_mem_pool, 0);


 if (VAR_4 > VAR_5->nr)
  VAR_4 = VAR_5->nr;
 VAR_11 = FUNC_12(VAR_4, sizeof(*VAR_11));

 VAR_7 = VAR_9 = 0;
 VAR_8 = FUNC_1(VAR_5->nr, VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct load_cache_entries_thread_data *VAR_13 = &VAR_11[VAR_6];
  int VAR_14, VAR_15;

  if (VAR_9 + VAR_8 > VAR_5->nr)
   VAR_8 = VAR_5->nr - VAR_9;

  VAR_13->istate = VAR_1;
  VAR_13->offset = VAR_7;
  VAR_13->mmap = VAR_2;
  VAR_13->ieot = VAR_5;
  VAR_13->ieot_start = VAR_9;
  VAR_13->ieot_blocks = VAR_8;


  VAR_14 = 0;
  for (VAR_15 = VAR_13->ieot_start; VAR_15 < VAR_13->ieot_start + VAR_13->ieot_blocks; VAR_15++)
   VAR_14 += VAR_13->ieot->entries[VAR_15].nr;
  if (VAR_1->version == 4) {
   FUNC_8(&VAR_13->ce_mem_pool,
    FUNC_5(VAR_14));
  } else {
   FUNC_8(&VAR_13->ce_mem_pool,
    FUNC_4(VAR_3, VAR_14));
  }

  VAR_10 = FUNC_9(&VAR_13->pthread, ((void*)0), VAR_0, VAR_13);
  if (VAR_10)
   FUNC_3(FUNC_2("unable to create load_cache_entries thread: %s"), FUNC_11(VAR_10));


  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
   VAR_7 += VAR_5->entries[VAR_9 + VAR_15].nr;
  VAR_9 += VAR_8;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct load_cache_entries_thread_data *VAR_16 = &VAR_11[VAR_6];

  VAR_10 = FUNC_10(VAR_16->pthread, ((void*)0));
  if (VAR_10)
   FUNC_3(FUNC_2("unable to join load_cache_entries thread: %s"), FUNC_11(VAR_10));
  FUNC_7(VAR_1->ce_mem_pool, VAR_16->ce_mem_pool);
  VAR_12 += VAR_16->consumed;
 }

 FUNC_6(VAR_11);

 return VAR_12;
}
