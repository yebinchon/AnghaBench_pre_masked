
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_device {int remote_inv_sup; int * reg_ops; struct ib_device* ib_device; } ;
struct TYPE_3__ {int device_cap_flags; } ;
struct TYPE_4__ {scalar_t__ unmap_fmr; scalar_t__ map_phys_fmr; scalar_t__ dealloc_fmr; scalar_t__ alloc_fmr; } ;
struct ib_device {TYPE_1__ attrs; TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct iser_device *VAR_4)
{
 struct ib_device *VAR_5 = VAR_4->ib_device;


 if (VAR_5->ops.alloc_fmr && VAR_5->ops.dealloc_fmr &&
     VAR_5->ops.map_phys_fmr && VAR_5->ops.unmap_fmr) {
  FUNC_1("FMR supported, using FMR for registration\n");
  VAR_4->reg_ops = &VAR_2;
 } else if (VAR_5->attrs.device_cap_flags & VAR_0) {
  FUNC_1("FastReg supported, using FastReg for registration\n");
  VAR_4->reg_ops = &VAR_1;
  VAR_4->remote_inv_sup = VAR_3;
 } else {
  FUNC_0("IB device does not support FMRs nor FastRegs, can't register memory\n");
  return -1;
 }

 return 0;
}
