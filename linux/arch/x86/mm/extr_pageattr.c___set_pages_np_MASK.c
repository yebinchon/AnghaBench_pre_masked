
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cpa_data {unsigned long* vaddr; int numpages; int flags; int mask_clr; int mask_set; int * pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpa_data*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = (unsigned long) FUNC_2(VAR_2);
 struct cpa_data VAR_5 = { .vaddr = &VAR_4,
    .pgd = ((void*)0),
    .numpages = VAR_3,
    .mask_set = FUNC_1(0),
    .mask_clr = FUNC_1(VAR_0 | VAR_1),
    .flags = 0};







 return FUNC_0(&VAR_5, 0);
}
