
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_page_track {scalar_t__ tracked; } ;
struct intel_vgpu {int page_track_tree; } ;


 int FUNC_0 (struct intel_vgpu*,unsigned long) ;
 int FUNC_1 (struct intel_vgpu_page_track*) ;
 struct intel_vgpu_page_track* FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct intel_vgpu *VAR_0,
  unsigned long VAR_1)
{
 struct intel_vgpu_page_track *VAR_2;

 VAR_2 = FUNC_2(&VAR_0->page_track_tree, VAR_1);
 if (VAR_2) {
  if (VAR_2->tracked)
   FUNC_0(VAR_0, VAR_1);
  FUNC_1(VAR_2);
 }
}
