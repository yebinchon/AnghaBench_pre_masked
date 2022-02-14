
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * workload_q_head; } ;
struct intel_vgpu {int active; TYPE_1__ submission; int vgpu_lock; struct intel_gvt* gvt; int id; } ;
struct intel_gvt {int dummy; } ;
typedef enum intel_engine_id { ____Placeholder_intel_engine_id } intel_engine_id ;


 int VAR_0 ;
 struct intel_vgpu* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_vgpu*) ;
 struct intel_vgpu* FUNC_5 (int) ;

struct intel_vgpu *FUNC_6(struct intel_gvt *VAR_3)
{
 struct intel_vgpu *VAR_4;
 enum intel_engine_id VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(sizeof(*VAR_4));
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->id = VAR_2;
 VAR_4->gvt = VAR_3;
 FUNC_3(&VAR_4->vgpu_lock);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_1(&VAR_4->submission.workload_q_head[VAR_5]);

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto out_free_vgpu;

 VAR_4->active = 0;

 return VAR_4;

out_free_vgpu:
 FUNC_4(VAR_4);
 return FUNC_0(VAR_6);
}
