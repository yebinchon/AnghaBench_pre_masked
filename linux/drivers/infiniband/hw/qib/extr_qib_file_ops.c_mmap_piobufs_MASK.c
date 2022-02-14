
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; int vm_flags; int vm_page_prot; } ;
struct qib_devdata {unsigned int palign; unsigned int physaddr; int wc_cookie; int pcidev; } ;
struct qib_ctxtdata {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vm_area_struct*,unsigned int,unsigned long,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_5,
   struct qib_devdata *VAR_6,
   struct qib_ctxtdata *VAR_7,
   unsigned VAR_8, unsigned VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;







 if ((VAR_5->vm_end - VAR_5->vm_start) > (VAR_9 * VAR_6->palign)) {
  FUNC_3(VAR_6->pcidev,
   "FAIL mmap piobufs: reqlen %lx > PAGE\n",
    VAR_5->vm_end - VAR_5->vm_start);
  VAR_11 = -VAR_0;
  goto bail;
 }

 VAR_10 = VAR_6->physaddr + VAR_8;
 VAR_5->vm_flags &= ~VAR_4;
 VAR_5->vm_flags |= VAR_2 | VAR_3;


 if (!VAR_6->wc_cookie)
  VAR_5->vm_page_prot = FUNC_2(VAR_5->vm_page_prot);

 VAR_11 = FUNC_0(VAR_5, VAR_5->vm_start, VAR_10 >> VAR_1,
     VAR_5->vm_end - VAR_5->vm_start,
     VAR_5->vm_page_prot);
bail:
 return VAR_11;
}
