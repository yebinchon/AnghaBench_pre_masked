
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {char* name; } ;
struct drm_i915_error_state_buf {int dummy; } ;
struct drm_i915_error_object {int page_count; int ** pages; scalar_t__ unused; int gtt_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_error_state_buf*) ;
 int FUNC_3 (struct drm_i915_error_state_buf*,char*,char*,char const*,int ,int ) ;
 int FUNC_4 (struct drm_i915_error_state_buf*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_error_state_buf *VAR_2,
       const struct intel_engine_cs *VAR_3,
       const char *VAR_4,
       const struct drm_i915_error_object *VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7;

 if (!VAR_5)
  return;

 if (VAR_4) {
  FUNC_3(VAR_2, "%s --- %s = 0x%08x %08x\n",
      VAR_3 ? VAR_3->name : "global", VAR_4,
      FUNC_6(VAR_5->gtt_offset),
      FUNC_5(VAR_5->gtt_offset));
 }

 FUNC_2(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_5->page_count; VAR_7++) {
  int VAR_8, VAR_9;

  VAR_9 = VAR_1;
  if (VAR_7 == VAR_5->page_count - 1)
   VAR_9 -= VAR_5->unused;
  VAR_9 = FUNC_1(VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   FUNC_4(VAR_2, FUNC_0(VAR_5->pages[VAR_7][VAR_8], VAR_6));
 }
 FUNC_4(VAR_2, "\n");
}
