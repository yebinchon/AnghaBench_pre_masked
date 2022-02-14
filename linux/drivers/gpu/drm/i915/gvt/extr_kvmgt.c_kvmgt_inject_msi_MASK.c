
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct kvmgt_guest_info {struct intel_vgpu* vgpu; } ;
struct TYPE_2__ {int * msi_trigger; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, u32 VAR_3, u16 VAR_4)
{
 struct kvmgt_guest_info *VAR_5;
 struct intel_vgpu *VAR_6;

 if (!FUNC_1(VAR_2))
  return -VAR_1;

 VAR_5 = (struct kvmgt_guest_info *)VAR_2;
 VAR_6 = VAR_5->vgpu;
 if (VAR_6->vdev.msi_trigger == ((void*)0))
  return 0;

 if (FUNC_0(VAR_6->vdev.msi_trigger, 1) == 1)
  return 0;

 return -VAR_0;
}
