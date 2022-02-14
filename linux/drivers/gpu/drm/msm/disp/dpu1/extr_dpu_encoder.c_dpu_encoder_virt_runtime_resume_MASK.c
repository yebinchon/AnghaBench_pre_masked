
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int enc_lock; TYPE_3__* cur_master; TYPE_4__* cur_slave; int enabled; } ;
struct TYPE_5__ {int (* restore ) (TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct TYPE_6__ {int (* restore ) (TYPE_3__*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;


 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct dpu_encoder_virt* FUNC_5 (struct drm_encoder*) ;

void FUNC_6(struct drm_encoder *VAR_0)
{
 struct dpu_encoder_virt *VAR_1 = FUNC_5(VAR_0);

 FUNC_1(&VAR_1->enc_lock);

 if (!VAR_1->enabled)
  goto out;

 if (VAR_1->cur_slave && VAR_1->cur_slave->ops.restore)
  VAR_1->cur_slave->ops.restore(VAR_1->cur_slave);
 if (VAR_1->cur_master && VAR_1->cur_master->ops.restore)
  VAR_1->cur_master->ops.restore(VAR_1->cur_master);

 FUNC_0(VAR_0);

out:
 FUNC_2(&VAR_1->enc_lock);
}
