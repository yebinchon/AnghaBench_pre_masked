
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int crtc; } ;
struct drm_display_mode {int clock; } ;
struct amdgpu_encoder {int pixel_clock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_encoder*,int ) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int) ;
 int FUNC_3 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_4 (int ,struct drm_display_mode*) ;
 struct amdgpu_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_6(struct drm_encoder *VAR_2,
     struct drm_display_mode *VAR_3,
     struct drm_display_mode *VAR_4)
{
 struct amdgpu_encoder *VAR_5 = FUNC_5(VAR_2);

 VAR_5->pixel_clock = VAR_4->clock;


 FUNC_0(VAR_2, VAR_1);


 FUNC_4(VAR_2->crtc, VAR_3);

 if (FUNC_1(VAR_2) == VAR_0) {
  FUNC_2(VAR_2, 1);
  FUNC_3(VAR_2, VAR_4);
 }
}
