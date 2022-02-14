
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rail_alignment {scalar_t__ offset_uv; scalar_t__ step_uv; } ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (int ,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
      struct rail_alignment *VAR_1)
{
 if (FUNC_0(VAR_0->of_node,
     "nvidia,pwm-voltage-step-microvolts",
     &VAR_1->step_uv))
  VAR_1->step_uv = 0;

 if (FUNC_0(VAR_0->of_node,
     "nvidia,pwm-min-microvolts",
     &VAR_1->offset_uv))
  VAR_1->offset_uv = 0;
}
