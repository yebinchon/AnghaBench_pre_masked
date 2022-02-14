
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int * vm_ops; int vm_page_prot; scalar_t__ vm_pgoff; TYPE_1__* vm_file; } ;
struct msc_iter {struct msc* msc; } ;
struct msc {scalar_t__ mode; scalar_t__ nr_pages; int user_count; int mmap_count; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct msc_iter* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_7, struct vm_area_struct *VAR_8)
{
 unsigned long VAR_9 = VAR_8->vm_end - VAR_8->vm_start;
 struct msc_iter *VAR_10 = VAR_8->vm_file->private_data;
 struct msc *VAR_11 = VAR_10->msc;
 int VAR_12 = -VAR_0;

 if (!VAR_9 || FUNC_3(VAR_9))
  return -VAR_0;

 if (VAR_8->vm_pgoff)
  return -VAR_0;


 if (!FUNC_1(&VAR_11->user_count))
  return -VAR_0;

 if (VAR_11->mode != VAR_2 &&
     VAR_11->mode != VAR_1)
  goto out;

 if (VAR_9 >> VAR_3 != VAR_11->nr_pages)
  goto out;

 FUNC_2(&VAR_11->mmap_count, 1);
 VAR_12 = 0;

out:
 if (VAR_12)
  FUNC_0(&VAR_11->user_count);

 VAR_8->vm_page_prot = FUNC_4(VAR_8->vm_page_prot);
 VAR_8->vm_flags |= VAR_5 | VAR_4;
 VAR_8->vm_ops = &VAR_6;
 return VAR_12;
}
