
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_mm {int pincount; int ref; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct intel_vgpu_mm* FUNC_2 (int,int ) ;

__attribute__((used)) static struct intel_vgpu_mm *FUNC_3(struct intel_vgpu *VAR_1)
{
 struct intel_vgpu_mm *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->vgpu = VAR_1;
 FUNC_1(&VAR_2->ref);
 FUNC_0(&VAR_2->pincount, 0);

 return VAR_2;
}
