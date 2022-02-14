
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_creation_params {int dummy; } ;
struct intel_vgpu {int dummy; } ;


 int FUNC_0 (struct intel_vgpu*,struct intel_vgpu_creation_params*) ;
 int FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (struct intel_vgpu*) ;
 int FUNC_4 (struct intel_vgpu*) ;

int FUNC_5(struct intel_vgpu *VAR_0,
  struct intel_vgpu_creation_params *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto out_free_resource;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto out_free_vgpu_gm;

 return 0;

out_free_vgpu_gm:
 FUNC_4(VAR_0);
out_free_resource:
 FUNC_3(VAR_0);
 return VAR_2;
}
