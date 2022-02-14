
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vma_data {int type; int refcnt; int lock; int vm_end; int vm_start; } ;
struct vm_area_struct {scalar_t__ vm_pgoff; int vm_flags; int * vm_ops; int vm_page_prot; struct vma_data* vm_private_data; int vm_end; int vm_start; } ;
struct file {int dummy; } ;
typedef enum mspec_page_type { ____Placeholder_mspec_page_type } mspec_page_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct vma_data* FUNC_0 (int,int ) ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vm_area_struct*) ;
 struct vma_data* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_13, struct vm_area_struct *VAR_14,
     enum mspec_page_type VAR_15)
{
 struct vma_data *VAR_16;
 int VAR_17, VAR_18;

 if (VAR_14->vm_pgoff != 0)
  return -VAR_0;

 if ((VAR_14->vm_flags & VAR_10) == 0)
  return -VAR_0;

 if ((VAR_14->vm_flags & VAR_11) == 0)
  return -VAR_2;

 VAR_17 = FUNC_4(VAR_14);
 VAR_18 = sizeof(struct vma_data) + VAR_17 * sizeof(long);
 if (VAR_18 <= VAR_5)
  VAR_16 = FUNC_0(VAR_18, VAR_3);
 else
  VAR_16 = FUNC_5(VAR_18);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->vm_start = VAR_14->vm_start;
 VAR_16->vm_end = VAR_14->vm_end;
 VAR_16->type = VAR_15;
 FUNC_3(&VAR_16->lock);
 FUNC_2(&VAR_16->refcnt, 1);
 VAR_14->vm_private_data = VAR_16;

 VAR_14->vm_flags |= VAR_8 | VAR_9 | VAR_7 | VAR_6;
 if (VAR_16->type == VAR_4)
  VAR_14->vm_page_prot = FUNC_1(VAR_14->vm_page_prot);
 VAR_14->vm_ops = &VAR_12;

 return 0;
}
