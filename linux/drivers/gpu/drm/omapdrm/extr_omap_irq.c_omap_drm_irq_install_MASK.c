
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_1__* dispc_ops; scalar_t__ irq_mask; scalar_t__* planes; int wait_list; int wait_lock; } ;
struct drm_device {int irq_enabled; struct omap_drm_private* dev_private; } ;
struct TYPE_2__ {unsigned int (* get_num_mgrs ) (int ) ;int (* request_irq ) (int ,int ,struct drm_device*) ;int (* runtime_put ) (int ) ;int (* clear_irqstatus ) (int ,int) ;int (* runtime_get ) (int ) ;scalar_t__ (* mgr_get_sync_lost_irq ) (int ,unsigned int) ;} ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,struct drm_device*) ;

int FUNC_10(struct drm_device *VAR_3)
{
 struct omap_drm_private *VAR_4 = VAR_3->dev_private;
 unsigned int VAR_5 = VAR_4->dispc_ops->get_num_mgrs(VAR_4->dispc);
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_3(&VAR_4->wait_lock);
 FUNC_1(&VAR_4->wait_list);

 VAR_4->irq_mask = VAR_0;

 VAR_6 = FUNC_2(FUNC_0(VAR_4->planes),
    FUNC_0(VAR_2));
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  if (VAR_4->planes[VAR_7])
   VAR_4->irq_mask |= VAR_2[VAR_7];
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
  VAR_4->irq_mask |= VAR_4->dispc_ops->mgr_get_sync_lost_irq(VAR_4->dispc, VAR_7);

 VAR_4->dispc_ops->runtime_get(VAR_4->dispc);
 VAR_4->dispc_ops->clear_irqstatus(VAR_4->dispc, 0xffffffff);
 VAR_4->dispc_ops->runtime_put(VAR_4->dispc);

 VAR_8 = VAR_4->dispc_ops->request_irq(VAR_4->dispc, VAR_1, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_3->irq_enabled = 1;

 return 0;
}
