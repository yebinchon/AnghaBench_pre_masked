
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_entry {size_t index; int write_in_progress; } ;
struct dm_writecache {size_t n_blocks; struct wc_entry* entries; } ;


 int VAR_0 ;
 int FUNC_0 (int,size_t) ;
 struct wc_entry* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dm_writecache *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->entries)
  return 0;
 VAR_1->entries = FUNC_1(FUNC_0(sizeof(struct wc_entry), VAR_1->n_blocks));
 if (!VAR_1->entries)
  return -VAR_0;
 for (VAR_2 = 0; VAR_2 < VAR_1->n_blocks; VAR_2++) {
  struct wc_entry *VAR_3 = &VAR_1->entries[VAR_2];
  VAR_3->index = VAR_2;
  VAR_3->write_in_progress = 0;
 }

 return 0;
}
