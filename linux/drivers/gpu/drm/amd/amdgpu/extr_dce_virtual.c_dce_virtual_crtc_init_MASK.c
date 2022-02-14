
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_2__ {struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_1__ mode_info; int ddev; } ;
struct amdgpu_crtc {int crtc_id; int base; int vsync_timer_enabled; int * connector; int * encoder; int pll_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int) ;
 struct amdgpu_crtc* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_7, int VAR_8)
{
 struct amdgpu_crtc *VAR_9;

 VAR_9 = FUNC_3(sizeof(struct amdgpu_crtc) +
         (VAR_0 * sizeof(struct drm_connector *)), VAR_4);
 if (VAR_9 == ((void*)0))
  return -VAR_3;

 FUNC_1(VAR_7->ddev, &VAR_9->base, &VAR_5);

 FUNC_2(&VAR_9->base, 256);
 VAR_9->crtc_id = VAR_8;
 VAR_7->mode_info.crtcs[VAR_8] = VAR_9;

 VAR_9->pll_id = VAR_2;
 VAR_9->encoder = ((void*)0);
 VAR_9->connector = ((void*)0);
 VAR_9->vsync_timer_enabled = VAR_1;
 FUNC_0(&VAR_9->base, &VAR_6);

 return 0;
}
