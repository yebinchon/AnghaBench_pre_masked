
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_ops; int * vm_private_data; int vm_flags; } ;
struct vb2_vmalloc_buf {int handler; int vaddr; } ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct vm_area_struct*,int ,int ) ;
 int FUNC_2 (struct vm_area_struct*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(void *VAR_3, struct vm_area_struct *VAR_4)
{
 struct vb2_vmalloc_buf *VAR_5 = VAR_3;
 int VAR_6;

 if (!VAR_5) {
  FUNC_0("No memory to map\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5->vaddr, 0);
 if (VAR_6) {
  FUNC_0("Remapping vmalloc memory, error: %d\n", VAR_6);
  return VAR_6;
 }




 VAR_4->vm_flags |= VAR_1;




 VAR_4->vm_private_data = &VAR_5->handler;
 VAR_4->vm_ops = &VAR_2;

 VAR_4->vm_ops->open(VAR_4);

 return 0;
}
