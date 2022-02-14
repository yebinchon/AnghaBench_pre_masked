
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hdlcd_drm_private {int dummy; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* dev; TYPE_2__* state; } ;
struct drm_framebuffer {scalar_t__* pitches; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dst; struct drm_framebuffer* fb; } ;
struct TYPE_3__ {struct hdlcd_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_framebuffer*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct hdlcd_drm_private*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_4,
          struct drm_plane_state *VAR_5)
{
 struct drm_framebuffer *VAR_6 = VAR_4->state->fb;
 struct hdlcd_drm_private *VAR_7;
 u32 VAR_8;
 dma_addr_t VAR_9;

 if (!VAR_6)
  return;

 VAR_8 = FUNC_1(&VAR_4->state->dst);
 VAR_9 = FUNC_0(VAR_6, VAR_4->state, 0);

 VAR_7 = VAR_4->dev->dev_private;
 FUNC_2(VAR_7, VAR_2, VAR_6->pitches[0]);
 FUNC_2(VAR_7, VAR_3, VAR_6->pitches[0]);
 FUNC_2(VAR_7, VAR_1, VAR_8 - 1);
 FUNC_2(VAR_7, VAR_0, VAR_9);
}
