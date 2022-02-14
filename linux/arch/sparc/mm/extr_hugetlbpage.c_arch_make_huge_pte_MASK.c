
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

pte_t FUNC_5(pte_t VAR_1, struct vm_area_struct *VAR_2,
    struct page *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = FUNC_1(FUNC_0(VAR_2));
 pte_t VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_5);
 return VAR_6;

}
