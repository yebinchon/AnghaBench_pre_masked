
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {int handle; } ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* is_valid_gfn ) (int ,unsigned long) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static inline bool FUNC_1(
  struct intel_vgpu *VAR_1, unsigned long VAR_2)
{
 if (!VAR_0.mpt->is_valid_gfn)
  return 1;

 return VAR_0.mpt->is_valid_gfn(VAR_1->handle, VAR_2);
}
