
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int crtc; } ;
struct drm_display_mode {int clock; } ;
struct amdgpu_encoder {int pixel_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_encoder*,int ) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*,int) ;
 int FUNC_4 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_5 (int ,struct drm_display_mode*) ;
 struct amdgpu_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_7(struct drm_encoder *VAR_2,
     struct drm_display_mode *VAR_3,
     struct drm_display_mode *VAR_4)
{

 struct amdgpu_encoder *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = FUNC_2(VAR_2);

 VAR_5->pixel_clock = VAR_4->clock;


 FUNC_1(VAR_2, VAR_1);


 FUNC_5(VAR_2->crtc, VAR_3);

 if (VAR_6 == VAR_0 || FUNC_0(VAR_6)) {
  FUNC_3(VAR_2, 1);
  FUNC_4(VAR_2, VAR_4);
 }
}
