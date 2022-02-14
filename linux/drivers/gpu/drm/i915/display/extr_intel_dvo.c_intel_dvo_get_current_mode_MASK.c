
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct drm_display_mode {int type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (struct intel_encoder*) ;

__attribute__((used)) static struct drm_display_mode *
FUNC_3(struct intel_encoder *VAR_1)
{
 struct drm_display_mode *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("using current (BIOS) mode: ");
  FUNC_1(VAR_2);
  VAR_2->type |= VAR_0;
 }

 return VAR_2;
}
