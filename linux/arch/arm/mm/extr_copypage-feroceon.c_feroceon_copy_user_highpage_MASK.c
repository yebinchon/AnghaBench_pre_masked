
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (void*,void*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int ) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct page *VAR_0, struct page *VAR_1,
 unsigned long VAR_2, struct vm_area_struct *VAR_3)
{
 void *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = FUNC_2(VAR_1);
 FUNC_1(VAR_3, VAR_2, FUNC_4(VAR_1));
 FUNC_0(VAR_4, VAR_5);
 FUNC_3(VAR_5);
 FUNC_3(VAR_4);
}
