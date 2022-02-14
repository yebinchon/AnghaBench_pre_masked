
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src_w; int src_h; } ;
struct intel_fbc_state_cache {TYPE_1__ plane; } ;



__attribute__((used)) static void FUNC_0(struct intel_fbc_state_cache *VAR_0,
         int *VAR_1, int *VAR_2)
{
 if (VAR_1)
  *VAR_1 = VAR_0->plane.src_w;
 if (VAR_2)
  *VAR_2 = VAR_0->plane.src_h;
}
