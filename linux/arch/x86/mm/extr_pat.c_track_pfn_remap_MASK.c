
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; } ;
typedef unsigned long resource_size_t ;
typedef int pgprot_t ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,unsigned long,int *,int ) ;

int FUNC_6(struct vm_area_struct *VAR_5, pgprot_t *VAR_6,
      unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9)
{
 resource_size_t VAR_10 = (resource_size_t)VAR_7 << VAR_1;
 enum page_cache_mode VAR_11;


 if (!VAR_5 || (VAR_8 == VAR_5->vm_start
    && VAR_9 == (VAR_5->vm_end - VAR_5->vm_start))) {
  int VAR_12;

  VAR_12 = FUNC_5(VAR_10, VAR_9, VAR_6, 0);
  if (VAR_12 == 0 && VAR_5)
   VAR_5->vm_flags |= VAR_3;
  return VAR_12;
 }

 if (!FUNC_3())
  return 0;





 VAR_11 = FUNC_2(VAR_10);


 while (VAR_9 > VAR_2) {
  VAR_9 -= VAR_2;
  VAR_10 += VAR_2;
  if (VAR_11 != FUNC_2(VAR_10))
   return -VAR_0;
 }

 *VAR_6 = FUNC_0((FUNC_4(*VAR_6) & (~VAR_4)) |
    FUNC_1(VAR_11));

 return 0;
}
