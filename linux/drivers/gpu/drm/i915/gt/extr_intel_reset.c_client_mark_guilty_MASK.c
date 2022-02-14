
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int name; } ;
struct drm_i915_file_private {int ban_score; int hang_timestamp; } ;


 int FUNC_0 (char*,int ,unsigned int,int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct i915_gem_context const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_file_private *VAR_4,
          const struct i915_gem_context *VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;

 if (FUNC_3(VAR_5))
  VAR_6 = VAR_1;
 else
  VAR_6 = 0;

 VAR_7 = FUNC_5(&VAR_4->hang_timestamp, VAR_3);
 if (FUNC_4(VAR_3, VAR_7 + VAR_0))
  VAR_6 += VAR_2;

 if (VAR_6) {
  FUNC_1(VAR_6, &VAR_4->ban_score);

  FUNC_0("client %s: gained %u ban score, now %u\n",
     VAR_5->name, VAR_6,
     FUNC_2(&VAR_4->ban_score));
 }
}
