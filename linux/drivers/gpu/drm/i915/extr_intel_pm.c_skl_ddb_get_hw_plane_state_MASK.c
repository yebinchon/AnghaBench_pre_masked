
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_ddb_entry {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int const,int const) ;
 int FUNC_4 (int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_5 (int const,int const) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct drm_i915_private*,struct skl_ddb_entry*,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(struct drm_i915_private *VAR_5,
      const enum pipe VAR_6,
      const enum plane_id VAR_7,
      struct skl_ddb_entry *VAR_8,
      struct skl_ddb_entry *VAR_9)
{
 u32 VAR_10, VAR_11;
 u32 VAR_12 = 0;


 if (VAR_7 == VAR_4) {
  VAR_10 = FUNC_1(FUNC_0(VAR_6));
  FUNC_7(VAR_5, VAR_8, VAR_10);
  return;
 }

 VAR_10 = FUNC_1(FUNC_4(VAR_6, VAR_7));


 if (VAR_10 & VAR_1)
  VAR_12 = FUNC_8(VAR_10 & VAR_2,
           VAR_10 & VAR_3,
           VAR_10 & VAR_0);

 if (FUNC_2(VAR_5) >= 11) {
  VAR_10 = FUNC_1(FUNC_3(VAR_6, VAR_7));
  FUNC_7(VAR_5, VAR_8, VAR_10);
 } else {
  VAR_10 = FUNC_1(FUNC_3(VAR_6, VAR_7));
  VAR_11 = FUNC_1(FUNC_5(VAR_6, VAR_7));

  if (FUNC_6(VAR_12))
   FUNC_9(VAR_10, VAR_11);

  FUNC_7(VAR_5, VAR_8, VAR_10);
  FUNC_7(VAR_5, VAR_9, VAR_11);
 }
}
