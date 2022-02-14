
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int pfn_t ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct vm_area_struct *VAR_1, pgprot_t *VAR_2, pfn_t VAR_3)
{
 enum page_cache_mode VAR_4;

 if (!FUNC_3())
  return;


 VAR_4 = FUNC_2(FUNC_4(VAR_3));
 *VAR_2 = FUNC_0((FUNC_5(*VAR_2) & (~VAR_0)) |
    FUNC_1(VAR_4));
}
