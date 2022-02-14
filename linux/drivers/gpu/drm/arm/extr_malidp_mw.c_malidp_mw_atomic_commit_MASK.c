
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct malidp_mw_connector_state {int rgb2yuv_initialized; int * rgb2yuv_coeffs; int format; int n_planes; int * pitches; int * addrs; } ;
struct malidp_hw_device {TYPE_3__* hw; } ;
struct TYPE_4__ {struct drm_connector_state* state; } ;
struct drm_writeback_connector {TYPE_1__ base; } ;
struct malidp_drm {struct malidp_hw_device* dev; struct drm_writeback_connector mw_connector; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_device {int dev; struct malidp_drm* dev_private; } ;
struct drm_connector_state {TYPE_2__* writeback_job; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_6__ {int (* disable_memwrite ) (struct malidp_hw_device*) ;int (* enable_memwrite ) (struct malidp_hw_device*,int *,int *,int ,int ,int ,int ,int *) ;} ;
struct TYPE_5__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct drm_writeback_connector*,struct drm_connector_state*) ;
 int FUNC_2 (struct malidp_hw_device*,int *,int *,int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct malidp_hw_device*) ;
 struct malidp_mw_connector_state* FUNC_4 (struct drm_connector_state*) ;

void FUNC_5(struct drm_device *VAR_0,
        struct drm_atomic_state *VAR_1)
{
 struct malidp_drm *VAR_2 = VAR_0->dev_private;
 struct drm_writeback_connector *VAR_3 = &VAR_2->mw_connector;
 struct drm_connector_state *VAR_4 = VAR_3->base.state;
 struct malidp_hw_device *VAR_5 = VAR_2->dev;
 struct malidp_mw_connector_state *VAR_6;

 if (!VAR_4)
  return;

 VAR_6 = FUNC_4(VAR_4);

 if (VAR_4->writeback_job) {
  struct drm_framebuffer *VAR_7 = VAR_4->writeback_job->fb;

  FUNC_0(VAR_0->dev,
         "Enable memwrite %ux%u:%d %pad fmt: %u\n",
         VAR_7->width, VAR_7->height,
         VAR_6->pitches[0],
         &VAR_6->addrs[0],
         VAR_6->format);

  FUNC_1(VAR_3, VAR_4);
  VAR_5->hw->enable_memwrite(VAR_5, VAR_6->addrs,
        VAR_6->pitches, VAR_6->n_planes,
        VAR_7->width, VAR_7->height, VAR_6->format,
        !VAR_6->rgb2yuv_initialized ?
        VAR_6->rgb2yuv_coeffs : ((void*)0));
  VAR_6->rgb2yuv_initialized = !!VAR_6->rgb2yuv_coeffs;
 } else {
  FUNC_0(VAR_0->dev, "Disable memwrite\n");
  VAR_5->hw->disable_memwrite(VAR_5);
 }
}
