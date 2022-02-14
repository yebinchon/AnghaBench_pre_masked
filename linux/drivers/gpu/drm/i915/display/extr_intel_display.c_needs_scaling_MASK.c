
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst; int src; } ;
struct intel_plane_state {TYPE_1__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(const struct intel_plane_state *VAR_0)
{
 int VAR_1 = FUNC_1(&VAR_0->base.src) >> 16;
 int VAR_2 = FUNC_0(&VAR_0->base.src) >> 16;
 int VAR_3 = FUNC_1(&VAR_0->base.dst);
 int VAR_4 = FUNC_0(&VAR_0->base.dst);

 return (VAR_1 != VAR_3 || VAR_2 != VAR_4);
}
