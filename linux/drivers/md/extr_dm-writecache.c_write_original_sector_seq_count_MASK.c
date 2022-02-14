
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct wc_memory_entry {void* seq_count; void* original_sector; } ;
struct wc_entry {void* seq_count; void* original_sector; } ;
struct dm_writecache {int dummy; } ;


 void* FUNC_0 (void*) ;
 int * FUNC_1 (struct dm_writecache*,struct wc_entry*) ;
 int FUNC_2 (int ,struct wc_memory_entry) ;

__attribute__((used)) static void FUNC_3(struct dm_writecache *VAR_0, struct wc_entry *VAR_1,
         uint64_t VAR_2, uint64_t VAR_3)
{
 struct wc_memory_entry VAR_4;




 VAR_4.original_sector = FUNC_0(VAR_2);
 VAR_4.seq_count = FUNC_0(VAR_3);
 FUNC_2(*FUNC_1(VAR_0, VAR_1), VAR_4);
}
