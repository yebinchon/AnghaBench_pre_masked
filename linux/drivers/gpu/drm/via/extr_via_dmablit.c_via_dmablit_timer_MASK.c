
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_5__ {int blit_queues; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_6__ {int poll_timer; struct drm_device* dev; } ;
typedef TYPE_2__ drm_via_blitq_t ;


 int FUNC_0 (char*,int,unsigned long) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct timer_list *VAR_3)
{
 drm_via_blitq_t *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct drm_device *VAR_5 = VAR_4->dev;
 int VAR_6 = (int)
  (VAR_4 - ((drm_via_private_t *)VAR_5->dev_private)->blit_queues);

 FUNC_0("Polling timer called for engine %d, jiffies %lu\n", VAR_6,
    (unsigned long) VAR_1);

 FUNC_4(VAR_5, VAR_6, 0);

 if (!FUNC_3(&VAR_4->poll_timer)) {
  FUNC_2(&VAR_4->poll_timer, VAR_1 + 1);






        FUNC_4(VAR_5, VAR_6, 0);

 }
}
