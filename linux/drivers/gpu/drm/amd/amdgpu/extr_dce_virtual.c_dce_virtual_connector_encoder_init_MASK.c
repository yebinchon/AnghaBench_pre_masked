
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int possible_crtcs; } ;
struct TYPE_2__ {int subpixel_order; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; TYPE_1__ display_info; } ;
struct amdgpu_device {int ddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (int ,struct drm_connector*,int *,int ) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_encoder*,int *) ;
 int FUNC_5 (int ,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_6 (struct drm_encoder*) ;
 void* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_9,
           int VAR_10)
{
 struct drm_encoder *VAR_11;
 struct drm_connector *VAR_12;


 VAR_11 = FUNC_7(sizeof(struct drm_encoder), VAR_3);
 if (!VAR_11)
  return -VAR_2;
 VAR_11->possible_crtcs = 1 << VAR_10;
 FUNC_5(VAR_9->ddev, VAR_11, &VAR_7,
    VAR_1, ((void*)0));
 FUNC_4(VAR_11, &VAR_8);

 VAR_12 = FUNC_7(sizeof(struct drm_connector), VAR_3);
 if (!VAR_12) {
  FUNC_6(VAR_11);
  return -VAR_2;
 }


 FUNC_2(VAR_9->ddev, VAR_12, &VAR_5,
      VAR_0);
 FUNC_1(VAR_12, &VAR_6);
 VAR_12->display_info.subpixel_order = VAR_4;
 VAR_12->interlace_allowed = 0;
 VAR_12->doublescan_allowed = 0;
 FUNC_3(VAR_12);


 FUNC_0(VAR_12, VAR_11);

 return 0;
}
