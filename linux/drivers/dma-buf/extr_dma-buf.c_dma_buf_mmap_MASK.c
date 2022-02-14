
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; struct file* vm_file; } ;
struct file {int dummy; } ;
struct dma_buf {unsigned long size; struct file* file; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* mmap ) (struct dma_buf*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct dma_buf*,struct vm_area_struct*) ;
 unsigned long FUNC_4 (struct vm_area_struct*) ;

int FUNC_5(struct dma_buf *VAR_3, struct vm_area_struct *VAR_4,
   unsigned long VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_3 || !VAR_4))
  return -VAR_0;


 if (!VAR_3->ops->mmap)
  return -VAR_0;


 if (VAR_5 + FUNC_4(VAR_4) < VAR_5)
  return -VAR_1;


 if (VAR_5 + FUNC_4(VAR_4) >
     VAR_3->size >> VAR_2)
  return -VAR_0;


 FUNC_2(VAR_3->file);
 VAR_6 = VAR_4->vm_file;
 VAR_4->vm_file = VAR_3->file;
 VAR_4->vm_pgoff = VAR_5;

 VAR_7 = VAR_3->ops->mmap(VAR_3, VAR_4);
 if (VAR_7) {

  VAR_4->vm_file = VAR_6;
  FUNC_1(VAR_3->file);
 } else {
  if (VAR_6)
   FUNC_1(VAR_6);
 }
 return VAR_7;

}
