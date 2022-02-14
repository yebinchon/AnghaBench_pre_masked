
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_encoder {TYPE_1__ base; } ;
struct dpu_rm {int rm_lock; } ;


 int FUNC_0 (struct dpu_rm*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dpu_rm *VAR_0, struct drm_encoder *VAR_1)
{
 FUNC_1(&VAR_0->rm_lock);

 FUNC_0(VAR_0, VAR_1->base.id);

 FUNC_2(&VAR_0->rm_lock);
}
