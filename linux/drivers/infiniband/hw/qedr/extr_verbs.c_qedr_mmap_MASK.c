
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_page_prot; } ;
struct qedr_ucontext {unsigned long dpi; unsigned long dpi_size; } ;
struct qedr_dev {unsigned long db_phys_addr; } ;
struct ib_ucontext {int device; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,void*,void*,void*,void*,unsigned long) ;
 int FUNC_1 (struct qedr_dev*,char*,...) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qedr_dev* FUNC_2 (int ) ;
 struct qedr_ucontext* FUNC_3 (struct ib_ucontext*) ;
 int FUNC_4 (struct vm_area_struct*,int,unsigned long,unsigned long,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qedr_ucontext*,unsigned long,unsigned long) ;

int FUNC_7(struct ib_ucontext *VAR_5, struct vm_area_struct *VAR_6)
{
 struct qedr_ucontext *VAR_7 = FUNC_3(VAR_5);
 struct qedr_dev *VAR_8 = FUNC_2(VAR_5->device);
 unsigned long VAR_9 = VAR_6->vm_pgoff << VAR_1;
 unsigned long VAR_10 = (VAR_6->vm_end - VAR_6->vm_start);
 unsigned long VAR_11;

 VAR_11 = VAR_8->db_phys_addr + (VAR_7->dpi * VAR_7->dpi_size);

 FUNC_0(VAR_8, VAR_3,
   "mmap invoked with vm_start=0x%pK, vm_end=0x%pK,vm_pgoff=0x%pK; dpi_start=0x%pK dpi_size=0x%x\n",
   (void *)VAR_6->vm_start, (void *)VAR_6->vm_end,
   (void *)VAR_6->vm_pgoff, (void *)VAR_11, VAR_7->dpi_size);

 if ((VAR_6->vm_start & (VAR_2 - 1)) || (VAR_10 & (VAR_2 - 1))) {
  FUNC_1(VAR_8,
         "failed mmap, addresses must be page aligned: start=0x%pK, end=0x%pK\n",
         (void *)VAR_6->vm_start, (void *)VAR_6->vm_end);
  return -VAR_0;
 }

 if (!FUNC_6(VAR_7, VAR_9, VAR_10)) {
  FUNC_1(VAR_8, "failed mmap, vm_pgoff=0x%lx is not authorized\n",
         VAR_6->vm_pgoff);
  return -VAR_0;
 }

 if (VAR_9 < VAR_11 ||
     ((VAR_9 + VAR_10) > (VAR_11 + VAR_7->dpi_size))) {
  FUNC_1(VAR_8,
         "failed mmap, pages are outside of dpi; page address=0x%pK, dpi_start=0x%pK, dpi_size=0x%x\n",
         (void *)VAR_9, (void *)VAR_11,
         VAR_7->dpi_size);
  return -VAR_0;
 }

 if (VAR_6->vm_flags & VAR_4) {
  FUNC_1(VAR_8, "failed mmap, cannot map doorbell bar for read\n");
  return -VAR_0;
 }

 VAR_6->vm_page_prot = FUNC_5(VAR_6->vm_page_prot);
 return FUNC_4(VAR_6, VAR_6->vm_start, VAR_6->vm_pgoff, VAR_10,
      VAR_6->vm_page_prot);
}
