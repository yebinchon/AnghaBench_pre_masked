
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gpu_state {int sgl; int i915; } ;
struct drm_i915_error_state_buf {scalar_t__ cur; scalar_t__ end; int err; scalar_t__ sgl; int * buf; scalar_t__ bytes; int iter; int i915; } ;
typedef int m ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_gpu_state*) ;
 int FUNC_2 (struct i915_gpu_state*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_error_state_buf*,struct i915_gpu_state*) ;
 int FUNC_5 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct drm_i915_error_state_buf*,int ,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct i915_gpu_state *VAR_0)
{
 struct drm_i915_error_state_buf VAR_1;

 if (FUNC_1(VAR_0))
  return FUNC_2(VAR_0);

 if (FUNC_3(VAR_0->sgl))
  return 0;

 FUNC_8(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.i915 = VAR_0->i915;

 FUNC_4(&VAR_1, VAR_0);

 if (VAR_1.buf) {
  FUNC_5(VAR_1.cur++, VAR_1.buf, VAR_1.bytes, VAR_1.iter);
  VAR_1.bytes = 0;
  VAR_1.buf = ((void*)0);
 }
 if (VAR_1.cur) {
  FUNC_0(VAR_1.end < VAR_1.cur);
  FUNC_9(VAR_1.cur - 1);
 }
 FUNC_0(VAR_1.sgl && !VAR_1.cur);

 if (VAR_1.err) {
  FUNC_7(VAR_1.sgl);
  return VAR_1.err;
 }

 if (FUNC_6(&VAR_0->sgl, ((void*)0), VAR_1.sgl))
  FUNC_7(VAR_1.sgl);

 return 0;
}
