
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ gfn; scalar_t__ oos_page; int type; } ;
struct TYPE_15__ {int mfn; } ;
struct intel_vgpu_ppgtt_spt {int post_shadow_list; TYPE_7__ guest_page; TYPE_8__* vgpu; TYPE_6__ shadow_page; } ;
struct device {int dummy; } ;
struct TYPE_14__ {int spt_tree; } ;
struct TYPE_17__ {TYPE_5__ gtt; int id; TYPE_4__* gvt; } ;
struct TYPE_13__ {TYPE_3__* dev_priv; } ;
struct TYPE_11__ {TYPE_1__* pdev; } ;
struct TYPE_12__ {TYPE_2__ drm; } ;
struct TYPE_10__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*,scalar_t__) ;
 int FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_3 (TYPE_8__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,struct intel_vgpu_ppgtt_spt*,int ) ;

__attribute__((used)) static void FUNC_7(struct intel_vgpu_ppgtt_spt *VAR_2)
{
 struct device *VAR_3 = &VAR_2->vgpu->gvt->dev_priv->drm.pdev->dev;

 FUNC_6(VAR_2->vgpu->id, VAR_2, VAR_2->guest_page.type);

 FUNC_1(VAR_3, VAR_2->shadow_page.mfn << VAR_0, 4096,
         VAR_1);

 FUNC_5(&VAR_2->vgpu->gtt.spt_tree, VAR_2->shadow_page.mfn);

 if (VAR_2->guest_page.gfn) {
  if (VAR_2->guest_page.oos_page)
   FUNC_0(VAR_2->vgpu, VAR_2->guest_page.oos_page);

  FUNC_3(VAR_2->vgpu, VAR_2->guest_page.gfn);
 }

 FUNC_4(&VAR_2->post_shadow_list);
 FUNC_2(VAR_2);
}
