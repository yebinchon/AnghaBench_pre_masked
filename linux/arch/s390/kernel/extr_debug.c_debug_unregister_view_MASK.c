
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct debug_view {int dummy; } ;
struct TYPE_3__ {int lock; struct dentry** debugfs_entries; struct debug_view** views; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(debug_info_t *VAR_1, struct debug_view *VAR_2)
{
 struct dentry *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 int VAR_5, VAR_6 = 0;

 if (!VAR_1)
  goto out;
 FUNC_1(&VAR_1->lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1->views[VAR_5] == VAR_2)
   break;
 }
 if (VAR_5 == VAR_0) {
  VAR_6 = -1;
 } else {
  VAR_3 = VAR_1->debugfs_entries[VAR_5];
  VAR_1->views[VAR_5] = ((void*)0);
  VAR_1->debugfs_entries[VAR_5] = ((void*)0);
 }
 FUNC_2(&VAR_1->lock, VAR_4);
 FUNC_0(VAR_3);
out:
 return VAR_6;
}
