
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ingenic_drm {TYPE_5__* dma_hwdesc; } ;
struct drm_plane_state {TYPE_6__* fb; TYPE_3__* crtc; } ;
struct drm_plane {size_t index; struct drm_plane_state* state; } ;
struct TYPE_12__ {TYPE_4__* format; } ;
struct TYPE_11__ {unsigned int cmd; int addr; } ;
struct TYPE_10__ {unsigned int* cpp; } ;
struct TYPE_9__ {TYPE_2__* state; } ;
struct TYPE_7__ {unsigned int hdisplay; unsigned int vdisplay; } ;
struct TYPE_8__ {TYPE_1__ adjusted_mode; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_6__*,struct drm_plane_state*,int ) ;
 struct ingenic_drm* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_1,
         struct drm_plane_state *VAR_2)
{
 struct ingenic_drm *VAR_3 = FUNC_1(VAR_1);
 struct drm_plane_state *VAR_4 = VAR_1->state;
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_4->crtc->state->adjusted_mode.hdisplay;
 VAR_6 = VAR_4->crtc->state->adjusted_mode.vdisplay;
 VAR_7 = VAR_4->fb->format->cpp[VAR_1->index];

 VAR_3->dma_hwdesc->addr = FUNC_0(VAR_4->fb, VAR_4, 0);
 VAR_3->dma_hwdesc->cmd = VAR_5 * VAR_6 * VAR_7 / 4;
 VAR_3->dma_hwdesc->cmd |= VAR_0;
}
