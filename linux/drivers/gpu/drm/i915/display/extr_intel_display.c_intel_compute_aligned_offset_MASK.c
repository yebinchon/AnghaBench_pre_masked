
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct TYPE_2__ {unsigned int* cpp; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int*,int*,unsigned int,unsigned int,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (struct drm_framebuffer const*,int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static u32 FUNC_6(struct drm_i915_private *VAR_0,
     int *VAR_1, int *VAR_2,
     const struct drm_framebuffer *VAR_3,
     int VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6,
     u32 VAR_7)
{
 unsigned int VAR_8 = VAR_3->format->cpp[VAR_4];
 u32 VAR_9, VAR_10;

 if (VAR_7)
  VAR_7--;

 if (!FUNC_4(VAR_3->modifier, VAR_4)) {
  unsigned int VAR_11, VAR_12, VAR_13;
  unsigned int VAR_14, VAR_15, VAR_16;

  VAR_11 = FUNC_3(VAR_0);
  FUNC_2(VAR_3, VAR_4, &VAR_12, &VAR_13);

  if (FUNC_0(VAR_6)) {
   VAR_16 = VAR_5 / VAR_13;
   FUNC_5(VAR_12, VAR_13);
  } else {
   VAR_16 = VAR_5 / (VAR_12 * VAR_8);
  }

  VAR_14 = *VAR_2 / VAR_13;
  *VAR_2 %= VAR_13;

  VAR_15 = *VAR_1 / VAR_12;
  *VAR_1 %= VAR_12;

  VAR_9 = (VAR_14 * VAR_16 + VAR_15) * VAR_11;
  VAR_10 = VAR_9 & ~VAR_7;

  FUNC_1(VAR_1, VAR_2, VAR_12, VAR_13,
      VAR_11, VAR_16,
      VAR_9, VAR_10);
 } else {
  VAR_9 = *VAR_2 * VAR_5 + *VAR_1 * VAR_8;
  VAR_10 = VAR_9 & ~VAR_7;

  *VAR_2 = (VAR_9 & VAR_7) / VAR_5;
  *VAR_1 = ((VAR_9 & VAR_7) - *VAR_2 * VAR_5) / VAR_8;
 }

 return VAR_10;
}
