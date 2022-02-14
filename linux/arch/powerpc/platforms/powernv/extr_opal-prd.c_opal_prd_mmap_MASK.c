
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_start; size_t vm_end; size_t vm_pgoff; int vm_page_prot; int vm_flags; } ;
struct file {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct file*,size_t,size_t,int ) ;
 int FUNC_2 (char*,size_t,size_t,size_t,int ) ;
 int FUNC_3 (struct vm_area_struct*,size_t,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 size_t VAR_4, VAR_5;
 pgprot_t VAR_6;
 int VAR_7;

 FUNC_2("opal_prd_mmap(0x%016lx, 0x%016lx, 0x%lx, 0x%lx)\n",
   VAR_3->vm_start, VAR_3->vm_end, VAR_3->vm_pgoff,
   VAR_3->vm_flags);

 VAR_4 = VAR_3->vm_pgoff << VAR_1;
 VAR_5 = VAR_3->vm_end - VAR_3->vm_start;


 if (!FUNC_0(VAR_4, VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_3->vm_pgoff,
      VAR_5, VAR_3->vm_page_prot);

 VAR_7 = FUNC_3(VAR_3, VAR_3->vm_start, VAR_3->vm_pgoff, VAR_5,
    VAR_6);

 return VAR_7;
}
