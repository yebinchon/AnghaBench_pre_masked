
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*) ;

void FUNC_3(struct page *VAR_0, struct page *VAR_1,
 unsigned long VAR_2, struct vm_area_struct *VAR_3)
{
 void *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = FUNC_0(VAR_1);
 FUNC_2(VAR_4, VAR_5);
 FUNC_1(VAR_5);
 FUNC_1(VAR_4);
}
