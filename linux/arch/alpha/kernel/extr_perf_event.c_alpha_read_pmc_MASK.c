
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* pmc_count_shift; unsigned long* pmc_count_mask; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_0 (int ,int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0);
 VAR_3 >>= VAR_1->pmc_count_shift[VAR_2];
 VAR_3 &= VAR_1->pmc_count_mask[VAR_2];
 return VAR_3;
}
