
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; TYPE_1__ mode_info; } ;
struct TYPE_6__ {scalar_t__ num_connectors; struct drm_connector** connectors; int * crtc; } ;
struct radeon_crtc {int crtc_id; int* lut_r; int* lut_g; int* lut_b; TYPE_3__ mode_set; int base; int max_cursor_height; int max_cursor_width; int flip_queue; } ;
struct TYPE_5__ {int cursor_height; int cursor_width; } ;
struct drm_device {TYPE_2__ mode_config; struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int *,int *) ;
 int FUNC_3 (int *,int) ;
 struct radeon_crtc* FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_device*,struct radeon_crtc*) ;
 int VAR_8 ;
 int FUNC_6 (struct drm_device*,struct radeon_crtc*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_10, int VAR_11)
{
 struct radeon_device *VAR_12 = VAR_10->dev_private;
 struct radeon_crtc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(sizeof(struct radeon_crtc) + (VAR_6 * sizeof(struct drm_connector *)), VAR_5);
 if (VAR_13 == ((void*)0))
  return;

 FUNC_2(VAR_10, &VAR_13->base, &VAR_8);

 FUNC_3(&VAR_13->base, 256);
 VAR_13->crtc_id = VAR_11;
 VAR_13->flip_queue = FUNC_1("radeon-crtc", VAR_7, 0);
 VAR_12->mode_info.crtcs[VAR_11] = VAR_13;

 if (VAR_12->family >= VAR_0) {
  VAR_13->max_cursor_width = VAR_2;
  VAR_13->max_cursor_height = VAR_1;
 } else {
  VAR_13->max_cursor_width = VAR_4;
  VAR_13->max_cursor_height = VAR_3;
 }
 VAR_10->mode_config.cursor_width = VAR_13->max_cursor_width;
 VAR_10->mode_config.cursor_height = VAR_13->max_cursor_height;







 for (VAR_14 = 0; VAR_14 < 256; VAR_14++) {
  VAR_13->lut_r[VAR_14] = VAR_14 << 2;
  VAR_13->lut_g[VAR_14] = VAR_14 << 2;
  VAR_13->lut_b[VAR_14] = VAR_14 << 2;
 }

 if (VAR_12->is_atom_bios && (FUNC_0(VAR_12) || VAR_9))
  FUNC_5(VAR_10, VAR_13);
 else
  FUNC_6(VAR_10, VAR_13);
}
