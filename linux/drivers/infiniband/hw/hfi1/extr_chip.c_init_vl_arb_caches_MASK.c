
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_pportdata {TYPE_1__* vl_arb_cache; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hfi1_pportdata *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3 !=
   VAR_2);
 FUNC_0(VAR_3 !=
   VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(&VAR_4->vl_arb_cache[VAR_5].lock);
}
