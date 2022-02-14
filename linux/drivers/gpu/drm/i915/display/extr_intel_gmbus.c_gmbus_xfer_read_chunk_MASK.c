
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct drm_i915_private *VAR_11,
        unsigned short VAR_12, u8 *VAR_13, unsigned int VAR_14,
        u32 VAR_15, u32 VAR_16)
{
 unsigned int VAR_17 = VAR_14;
 bool VAR_18 = VAR_14 > FUNC_2(VAR_11);
 bool VAR_19 = 0;

 if (VAR_18) {




  if (VAR_14 == 512) {
   VAR_19 = 1;
   VAR_14++;
  }
  VAR_17 = VAR_14 % 256 + 256;
  FUNC_1(VAR_0, VAR_15 | VAR_3);
 }

 FUNC_1(VAR_1,
        VAR_16 |
        VAR_5 |
        (VAR_17 << VAR_4) |
        (VAR_12 << VAR_8) |
        VAR_9 | VAR_10);
 while (VAR_14) {
  int VAR_20;
  u32 VAR_21, VAR_22 = 0;

  VAR_20 = FUNC_3(VAR_11, VAR_6, VAR_7);
  if (VAR_20)
   return VAR_20;

  VAR_21 = FUNC_0(VAR_2);
  do {
   if (VAR_19 && VAR_14 == 1)
    break;

   *VAR_13++ = VAR_21 & 0xff;
   VAR_21 >>= 8;
  } while (--VAR_14 && ++VAR_22 < 4);

  if (VAR_18 && VAR_14 == VAR_17 - 4)

   FUNC_1(VAR_0, VAR_15);
 }

 return 0;
}
