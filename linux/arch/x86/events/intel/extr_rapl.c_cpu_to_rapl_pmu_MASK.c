
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_pmu {int dummy; } ;
struct TYPE_2__ {unsigned int maxdie; struct rapl_pmu** pmus; } ;


 TYPE_1__* VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline struct rapl_pmu *FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1);





 return VAR_2 < VAR_0->maxdie ? VAR_0->pmus[VAR_2] : ((void*)0);
}
