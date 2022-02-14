
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_fan {int min; } ;
struct wf_control {struct wf_fcu_fan* priv; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct wf_control *VAR_0)
{
 struct wf_fcu_fan *VAR_1 = VAR_0->priv;

 return VAR_1->min;
}
