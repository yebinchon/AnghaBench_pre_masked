
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int active_device; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,struct drm_display_mode*) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_4(struct drm_encoder *VAR_1,
         const struct drm_display_mode *VAR_2,
         struct drm_display_mode *VAR_3)
{
 struct radeon_encoder *VAR_4 = FUNC_3(VAR_1);


 FUNC_1(VAR_1);
 FUNC_0(VAR_3, 0);


 if (VAR_4->active_device & (VAR_0))
  FUNC_2(VAR_1, VAR_3);

 return 1;
}
