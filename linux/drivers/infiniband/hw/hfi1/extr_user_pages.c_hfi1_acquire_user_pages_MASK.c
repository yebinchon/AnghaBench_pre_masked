
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int pinned_vm; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (unsigned long,size_t,unsigned int,struct page**) ;

int FUNC_2(struct mm_struct *VAR_2, unsigned long VAR_3, size_t VAR_4,
       bool VAR_5, struct page **VAR_6)
{
 int VAR_7;
 unsigned int VAR_8 = VAR_0 | (VAR_5 ? VAR_1 : 0);

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_8, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_7, &VAR_2->pinned_vm);

 return VAR_7;
}
