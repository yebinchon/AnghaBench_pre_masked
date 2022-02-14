
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lru_list; } ;
struct intel_vgpu_mm {scalar_t__ type; TYPE_3__* vgpu; TYPE_1__ ppgtt_mm; int pincount; } ;
struct TYPE_8__ {int ppgtt_mm_lock; int ppgtt_mm_lru_list_head; } ;
struct TYPE_7__ {TYPE_2__* gvt; } ;
struct TYPE_6__ {TYPE_4__ gtt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_vgpu_mm*) ;

int FUNC_5(struct intel_vgpu_mm *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->pincount);

 if (VAR_1->type == VAR_0) {
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2)
   return VAR_2;

  FUNC_2(&VAR_1->vgpu->gvt->gtt.ppgtt_mm_lock);
  FUNC_1(&VAR_1->ppgtt_mm.lru_list,
          &VAR_1->vgpu->gvt->gtt.ppgtt_mm_lru_list_head);
  FUNC_3(&VAR_1->vgpu->gvt->gtt.ppgtt_mm_lock);
 }

 return 0;
}
