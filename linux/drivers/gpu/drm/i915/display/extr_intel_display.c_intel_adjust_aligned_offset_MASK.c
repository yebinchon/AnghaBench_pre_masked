
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; int dev; } ;
struct TYPE_2__ {unsigned int* cpp; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int*,int*,unsigned int,unsigned int,unsigned int,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct drm_framebuffer const*,int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static u32 FUNC_8(int *VAR_0, int *VAR_1,
           const struct drm_framebuffer *VAR_2,
           int VAR_3,
           unsigned int VAR_4,
           unsigned int VAR_5,
           u32 VAR_6, u32 VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_7(VAR_2->dev);
 unsigned int VAR_9 = VAR_2->format->cpp[VAR_3];

 FUNC_0(VAR_7 > VAR_6);

 if (!FUNC_5(VAR_2->modifier, VAR_3)) {
  unsigned int VAR_10, VAR_11, VAR_12;
  unsigned int VAR_13;

  VAR_10 = FUNC_4(VAR_8);
  FUNC_3(VAR_2, VAR_3, &VAR_11, &VAR_12);

  if (FUNC_1(VAR_4)) {
   VAR_13 = VAR_5 / VAR_12;
   FUNC_6(VAR_11, VAR_12);
  } else {
   VAR_13 = VAR_5 / (VAR_11 * VAR_9);
  }

  FUNC_2(VAR_0, VAR_1, VAR_11, VAR_12,
      VAR_10, VAR_13,
      VAR_6, VAR_7);
 } else {
  VAR_6 += *VAR_1 * VAR_5 + *VAR_0 * VAR_9;

  *VAR_1 = (VAR_6 - VAR_7) / VAR_5;
  *VAR_0 = ((VAR_6 - VAR_7) - *VAR_1 * VAR_5) / VAR_9;
 }

 return VAR_7;
}
