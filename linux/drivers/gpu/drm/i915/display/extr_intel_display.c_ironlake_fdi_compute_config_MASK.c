
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int crtc_clock; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int pipe_bpp; int fdi_lanes; int bw_constrained; int fdi_m_n; TYPE_2__ base; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct intel_crtc_state*) ;
 int FUNC_2 (int,int,int,int,int *,int,int) ;
 int FUNC_3 (struct drm_device*,int ,struct intel_crtc_state*) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (struct drm_device*) ;

__attribute__((used)) static int FUNC_6(struct intel_crtc *VAR_3,
           struct intel_crtc_state *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.dev;
 const struct drm_display_mode *VAR_6 = &VAR_4->base.adjusted_mode;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 bool VAR_11 = 0;

retry:







 VAR_8 = FUNC_1(FUNC_5(VAR_5), VAR_4);

 VAR_9 = VAR_6->crtc_clock;

 VAR_7 = FUNC_4(VAR_9, VAR_8,
        VAR_4->pipe_bpp);

 VAR_4->fdi_lanes = VAR_7;

 FUNC_2(VAR_4->pipe_bpp, VAR_7, VAR_9,
          VAR_8, &VAR_4->fdi_m_n, 0, 0);

 VAR_10 = FUNC_3(VAR_5, VAR_3->pipe, VAR_4);
 if (VAR_10 == -VAR_0)
  return VAR_10;

 if (VAR_10 == -VAR_1 && VAR_4->pipe_bpp > 6*3) {
  VAR_4->pipe_bpp -= 2*3;
  FUNC_0("fdi link bw constraint, reducing pipe bpp to %i\n",
         VAR_4->pipe_bpp);
  VAR_11 = 1;
  VAR_4->bw_constrained = 1;

  goto retry;
 }

 if (VAR_11)
  return VAR_2;

 return VAR_10;
}
