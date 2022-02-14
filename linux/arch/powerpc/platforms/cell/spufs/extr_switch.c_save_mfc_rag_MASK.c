
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resource_allocation_enable_RW; int resource_allocation_groupID_RW; } ;
struct spu_state {TYPE_1__ priv1; } ;
struct spu {int dummy; } ;


 int FUNC_0 (struct spu*) ;
 int FUNC_1 (struct spu*) ;

__attribute__((used)) static inline void FUNC_2(struct spu_state *VAR_0, struct spu *VAR_1)
{




 VAR_0->priv1.resource_allocation_groupID_RW =
  FUNC_1(VAR_1);
 VAR_0->priv1.resource_allocation_enable_RW =
  FUNC_0(VAR_1);
}
