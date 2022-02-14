
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (size_t) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (struct device*,struct vm_area_struct*,void*,size_t,int*) ;
 unsigned long FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct vm_area_struct*,scalar_t__,unsigned long,scalar_t__,int ) ;
 unsigned long FUNC_4 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct vm_area_struct *VAR_3,
   void *VAR_4, dma_addr_t VAR_5, size_t VAR_6,
   unsigned long VAR_7)
{
 int VAR_8 = -VAR_0;
 unsigned long VAR_9 = FUNC_4(VAR_3);
 unsigned long VAR_10 = FUNC_0(VAR_6) >> VAR_1;
 unsigned long VAR_11 = FUNC_2(VAR_2, VAR_5);
 unsigned long VAR_12 = VAR_3->vm_pgoff;

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6, &VAR_8))
  return VAR_8;

 if (VAR_12 < VAR_10 && VAR_9 <= (VAR_10 - VAR_12)) {
  VAR_8 = FUNC_3(VAR_3, VAR_3->vm_start,
          VAR_11 + VAR_12,
          VAR_3->vm_end - VAR_3->vm_start,
          VAR_3->vm_page_prot);
 }

 return VAR_8;
}
