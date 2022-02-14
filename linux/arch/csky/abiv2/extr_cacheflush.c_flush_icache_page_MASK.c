
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;

void FUNC_3(struct vm_area_struct *VAR_1, struct page *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (unsigned long) FUNC_1(VAR_2);

 FUNC_0(VAR_3, VAR_3 + VAR_0);

 FUNC_2((void *)VAR_3);
}
