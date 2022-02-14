
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vcpu_vmx {int nmsrs; TYPE_1__* guest_msrs; } ;
struct TYPE_2__ {size_t index; } ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct vcpu_vmx *VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nmsrs; ++VAR_3)
  if (VAR_0[VAR_1->guest_msrs[VAR_3].index] == VAR_2)
   return VAR_3;
 return -1;
}
