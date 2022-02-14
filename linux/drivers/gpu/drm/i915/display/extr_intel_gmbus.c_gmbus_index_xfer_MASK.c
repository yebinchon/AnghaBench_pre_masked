
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int len; int* buf; int flags; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*,struct i2c_msg*,int,int) ;
 int FUNC_2 (struct drm_i915_private*,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_i915_private *VAR_5, struct i2c_msg *VAR_6,
   u32 VAR_7)
{
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;

 if (VAR_6[0].len == 2)
  VAR_9 = VAR_1 |
    VAR_6[0].buf[1] | (VAR_6[0].buf[0] << 8);
 if (VAR_6[0].len == 1)
  VAR_8 = VAR_2 |
          (VAR_6[0].buf[0] << VAR_3);


 if (VAR_9)
  FUNC_0(VAR_0, VAR_9);

 if (VAR_6[1].flags & VAR_4)
  VAR_10 = FUNC_1(VAR_5, &VAR_6[1], VAR_7,
          VAR_8);
 else
  VAR_10 = FUNC_2(VAR_5, &VAR_6[1], VAR_8);


 if (VAR_9)
  FUNC_0(VAR_0, 0);

 return VAR_10;
}
