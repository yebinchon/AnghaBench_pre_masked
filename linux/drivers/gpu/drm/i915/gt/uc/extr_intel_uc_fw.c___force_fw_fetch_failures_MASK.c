
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc_fw {char* path; int user_overridden; scalar_t__ minor_ver_wanted; scalar_t__ major_ver_wanted; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uc_fw *VAR_1,
          struct drm_i915_private *VAR_2,
          int VAR_3)
{
 bool VAR_4 = VAR_3 == -VAR_0;

 if (FUNC_0(VAR_2, VAR_3)) {

  VAR_1->path = "<invalid>";
  VAR_1->user_overridden = VAR_4;
 } else if (FUNC_0(VAR_2, VAR_3)) {

  VAR_1->major_ver_wanted += 1;
  VAR_1->minor_ver_wanted = 0;
  VAR_1->user_overridden = VAR_4;
 } else if (FUNC_0(VAR_2, VAR_3)) {

  VAR_1->minor_ver_wanted += 1;
  VAR_1->user_overridden = VAR_4;
 } else if (VAR_1->major_ver_wanted && FUNC_0(VAR_2, VAR_3)) {

  VAR_1->major_ver_wanted -= 1;
  VAR_1->minor_ver_wanted = 0;
  VAR_1->user_overridden = VAR_4;
 } else if (VAR_1->minor_ver_wanted && FUNC_0(VAR_2, VAR_3)) {

  VAR_1->minor_ver_wanted -= 1;
  VAR_1->user_overridden = VAR_4;
 } else if (VAR_4 && FUNC_0(VAR_2, VAR_3)) {

  VAR_1->major_ver_wanted = 0;
  VAR_1->minor_ver_wanted = 0;
  VAR_1->user_overridden = 1;
 }
}
