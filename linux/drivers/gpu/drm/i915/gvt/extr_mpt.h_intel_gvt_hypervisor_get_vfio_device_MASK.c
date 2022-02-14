
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* get_vfio_device ) (struct intel_vgpu*) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct intel_vgpu*) ;

__attribute__((used)) static inline int FUNC_1(struct intel_vgpu *VAR_1)
{
 if (!VAR_0.mpt->get_vfio_device)
  return 0;

 return VAR_0.mpt->get_vfio_device(VAR_1);
}
