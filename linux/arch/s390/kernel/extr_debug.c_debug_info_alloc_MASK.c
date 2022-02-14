
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct debug_view {int dummy; } ;
struct TYPE_5__ {int pages_per_area; int nr_areas; int level; int buf_size; int entry_size; struct TYPE_5__* active_entries; struct TYPE_5__* active_pages; int ref_count; int debugfs_entries; int views; int name; scalar_t__ active_area; int lock; int * areas; } ;
typedef TYPE_1__ debug_info_t ;
typedef int debug_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static debug_info_t *FUNC_8(const char *VAR_3, int VAR_4,
          int VAR_5, int VAR_6, int VAR_7,
          int VAR_8)
{
 debug_info_t *VAR_9;


 VAR_9 = FUNC_3(sizeof(debug_info_t), VAR_2);
 if (!VAR_9)
  goto fail_malloc_rc;
 VAR_9->active_entries = FUNC_1(VAR_5, sizeof(int), VAR_2);
 if (!VAR_9->active_entries)
  goto fail_malloc_active_entries;
 VAR_9->active_pages = FUNC_1(VAR_5, sizeof(int), VAR_2);
 if (!VAR_9->active_pages)
  goto fail_malloc_active_pages;
 if ((VAR_8 == VAR_0) && (VAR_4 != 0)) {
  VAR_9->areas = FUNC_0(VAR_4, VAR_5);
  if (!VAR_9->areas)
   goto fail_malloc_areas;
 } else {
  VAR_9->areas = ((void*)0);
 }


 FUNC_6(&VAR_9->lock);
 VAR_9->pages_per_area = VAR_4;
 VAR_9->nr_areas = VAR_5;
 VAR_9->active_area = 0;
 VAR_9->level = VAR_7;
 VAR_9->buf_size = VAR_6;
 VAR_9->entry_size = sizeof(debug_entry_t) + VAR_6;
 FUNC_7(VAR_9->name, VAR_3, sizeof(VAR_9->name));
 FUNC_4(VAR_9->views, 0, VAR_1 * sizeof(struct debug_view *));
 FUNC_4(VAR_9->debugfs_entries, 0, VAR_1 * sizeof(struct dentry *));
 FUNC_5(&(VAR_9->ref_count), 0);

 return VAR_9;

fail_malloc_areas:
 FUNC_2(VAR_9->active_pages);
fail_malloc_active_pages:
 FUNC_2(VAR_9->active_entries);
fail_malloc_active_entries:
 FUNC_2(VAR_9);
fail_malloc_rc:
 return ((void*)0);
}
