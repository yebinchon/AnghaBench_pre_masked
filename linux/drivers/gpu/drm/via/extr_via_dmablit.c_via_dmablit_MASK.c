
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_via_sg_info_t ;
struct TYPE_10__ {TYPE_4__* blit_queues; } ;
typedef TYPE_2__ drm_via_private_t ;
struct TYPE_9__ {int engine; scalar_t__ sync_handle; } ;
struct TYPE_11__ {TYPE_1__ sync; scalar_t__ to_fb; } ;
typedef TYPE_3__ drm_via_dmablit_t ;
struct TYPE_12__ {scalar_t__ head; int blit_lock; scalar_t__ cur_blit_handle; int num_outstanding; int ** blits; } ;
typedef TYPE_4__ drm_via_blitq_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct drm_device*,int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (struct drm_device*,int,int ) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_9(struct drm_device *VAR_4, drm_via_dmablit_t *VAR_5)
{
 drm_via_private_t *VAR_6 = (drm_via_private_t *)VAR_4->dev_private;
 drm_via_sg_info_t *VAR_7;
 drm_via_blitq_t *VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 if (VAR_6 == ((void*)0)) {
  FUNC_0("Called without initialization.\n");
  return -VAR_0;
 }

 VAR_10 = (VAR_5->to_fb) ? 0 : 1;
 VAR_8 = VAR_6->blit_queues + VAR_10;
 if (0 != (VAR_9 = FUNC_6(VAR_8, VAR_10)))
  return VAR_9;
 if (((void*)0) == (VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2))) {
  FUNC_8(VAR_8);
  return -VAR_1;
 }
 if (0 != (VAR_9 = FUNC_5(VAR_4, VAR_7, VAR_5))) {
  FUNC_8(VAR_8);
  FUNC_1(VAR_7);
  return VAR_9;
 }
 FUNC_3(&VAR_8->blit_lock, VAR_11);

 VAR_8->blits[VAR_8->head++] = VAR_7;
 if (VAR_8->head >= VAR_3)
  VAR_8->head = 0;
 VAR_8->num_outstanding++;
 VAR_5->sync.sync_handle = ++VAR_8->cur_blit_handle;

 FUNC_4(&VAR_8->blit_lock, VAR_11);
 VAR_5->sync.engine = VAR_10;

 FUNC_7(VAR_4, VAR_10, 0);

 return 0;
}
