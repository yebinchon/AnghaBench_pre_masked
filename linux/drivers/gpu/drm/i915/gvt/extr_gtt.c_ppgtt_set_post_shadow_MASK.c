
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {TYPE_2__* vgpu; int post_shadow_list; int post_shadow_bitmap; } ;
struct TYPE_3__ {int post_shadow_list_head; } ;
struct TYPE_4__ {TYPE_1__ gtt; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_vgpu_ppgtt_spt *VAR_0,
  unsigned long VAR_1)
{
 FUNC_2(VAR_1, VAR_0->post_shadow_bitmap);
 if (!FUNC_1(&VAR_0->post_shadow_list))
  return;

 FUNC_0(&VAR_0->post_shadow_list,
   &VAR_0->vgpu->gtt.post_shadow_list_head);
}
