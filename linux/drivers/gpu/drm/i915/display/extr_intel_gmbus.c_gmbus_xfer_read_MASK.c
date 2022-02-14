
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {unsigned int len; int addr; int * buf; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,int ,int *,unsigned int,int ,int ) ;
 unsigned int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_4(struct drm_i915_private *VAR_1, struct i2c_msg *VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 u8 *VAR_5 = VAR_2->buf;
 unsigned int VAR_6 = VAR_2->len;
 unsigned int VAR_7;
 int VAR_8;

 do {
  if (FUNC_0(VAR_1))
   VAR_7 = FUNC_3(VAR_6, VAR_0);
  else
   VAR_7 = FUNC_3(VAR_6, FUNC_1(VAR_1));

  VAR_8 = FUNC_2(VAR_1, VAR_2->addr, VAR_5, VAR_7,
         VAR_3, VAR_4);
  if (VAR_8)
   return VAR_8;

  VAR_6 -= VAR_7;
  VAR_5 += VAR_7;
 } while (VAR_6 != 0);

 return 0;
}
