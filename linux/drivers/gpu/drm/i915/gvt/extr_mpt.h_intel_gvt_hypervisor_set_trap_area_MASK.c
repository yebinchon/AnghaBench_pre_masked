
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct intel_vgpu {int handle; } ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* set_trap_area ) (int ,int ,int ,int) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(
  struct intel_vgpu *VAR_1, u64 VAR_2, u64 VAR_3, bool VAR_4)
{

 if (!VAR_0.mpt->set_trap_area)
  return 0;

 return VAR_0.mpt->set_trap_area(VAR_1->handle, VAR_2, VAR_3, VAR_4);
}
