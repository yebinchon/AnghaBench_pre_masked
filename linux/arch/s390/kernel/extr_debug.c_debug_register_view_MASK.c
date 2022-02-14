
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct dentry {int dummy; } ;
struct debug_view {int name; int input_proc; scalar_t__ header_proc; scalar_t__ format_proc; scalar_t__ prolog_proc; } ;
struct TYPE_4__ {int mode; int lock; struct dentry** debugfs_entries; struct debug_view** views; int name; int debugfs_root_entry; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dentry* FUNC_0 (int ,int,int ,TYPE_1__*,int *) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(debug_info_t *VAR_10, struct debug_view *VAR_11)
{
 unsigned long VAR_12;
 struct dentry *VAR_13;
 umode_t VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 if (!VAR_10)
  goto out;
 VAR_14 = (VAR_10->mode | VAR_1) & ~VAR_8;
 if (!(VAR_11->prolog_proc || VAR_11->format_proc || VAR_11->header_proc))
  VAR_14 &= ~(VAR_4 | VAR_2 | VAR_3);
 if (!VAR_11->input_proc)
  VAR_14 &= ~(VAR_7 | VAR_5 | VAR_6);
 VAR_13 = FUNC_0(VAR_11->name, VAR_14, VAR_10->debugfs_root_entry,
      VAR_10, &VAR_9);
 FUNC_3(&VAR_10->lock, VAR_12);
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  if (!VAR_10->views[VAR_16])
   break;
 }
 if (VAR_16 == VAR_0) {
  FUNC_2("Registering view %s/%s would exceed the maximum "
         "number of views %i\n", VAR_10->name, VAR_11->name, VAR_16);
  VAR_15 = -1;
 } else {
  VAR_10->views[VAR_16] = VAR_11;
  VAR_10->debugfs_entries[VAR_16] = VAR_13;
 }
 FUNC_4(&VAR_10->lock, VAR_12);
 if (VAR_15)
  FUNC_1(VAR_13);
out:
 return VAR_15;
}
