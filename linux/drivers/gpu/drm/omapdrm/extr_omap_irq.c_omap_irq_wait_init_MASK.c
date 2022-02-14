
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_irq_wait {int count; int node; int irqmask; int wq; } ;
struct omap_drm_private {int wait_lock; int wait_list; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct omap_irq_wait* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

struct omap_irq_wait * FUNC_6(struct drm_device *VAR_1,
  u32 VAR_2, int VAR_3)
{
 struct omap_drm_private *VAR_4 = VAR_1->dev_private;
 struct omap_irq_wait *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 unsigned long VAR_6;

 FUNC_0(&VAR_5->wq);
 VAR_5->irqmask = VAR_2;
 VAR_5->count = VAR_3;

 FUNC_4(&VAR_4->wait_lock, VAR_6);
 FUNC_2(&VAR_5->node, &VAR_4->wait_list);
 FUNC_3(VAR_1);
 FUNC_5(&VAR_4->wait_lock, VAR_6);

 return VAR_5;
}
