
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_flags; } ;
struct page_req_dsc {scalar_t__ wr_req; scalar_t__ rd_req; scalar_t__ exe_req; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct vm_area_struct *VAR_3, struct page_req_dsc *VAR_4)
{
 unsigned long VAR_5 = 0;

 if (VAR_4->exe_req)
  VAR_5 |= VAR_0;

 if (VAR_4->rd_req)
  VAR_5 |= VAR_1;

 if (VAR_4->wr_req)
  VAR_5 |= VAR_2;

 return (VAR_5 & ~VAR_3->vm_flags) != 0;
}
