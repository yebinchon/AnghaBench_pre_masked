
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_control {int dummy; } ;
struct smu_fan_control {int value; } ;
typedef int s32 ;


 struct smu_fan_control* FUNC_0 (struct wf_control*) ;

__attribute__((used)) static int FUNC_1(struct wf_control *VAR_0, s32 *VAR_1)
{
 struct smu_fan_control *VAR_2 = FUNC_0(VAR_0);
 *VAR_1 = VAR_2->value;
 return 0;
}
