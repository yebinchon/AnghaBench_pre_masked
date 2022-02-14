
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int pinned_vm; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (struct page**,size_t,int) ;

void FUNC_2(struct mm_struct *VAR_0, struct page **VAR_1,
        size_t VAR_2, bool VAR_3)
{
 FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_0) {
  FUNC_0(VAR_2, &VAR_0->pinned_vm);
 }
}
