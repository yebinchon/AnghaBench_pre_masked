
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_irq_wait {scalar_t__ count; int node; int wq; } ;
struct omap_drm_private {int wait_lock; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;


 int FUNC_0 (struct omap_irq_wait*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int,unsigned long) ;

int FUNC_6(struct drm_device *VAR_0, struct omap_irq_wait *VAR_1,
  unsigned long VAR_2)
{
 struct omap_drm_private *VAR_3 = VAR_0->dev_private;
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_1->wq, (VAR_1->count <= 0), VAR_2);

 FUNC_3(&VAR_3->wait_lock, VAR_4);
 FUNC_1(&VAR_1->node);
 FUNC_2(VAR_0);
 FUNC_4(&VAR_3->wait_lock, VAR_4);

 FUNC_0(VAR_1);

 return VAR_5 == 0 ? -1 : 0;
}
