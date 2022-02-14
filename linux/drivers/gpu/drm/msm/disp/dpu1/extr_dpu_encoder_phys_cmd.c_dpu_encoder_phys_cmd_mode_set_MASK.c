
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {struct drm_display_mode cached_mode; } ;


 int FUNC_0 (struct dpu_encoder_phys_cmd*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct dpu_encoder_phys_cmd* FUNC_4 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_5(
  struct dpu_encoder_phys *VAR_0,
  struct drm_display_mode *VAR_1,
  struct drm_display_mode *VAR_2)
{
 struct dpu_encoder_phys_cmd *VAR_3 =
  FUNC_4(VAR_0);

 if (!VAR_0 || !VAR_1 || !VAR_2) {
  FUNC_1("invalid args\n");
  return;
 }
 VAR_0->cached_mode = *VAR_2;
 FUNC_0(VAR_3, "caching mode:\n");
 FUNC_3(VAR_2);

 FUNC_2(VAR_0);
}
