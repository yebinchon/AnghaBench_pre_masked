
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_error_state_buf {scalar_t__ bytes; scalar_t__ size; scalar_t__ buf; scalar_t__ err; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_error_state_buf*,unsigned int) ;
 int FUNC_2 (scalar_t__,char const*,unsigned int) ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_error_state_buf *VAR_0, const char *VAR_1)
{
 unsigned VAR_2;

 if (VAR_0->err || !VAR_1)
  return;

 VAR_2 = FUNC_3(VAR_1);
 if (!FUNC_1(VAR_0, VAR_2))
  return;

 FUNC_0(VAR_0->bytes + VAR_2 > VAR_0->size);
 FUNC_2(VAR_0->buf + VAR_0->bytes, VAR_1, VAR_2);
 VAR_0->bytes += VAR_2;
}
