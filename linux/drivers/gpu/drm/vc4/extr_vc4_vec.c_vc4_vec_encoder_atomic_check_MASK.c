
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_vec_tv_mode {int mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int adjusted_mode; } ;
struct TYPE_2__ {size_t mode; } ;
struct drm_connector_state {scalar_t__ crtc; TYPE_1__ tv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct vc4_vec_tv_mode* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct drm_encoder *VAR_2,
     struct drm_crtc_state *VAR_3,
     struct drm_connector_state *VAR_4)
{
 const struct vc4_vec_tv_mode *VAR_5;

 VAR_5 = &VAR_1[VAR_4->tv.mode];

 if (VAR_4->crtc &&
     !FUNC_0(VAR_5->mode, &VAR_3->adjusted_mode))
  return -VAR_0;

 return 0;
}
