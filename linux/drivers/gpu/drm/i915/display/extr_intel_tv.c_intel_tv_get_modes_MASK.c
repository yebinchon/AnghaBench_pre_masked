
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int component_only; int progressive; } ;
struct input_res {int w; scalar_t__ h; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; int state; } ;


 int FUNC_0 (struct input_res*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 struct drm_display_mode* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_display_mode*) ;
 int FUNC_5 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_6 (struct drm_display_mode*) ;
 struct input_res* VAR_0 ;
 struct tv_mode* FUNC_7 (int ) ;
 int FUNC_8 (struct drm_display_mode*,struct tv_mode const*) ;
 scalar_t__ FUNC_9 (struct tv_mode const*) ;
 int FUNC_10 (struct drm_display_mode*,int,int ,int ) ;
 int FUNC_11 (struct drm_display_mode*,scalar_t__,int ,int ) ;
 int FUNC_12 (struct drm_display_mode*,struct tv_mode const*) ;
 struct drm_i915_private* FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct drm_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_13(VAR_1->dev);
 const struct tv_mode *VAR_3 = FUNC_7(VAR_1->state);
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct input_res *VAR_6 = &VAR_0[VAR_4];
  struct drm_display_mode *VAR_7;

  if (VAR_6->w > 1024 &&
      !VAR_3->progressive &&
      !VAR_3->component_only)
   continue;


  if (FUNC_2(VAR_2, 3) && VAR_6->w > 1024 &&
      VAR_6->h > FUNC_9(VAR_3))
   continue;

  VAR_7 = FUNC_3(VAR_1->dev);
  if (!VAR_7)
   continue;
  FUNC_8(VAR_7, VAR_3);
  if (VAR_5 == 0) {
   FUNC_1("TV mode:\n");
   FUNC_4(VAR_7);
  }
  FUNC_10(VAR_7, VAR_6->w, 0, 0);
  FUNC_11(VAR_7, VAR_6->h, 0, 0);
  FUNC_12(VAR_7, VAR_3);

  FUNC_6(VAR_7);

  FUNC_5(VAR_1, VAR_7);
  VAR_5++;
 }

 return VAR_5;
}
