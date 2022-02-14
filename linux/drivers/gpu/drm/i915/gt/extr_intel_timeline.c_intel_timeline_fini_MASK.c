
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_timeline {TYPE_1__* hwsp_ggtt; scalar_t__ hwsp_cacheline; int requests; int pin_count; } ;
struct TYPE_2__ {int obj; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct intel_timeline *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->pin_count));
 FUNC_0(!FUNC_5(&VAR_0->requests));

 if (VAR_0->hwsp_cacheline)
  FUNC_2(VAR_0->hwsp_cacheline);
 else
  FUNC_3(VAR_0->hwsp_ggtt->obj);

 FUNC_4(VAR_0->hwsp_ggtt);
}
