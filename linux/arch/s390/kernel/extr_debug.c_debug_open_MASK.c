
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_11__ {scalar_t__ dentry; } ;
struct file {TYPE_3__* private_data; TYPE_1__ f_path; } ;
struct TYPE_13__ {scalar_t__ act_entry_offset; int act_entry; scalar_t__ act_page; scalar_t__ act_area; TYPE_2__* view; TYPE_4__* debug_info_org; TYPE_4__* debug_info_snap; scalar_t__ offset; } ;
typedef TYPE_3__ file_private_info_t ;
struct TYPE_14__ {scalar_t__* debugfs_entries; TYPE_2__** views; } ;
typedef TYPE_4__ debug_info_t ;
struct TYPE_15__ {TYPE_4__* i_private; } ;
struct TYPE_12__ {int header_proc; int format_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_7 ;
 TYPE_6__* FUNC_3 (struct file*) ;
 TYPE_3__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_8, struct file *VAR_9)
{
 debug_info_t *VAR_10, *VAR_11;
 file_private_info_t *VAR_12;
 int VAR_13, VAR_14 = 0;

 FUNC_5(&VAR_7);
 VAR_10 = FUNC_3(VAR_9)->i_private;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (!VAR_10->views[VAR_13])
   continue;
  else if (VAR_10->debugfs_entries[VAR_13] == VAR_9->f_path.dentry)
   goto found;
 }

 VAR_14 = -VAR_3;
 goto out;

found:





 if (!VAR_10->views[VAR_13]->format_proc && !VAR_10->views[VAR_13]->header_proc)
  VAR_11 = FUNC_0(VAR_10, VAR_6);
 else
  VAR_11 = FUNC_0(VAR_10, VAR_0);

 if (!VAR_11) {
  VAR_14 = -VAR_4;
  goto out;
 }
 VAR_12 = FUNC_4(sizeof(file_private_info_t), VAR_5);
 if (!VAR_12) {
  FUNC_1(VAR_11);
  VAR_14 = -VAR_4;
  goto out;
 }
 VAR_12->offset = 0;
 VAR_12->debug_info_snap = VAR_11;
 VAR_12->debug_info_org = VAR_10;
 VAR_12->view = VAR_10->views[VAR_13];
 VAR_12->act_area = 0;
 VAR_12->act_page = 0;
 VAR_12->act_entry = VAR_2;
 VAR_12->act_entry_offset = 0;
 VAR_9->private_data = VAR_12;
 FUNC_2(VAR_10);
 FUNC_7(VAR_8, VAR_9);
out:
 FUNC_6(&VAR_7);
 return VAR_14;
}
