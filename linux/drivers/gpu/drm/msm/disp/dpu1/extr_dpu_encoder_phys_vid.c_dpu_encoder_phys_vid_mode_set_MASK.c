
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct dpu_encoder_phys {struct drm_display_mode cached_mode; int dpu_kms; } ;


 int FUNC_0 (struct dpu_encoder_phys*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 int FUNC_3 (struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_4(
  struct dpu_encoder_phys *VAR_0,
  struct drm_display_mode *VAR_1,
  struct drm_display_mode *VAR_2)
{
 if (!VAR_0 || !VAR_0->dpu_kms) {
  FUNC_1("invalid encoder/kms\n");
  return;
 }

 if (VAR_2) {
  VAR_0->cached_mode = *VAR_2;
  FUNC_3(VAR_2);
  FUNC_0(VAR_0, "caching mode:\n");
 }

 FUNC_2(VAR_0);
}
