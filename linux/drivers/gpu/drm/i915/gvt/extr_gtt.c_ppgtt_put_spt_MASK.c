
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {int refcount; TYPE_1__* vgpu; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,struct intel_vgpu_ppgtt_spt*,int,int) ;

__attribute__((used)) static inline int FUNC_3(struct intel_vgpu_ppgtt_spt *VAR_0)
{
 int VAR_1 = FUNC_1(&VAR_0->refcount);

 FUNC_2(VAR_0->vgpu->id, "dec", VAR_0, VAR_1, (VAR_1 - 1));
 return FUNC_0(&VAR_0->refcount);
}
