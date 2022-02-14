
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct flush_data {unsigned long addr1; struct vm_area_struct* vma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flush_data*,int) ;

void FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 struct flush_data VAR_3 = {
  .vma = VAR_1,
  .addr1 = VAR_2,
 };
 FUNC_0(VAR_0, &VAR_3, 1);
}
