
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct mm_struct* pt_mm; } ;
struct mm_struct {int dummy; } ;



struct mm_struct *FUNC_0(struct page *VAR_0)
{
 return VAR_0->pt_mm;
}
