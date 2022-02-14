
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int hwsp_ggtt; int hwsp_cacheline; int pin_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct intel_timeline *VAR_0)
{
 FUNC_0(!FUNC_3(&VAR_0->pin_count));
 if (!FUNC_2(&VAR_0->pin_count))
  return;

 FUNC_4(VAR_0->hwsp_cacheline);

 FUNC_1(VAR_0->hwsp_ggtt);
}
