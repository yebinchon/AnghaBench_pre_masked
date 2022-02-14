
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_page_track {int dummy; } ;
struct intel_vgpu {int page_track_tree; } ;


 struct intel_vgpu_page_track* FUNC_0 (int *,unsigned long) ;

struct intel_vgpu_page_track *FUNC_1(
  struct intel_vgpu *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(&VAR_0->page_track_tree, VAR_1);
}
