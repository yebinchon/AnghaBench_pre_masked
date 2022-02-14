
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu {int * page_table; int tbl; } ;
struct device {int dummy; } ;
typedef int iopte_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct device*,int *,unsigned long,int *,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline iopte_t *FUNC_2(struct device *VAR_1,
        struct iommu *VAR_2,
        unsigned long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_2->tbl, VAR_3, ((void*)0),
          (unsigned long)(-1), 0);
 if (FUNC_1(VAR_4 == VAR_0))
  return ((void*)0);

 return VAR_2->page_table + VAR_4;
}
