
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct intel_gt {TYPE_1__ reset; } ;


 int FUNC_0 (struct intel_gt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct intel_gt *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->reset.mutex);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->reset.mutex);

 return VAR_1;
}
