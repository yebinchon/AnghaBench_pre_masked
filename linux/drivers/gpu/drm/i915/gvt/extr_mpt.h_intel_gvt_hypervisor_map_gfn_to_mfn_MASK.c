
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {int handle; } ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* map_gfn_to_mfn ) (int ,unsigned long,unsigned long,unsigned int,int) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,unsigned long,unsigned long,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_1(
  struct intel_vgpu *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, unsigned int VAR_4,
  bool VAR_5)
{

 if (!VAR_0.mpt->map_gfn_to_mfn)
  return 0;

 return VAR_0.mpt->map_gfn_to_mfn(VAR_1->handle, VAR_2, VAR_3, VAR_4,
        VAR_5);
}
