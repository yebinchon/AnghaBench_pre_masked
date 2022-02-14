
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_pportdata {TYPE_1__* vl_arb_cache; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct hfi1_pportdata *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->vl_arb_cache[VAR_1].lock);
}
