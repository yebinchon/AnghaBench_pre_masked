
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imc_pmu {TYPE_1__** attr_groups; } ;
struct TYPE_2__ {struct TYPE_2__* attrs; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct imc_pmu *VAR_1)
{
 if (VAR_1->attr_groups[VAR_0])
  FUNC_0(VAR_1->attr_groups[VAR_0]->attrs);
 FUNC_0(VAR_1->attr_groups[VAR_0]);
}
