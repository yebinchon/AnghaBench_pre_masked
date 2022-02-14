
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vmw_private {scalar_t__ active_display_unit; int stdu_max_height; int stdu_max_width; int texture_max_height; int texture_max_width; scalar_t__ assume_16bpp; } ;
struct vmw_display_unit {int pref_width; scalar_t__ pref_height; struct drm_display_mode* pref_mode; } ;
struct drm_display_mode {int hdisplay; scalar_t__ vdisplay; scalar_t__ type; int vrefresh; int head; int member_0; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int modes; struct drm_device* dev; } ;


 int FUNC_0 (char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_device*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_3 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_display_mode*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 struct vmw_display_unit* FUNC_9 (struct drm_connector*) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (struct drm_display_mode*) ;
 struct drm_display_mode* VAR_5 ;
 scalar_t__ FUNC_11 (struct vmw_private*,int,scalar_t__) ;
 struct vmw_private* FUNC_12 (struct drm_device*) ;

int FUNC_13(struct drm_connector *VAR_6,
    uint32_t VAR_7, uint32_t VAR_8)
{
 struct vmw_display_unit *VAR_9 = FUNC_9(VAR_6);
 struct drm_device *VAR_10 = VAR_6->dev;
 struct vmw_private *VAR_11 = FUNC_12(VAR_10);
 struct drm_display_mode *VAR_12 = ((void*)0);
 struct drm_display_mode *VAR_13;
 struct drm_display_mode VAR_14 = { FUNC_0("preferred",
  VAR_2 | VAR_3,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  VAR_0 | VAR_1)
 };
 int VAR_15;
 u32 VAR_16 = 4;

 if (VAR_11->assume_16bpp)
  VAR_16 = 2;

 VAR_7 = FUNC_8(VAR_7, VAR_11->texture_max_width);
 VAR_8 = FUNC_8(VAR_8, VAR_11->texture_max_height);





 if (VAR_11->active_display_unit == VAR_4) {
  VAR_7 = FUNC_8(VAR_7, VAR_11->stdu_max_width);
  VAR_8 = FUNC_8(VAR_8, VAR_11->stdu_max_height);
 }


 VAR_12 = FUNC_3(VAR_10, &VAR_14);
 if (!VAR_12)
  return 0;
 VAR_12->hdisplay = VAR_9->pref_width;
 VAR_12->vdisplay = VAR_9->pref_height;
 FUNC_10(VAR_12);

 if (FUNC_11(VAR_11,
     VAR_12->hdisplay * VAR_16,
     VAR_12->vdisplay)) {
  FUNC_4(VAR_6, VAR_12);
 } else {
  FUNC_2(VAR_10, VAR_12);
  VAR_12 = ((void*)0);
 }

 if (VAR_9->pref_mode) {
  FUNC_7(&VAR_9->pref_mode->head);
  FUNC_2(VAR_10, VAR_9->pref_mode);
 }


 VAR_9->pref_mode = VAR_12;

 for (VAR_15 = 0; VAR_5[VAR_15].type != 0; VAR_15++) {
  VAR_13 = &VAR_5[VAR_15];
  if (VAR_13->hdisplay > VAR_7 ||
      VAR_13->vdisplay > VAR_8)
   continue;

  if (!FUNC_11(VAR_11,
      VAR_13->hdisplay * VAR_16,
      VAR_13->vdisplay))
   continue;

  VAR_12 = FUNC_3(VAR_10, VAR_13);
  if (!VAR_12)
   return 0;
  VAR_12->vrefresh = FUNC_6(VAR_12);

  FUNC_4(VAR_6, VAR_12);
 }

 FUNC_1(VAR_6);

 FUNC_5(&VAR_6->modes);

 return 1;
}
