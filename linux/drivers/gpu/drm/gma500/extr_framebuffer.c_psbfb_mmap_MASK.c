
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; int vm_flags; void* vm_private_data; int * vm_ops; TYPE_1__* vm_file; } ;
struct psb_framebuffer {scalar_t__ addr_space; } ;
struct psb_fbdev {struct psb_framebuffer pfb; } ;
struct fb_info {struct psb_fbdev* par; } ;
struct TYPE_2__ {scalar_t__ f_mapping; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct fb_info *VAR_7, struct vm_area_struct *VAR_8)
{
 struct psb_fbdev *VAR_9 = VAR_7->par;
 struct psb_framebuffer *VAR_10 = &VAR_9->pfb;

 if (VAR_8->vm_pgoff != 0)
  return -VAR_0;
 if (VAR_8->vm_pgoff > (~0UL >> VAR_1))
  return -VAR_0;

 if (!VAR_10->addr_space)
  VAR_10->addr_space = VAR_8->vm_file->f_mapping;





 VAR_8->vm_ops = &VAR_6;
 VAR_8->vm_private_data = (void *)VAR_10;
 VAR_8->vm_flags |= VAR_4 | VAR_5 | VAR_3 | VAR_2;
 return 0;
}
