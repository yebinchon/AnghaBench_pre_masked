
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
struct amdgpu_crtc {int crtc_id; int max_cursor_width; int max_cursor_height; int base; int * connector; int * encoder; scalar_t__ adjusted_clock; int pll_id; int crtc_offset; } ;
struct TYPE_5__ {int cursor_width; int cursor_height; } ;
struct TYPE_6__ {TYPE_2__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 struct amdgpu_crtc* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_12, int VAR_13)
{
 struct amdgpu_crtc *VAR_14;

 VAR_14 = FUNC_3(sizeof(struct amdgpu_crtc) +
         (VAR_0 * sizeof(struct drm_connector *)), VAR_9);
 if (VAR_14 == ((void*)0))
  return -VAR_8;

 FUNC_1(VAR_12->ddev, &VAR_14->base, &VAR_10);

 FUNC_2(&VAR_14->base, 256);
 VAR_14->crtc_id = VAR_13;
 VAR_12->mode_info.crtcs[VAR_13] = VAR_14;

 VAR_14->max_cursor_width = 128;
 VAR_14->max_cursor_height = 128;
 VAR_12->ddev->mode_config.cursor_width = VAR_14->max_cursor_width;
 VAR_12->ddev->mode_config.cursor_height = VAR_14->max_cursor_height;

 switch (VAR_14->crtc_id) {
 case 0:
 default:
  VAR_14->crtc_offset = VAR_2;
  break;
 case 1:
  VAR_14->crtc_offset = VAR_3;
  break;
 case 2:
  VAR_14->crtc_offset = VAR_4;
  break;
 case 3:
  VAR_14->crtc_offset = VAR_5;
  break;
 case 4:
  VAR_14->crtc_offset = VAR_6;
  break;
 case 5:
  VAR_14->crtc_offset = VAR_7;
  break;
 }

 VAR_14->pll_id = VAR_1;
 VAR_14->adjusted_clock = 0;
 VAR_14->encoder = ((void*)0);
 VAR_14->connector = ((void*)0);
 FUNC_0(&VAR_14->base, &VAR_11);

 return 0;
}
