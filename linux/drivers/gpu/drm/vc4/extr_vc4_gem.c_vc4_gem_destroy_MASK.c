
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {scalar_t__ emit_seqno; scalar_t__ finished_seqno; scalar_t__ hang_state; TYPE_2__* bin_bo; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,scalar_t__) ;

void
FUNC_4(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_2(VAR_0);




 FUNC_0(VAR_1->emit_seqno != VAR_1->finished_seqno);




 if (VAR_1->bin_bo) {
  FUNC_1(&VAR_1->bin_bo->base.base);
  VAR_1->bin_bo = ((void*)0);
 }

 if (VAR_1->hang_state)
  FUNC_3(VAR_0, VAR_1->hang_state);
}
