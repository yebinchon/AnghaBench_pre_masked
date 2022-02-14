
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int virtual_ggtt; } ;
struct intel_vgpu_mm {TYPE_1__ ggtt_mm; int type; } ;
struct intel_vgpu {TYPE_3__* gvt; } ;
struct TYPE_5__ {int gtt_entry_size; } ;
struct TYPE_6__ {TYPE_2__ device_info; } ;


 int VAR_0 ;
 struct intel_vgpu_mm* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (TYPE_3__*) ;
 struct intel_vgpu_mm* FUNC_3 (struct intel_vgpu*) ;
 int FUNC_4 (struct intel_vgpu_mm*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct intel_vgpu_mm *FUNC_6(struct intel_vgpu *VAR_3)
{
 struct intel_vgpu_mm *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->type = VAR_2;

 VAR_5 = FUNC_2(VAR_3->gvt) >> VAR_1;
 VAR_4->ggtt_mm.virtual_ggtt =
  FUNC_5(FUNC_1(VAR_5,
       VAR_3->gvt->device_info.gtt_entry_size));
 if (!VAR_4->ggtt_mm.virtual_ggtt) {
  FUNC_4(VAR_4);
  return FUNC_0(-VAR_0);
 }

 return VAR_4;
}
