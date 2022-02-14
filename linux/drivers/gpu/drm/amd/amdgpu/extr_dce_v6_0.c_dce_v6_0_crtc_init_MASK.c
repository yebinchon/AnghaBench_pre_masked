
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_4__ {struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_3__* ddev; TYPE_1__ mode_info; } ;
struct amdgpu_crtc {int crtc_id; int base; int * connector; int * encoder; scalar_t__ adjusted_clock; int pll_id; int crtc_offset; int max_cursor_height; int max_cursor_width; } ;
struct TYPE_5__ {int cursor_height; int cursor_width; } ;
struct TYPE_6__ {TYPE_2__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 struct amdgpu_crtc* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_9, int VAR_10)
{
 struct amdgpu_crtc *VAR_11;

 VAR_11 = FUNC_3(sizeof(struct amdgpu_crtc) +
         (VAR_0 * sizeof(struct drm_connector *)), VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 FUNC_1(VAR_9->ddev, &VAR_11->base, &VAR_7);

 FUNC_2(&VAR_11->base, 256);
 VAR_11->crtc_id = VAR_10;
 VAR_9->mode_info.crtcs[VAR_10] = VAR_11;

 VAR_11->max_cursor_width = VAR_3;
 VAR_11->max_cursor_height = VAR_2;
 VAR_9->ddev->mode_config.cursor_width = VAR_11->max_cursor_width;
 VAR_9->ddev->mode_config.cursor_height = VAR_11->max_cursor_height;

 VAR_11->crtc_offset = VAR_6[VAR_11->crtc_id];

 VAR_11->pll_id = VAR_1;
 VAR_11->adjusted_clock = 0;
 VAR_11->encoder = ((void*)0);
 VAR_11->connector = ((void*)0);
 FUNC_0(&VAR_11->base, &VAR_8);

 return 0;
}
