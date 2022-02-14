
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int irq; int irqmask; } ;
struct TYPE_4__ {int irq; int irqmask; } ;
struct drm_crtc {int dummy; } ;
struct mdp4_crtc {int id; int ovlp; int dma; int unref_cursor_work; TYPE_3__ cursor; int name; TYPE_2__ err; TYPE_1__ vblank; struct drm_crtc base; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum mdp4_dma { ____Placeholder_mdp4_dma } mdp4_dma ;


 int VAR_0 ;
 struct drm_crtc* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char** VAR_2 ;
 int FUNC_3 (struct drm_crtc*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int FUNC_5 (int *,char*,int ) ;
 struct mdp4_crtc* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int,char*,char*,int) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;

struct drm_crtc *FUNC_9(struct drm_device *VAR_8,
  struct drm_plane *VAR_9, int VAR_10, int VAR_11,
  enum mdp4_dma VAR_12)
{
 struct drm_crtc *VAR_13 = ((void*)0);
 struct mdp4_crtc *VAR_14;

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 VAR_13 = &VAR_14->base;

 VAR_14->id = VAR_10;

 VAR_14->ovlp = VAR_11;
 VAR_14->dma = VAR_12;

 VAR_14->vblank.irqmask = FUNC_2(VAR_14->dma);
 VAR_14->vblank.irq = VAR_6;

 VAR_14->err.irqmask = FUNC_1(VAR_14->dma);
 VAR_14->err.irq = VAR_3;

 FUNC_7(VAR_14->name, sizeof(VAR_14->name), "%s:%d",
   VAR_2[VAR_12], VAR_11);

 FUNC_8(&VAR_14->cursor.lock);

 FUNC_5(&VAR_14->unref_cursor_work,
   "unref cursor", VAR_7);

 FUNC_4(VAR_8, VAR_13, VAR_9, ((void*)0), &VAR_4,
      ((void*)0));
 FUNC_3(VAR_13, &VAR_5);

 return VAR_13;
}
