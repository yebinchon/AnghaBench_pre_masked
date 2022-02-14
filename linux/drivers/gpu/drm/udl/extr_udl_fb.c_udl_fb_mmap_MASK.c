
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; int vm_page_prot; } ;
struct TYPE_2__ {unsigned long smem_len; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_5, struct vm_area_struct *VAR_6)
{
 unsigned long VAR_7 = VAR_6->vm_start;
 unsigned long VAR_8 = VAR_6->vm_end - VAR_6->vm_start;
 unsigned long VAR_9;
 unsigned long VAR_10, VAR_11;

 if (VAR_6->vm_pgoff > (~0UL >> VAR_3))
  return -VAR_1;

 VAR_9 = VAR_6->vm_pgoff << VAR_3;

 if (VAR_9 > VAR_5->fix.smem_len || VAR_8 > VAR_5->fix.smem_len - VAR_9)
  return -VAR_1;

 VAR_11 = (unsigned long)VAR_5->fix.smem_start + VAR_9;

 FUNC_1("mmap() framebuffer addr:%lu size:%lu\n",
    VAR_11, VAR_8);


 VAR_6->vm_page_prot = FUNC_0(VAR_6->vm_page_prot);

 while (VAR_8 > 0) {
  VAR_10 = FUNC_3((void *)VAR_11);
  if (FUNC_2(VAR_6, VAR_7, VAR_10, VAR_4, VAR_2))
   return -VAR_0;

  VAR_7 += VAR_4;
  VAR_11 += VAR_4;
  if (VAR_8 > VAR_4)
   VAR_8 -= VAR_4;
  else
   VAR_8 = 0;
 }


 return 0;
}
