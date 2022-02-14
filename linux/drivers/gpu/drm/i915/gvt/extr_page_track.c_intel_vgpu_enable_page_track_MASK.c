
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_page_track {int tracked; } ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,unsigned long) ;
 struct intel_vgpu_page_track* FUNC_1 (struct intel_vgpu*,unsigned long) ;

int FUNC_2(struct intel_vgpu *VAR_1, unsigned long VAR_2)
{
 struct intel_vgpu_page_track *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 if (VAR_3->tracked)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_3->tracked = 1;
 return 0;
}
