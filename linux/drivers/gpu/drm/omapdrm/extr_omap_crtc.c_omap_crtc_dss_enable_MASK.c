
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_2__* dispc_ops; TYPE_1__** channels; } ;
struct omap_crtc {int base; int vm; int channel; } ;
struct drm_crtc {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {int (* mgr_set_timings ) (int ,int ,int *) ;} ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int *) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_3(struct omap_drm_private *VAR_0,
    enum omap_channel VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->channels[VAR_1]->crtc;
 struct omap_crtc *VAR_3 = FUNC_2(VAR_2);

 VAR_0->dispc_ops->mgr_set_timings(VAR_0->dispc, VAR_3->channel,
      &VAR_3->vm);
 FUNC_0(&VAR_3->base, 1);

 return 0;
}
