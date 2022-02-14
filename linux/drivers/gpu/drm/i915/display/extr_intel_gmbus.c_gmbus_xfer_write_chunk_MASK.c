
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct drm_i915_private *VAR_9,
         unsigned short VAR_10, u8 *VAR_11, unsigned int VAR_12,
         u32 VAR_13)
{
 unsigned int VAR_14 = VAR_12;
 u32 VAR_15, VAR_16;

 VAR_15 = VAR_16 = 0;
 while (VAR_12 && VAR_16 < 4) {
  VAR_15 |= *VAR_11++ << (8 * VAR_16++);
  VAR_12 -= 1;
 }

 FUNC_0(VAR_1, VAR_15);
 FUNC_0(VAR_0,
        VAR_13 | VAR_3 |
        (VAR_14 << VAR_2) |
        (VAR_10 << VAR_6) |
        VAR_7 | VAR_8);
 while (VAR_12) {
  int VAR_17;

  VAR_15 = VAR_16 = 0;
  do {
   VAR_15 |= *VAR_11++ << (8 * VAR_16);
  } while (--VAR_12 && ++VAR_16 < 4);

  FUNC_0(VAR_1, VAR_15);

  VAR_17 = FUNC_1(VAR_9, VAR_4, VAR_5);
  if (VAR_17)
   return VAR_17;
 }

 return 0;
}
