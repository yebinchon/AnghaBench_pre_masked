
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {unsigned int len; int addr; int * buf; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int ,int *,unsigned int,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_3(struct drm_i915_private *VAR_0, struct i2c_msg *VAR_1,
   u32 VAR_2)
{
 u8 *VAR_3 = VAR_1->buf;
 unsigned int VAR_4 = VAR_1->len;
 unsigned int VAR_5;
 int VAR_6;

 do {
  VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_0));

  VAR_6 = FUNC_1(VAR_0, VAR_1->addr, VAR_3, VAR_5,
          VAR_2);
  if (VAR_6)
   return VAR_6;

  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 } while (VAR_4 != 0);

 return 0;
}
