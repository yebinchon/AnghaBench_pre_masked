
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plane_state {TYPE_1__* state; } ;
struct TYPE_2__ {int zpos; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct plane_state *VAR_2 = (struct plane_state *)VAR_0;
 struct plane_state *VAR_3 = (struct plane_state *)VAR_1;
 return VAR_2->state->zpos - VAR_3->state->zpos;
}
