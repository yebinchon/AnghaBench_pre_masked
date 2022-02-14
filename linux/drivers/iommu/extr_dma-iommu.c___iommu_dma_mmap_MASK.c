
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct vm_area_struct*,struct page**,int) ;

__attribute__((used)) static int FUNC_2(struct page **VAR_1, size_t VAR_2,
  struct vm_area_struct *VAR_3)
{
 return FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_2) >> VAR_0);
}
