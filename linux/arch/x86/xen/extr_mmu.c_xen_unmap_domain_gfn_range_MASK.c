
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,int,struct page**) ;

int FUNC_2(struct vm_area_struct *VAR_2,
          int VAR_3, struct page **VAR_4)
{
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 if (!VAR_4)
  return 0;

 return -VAR_0;
}
