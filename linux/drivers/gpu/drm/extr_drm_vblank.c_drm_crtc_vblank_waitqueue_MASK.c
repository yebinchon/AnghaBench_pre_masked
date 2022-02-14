
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct drm_crtc {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* vblank; } ;
struct TYPE_3__ {int queue; } ;


 size_t FUNC_0 (struct drm_crtc*) ;

wait_queue_head_t *FUNC_1(struct drm_crtc *VAR_0)
{
 return &VAR_0->dev->vblank[FUNC_0(VAR_0)].queue;
}
