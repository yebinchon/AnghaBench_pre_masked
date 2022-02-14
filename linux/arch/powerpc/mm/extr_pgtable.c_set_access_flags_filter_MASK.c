
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 () ;
 struct page* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static pte_t FUNC_10(pte_t VAR_3, struct vm_area_struct *VAR_4,
         int VAR_5)
{
 struct page *VAR_6;

 if (FUNC_4(VAR_0))
  return VAR_3;






 if (VAR_5 || FUNC_5(VAR_3) || !FUNC_2())
  return VAR_3;
 VAR_6 = FUNC_3(VAR_3);
 if (FUNC_9(!VAR_6))
  goto bail;


 if (FUNC_8(VAR_1, &VAR_6->flags))
  goto bail;


 FUNC_1(VAR_6);
 FUNC_7(VAR_1, &VAR_6->flags);

 bail:
 return FUNC_6(VAR_3);
}
