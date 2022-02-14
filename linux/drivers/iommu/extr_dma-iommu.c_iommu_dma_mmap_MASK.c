
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (size_t) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct page**,size_t,struct vm_area_struct*) ;
 struct page** FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct device*,struct vm_area_struct*,void*,size_t,int*) ;
 int FUNC_5 (struct device*,int ,unsigned long) ;
 scalar_t__ FUNC_6 (void*) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct vm_area_struct*,scalar_t__,unsigned long,scalar_t__,int ) ;
 int FUNC_9 (void*) ;
 unsigned long FUNC_10 (struct vm_area_struct*) ;
 unsigned long FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_3, struct vm_area_struct *VAR_4,
  void *VAR_5, dma_addr_t VAR_6, size_t VAR_7,
  unsigned long VAR_8)
{
 unsigned long VAR_9 = FUNC_1(VAR_7) >> VAR_2;
 unsigned long VAR_10, VAR_11 = VAR_4->vm_pgoff;
 int VAR_12;

 VAR_4->vm_page_prot = FUNC_5(VAR_3, VAR_4->vm_page_prot, VAR_8);

 if (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7, &VAR_12))
  return VAR_12;

 if (VAR_11 >= VAR_9 || FUNC_10(VAR_4) > VAR_9 - VAR_11)
  return -VAR_1;

 if (FUNC_0(VAR_0) && FUNC_6(VAR_5)) {
  struct page **VAR_13 = FUNC_3(VAR_5);

  if (VAR_13)
   return FUNC_2(VAR_13, VAR_7, VAR_4);
  VAR_10 = FUNC_11(VAR_5);
 } else {
  VAR_10 = FUNC_7(FUNC_9(VAR_5));
 }

 return FUNC_8(VAR_4, VAR_4->vm_start, VAR_10 + VAR_11,
          VAR_4->vm_end - VAR_4->vm_start,
          VAR_4->vm_page_prot);
}
