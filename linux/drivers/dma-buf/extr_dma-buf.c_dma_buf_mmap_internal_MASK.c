
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_pgoff; } ;
struct file {struct dma_buf* private_data; } ;
struct dma_buf {scalar_t__ size; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* mmap ) (struct dma_buf*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct dma_buf*,struct vm_area_struct*) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct dma_buf *VAR_4;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_4 = VAR_2->private_data;


 if (!VAR_4->ops->mmap)
  return -VAR_0;


 if (VAR_3->vm_pgoff + FUNC_2(VAR_3) >
     VAR_4->size >> VAR_1)
  return -VAR_0;

 return VAR_4->ops->mmap(VAR_4, VAR_3);
}
